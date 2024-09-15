#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <deque>
#include <forward_list>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <optional>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

#define DUMPOUT std::cerr
#define INT64_INFINITY 152921504606846976

template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto e : vec)
    ss << "," << e;
  os << ss.str().substr(1) << "}";
  return os;
}
ostream &operator<<(ostream &os, const vector<int64_t> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto &e : vec)
  {
    ss << ",";
    if (e >= INT64_INFINITY - 100)
      ss << "∞";
    else if (e <= -INT64_INFINITY + 100)
      ss << "-∞";
    else
      ss << e;
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T, size_t n>
ostream &operator<<(ostream &os, const array<T, n> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "(";
  for (size_t i = 0; i < n; ++i)
    ss << "," << vec[i];
  os << ss.str().substr(1) << ")";
  return os;
}
template <size_t n>
ostream &operator<<(ostream &os, const array<int64_t, n> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto &e : vec)
  {
    ss << ",";
    if (e >= INT64_INFINITY - 100)
      ss << "∞";
    else if (e <= -INT64_INFINITY + 100)
      ss << "-∞";
    else
      ss << e;
  }
  os << ss.str().substr(1) << "}";
  return os;
}
template <class T, size_t n>
ostream &operator<<(ostream &os, const vector<array<T, n>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T>
ostream &operator<<(ostream &os, const valarray<T> &vec)
{
  if (vec.size() == 0)
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto e : vec)
    ss << "," << e;
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &vec)
{
  os << "(" << vec.first << ", " << vec.second << ")";
  return os;
}
template <class T, class U>
ostream &operator<<(ostream &os, const vector<pair<T, U>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}
template <class T, class U>
ostream &operator<<(ostream &os, const vector<vector<pair<T, U>>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for(auto eachVec: vec)
  {
    for (auto itr : eachVec)
    {
      ss << "," << itr;
    }
  }

  os << ss.str().substr(1) << "}";
  return os;
}

template <class T, class U, class V>
ostream &operator<<(ostream &os, const tuple<T, U, V> &vec)
{
  os << "(" << get<0>(vec) << ", " << get<1>(vec) << ", " << get<2>(vec) << ")";
  return os;
}
template <class T, class U, class V>
ostream &operator<<(ostream &os, const vector<tuple<T, U, V>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T>
ostream &operator<<(ostream &os, queue<T> que)
{
  if (que.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  while (!que.empty())
  {
    ss << "," << que.front();
    que.pop();
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T>
ostream &operator<<(ostream &os, stack<T> que)
{
  if (que.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  while (!que.empty())
  {
    ss << "," << que.top();
    que.pop();
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T>
ostream &operator<<(ostream &os, priority_queue<T> que)
{
  if (que.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  while (!que.empty())
  {
    ss << "," << que.top();
    que.pop();
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T>
ostream &operator<<(ostream &os, priority_queue<T, vector<T>, greater<T>> que)
{
  if (que.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  while (!que.empty())
  {
    ss << "," << que.top();
    que.pop();
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T>
ostream &operator<<(ostream &os, const deque<T> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T, class U>
ostream &operator<<(ostream &os, const map<T, U> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  for (auto [key,e] : vec)
  {
    ss << "\n" << key << ":" << e;
  }
  os << ss.str().substr(1);
  return os;
}

template <class T, class U>
ostream &operator<<(ostream &os, const map<T, vector<U>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  for (auto [key,e] : vec)
  {
    ss << "\n" << key << ":" << e;
  }
  os << ss.str().substr(1);
  return os;
}

template <class T, class U>
ostream &operator<<(ostream &os, const unordered_map<T, U> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  for (auto [key,e] : vec)
  {
    ss << "\n" << key << ":" << e;
  }
  os << ss.str().substr(1);
  return os;
}
template <class T, class U>
ostream &operator<<(ostream &os, const unordered_map<T, vector<U>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  for (auto [key,e] : vec)
  {
    ss << "\n" << key << ":" << e;
  }
  os << ss.str().substr(1);
  return os;
}

template <class T>
ostream &operator<<(ostream &os, const set<T> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}
template <class T, class U>
ostream &operator<<(ostream &os, const set<pair<T, U>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}
template <class T>
ostream &operator<<(ostream &os, const set<vector<T>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T>
ostream &operator<<(ostream &os, const multiset<T> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}
template <class T, class U>
ostream &operator<<(ostream &os, const multiset<pair<T, U>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}
template <class T>
ostream &operator<<(ostream &os, const multiset<vector<T>> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto itr : vec)
  {
    ss << "," << itr;
  }
  os << ss.str().substr(1) << "}";
  return os;
}

template <class T>
ostream &operator<<(ostream &os, const complex<T> &var)
{
  os << "(" << var.real() << ", " << var.imag() << "i)";
  return os;
}

// 8bit可視化
void vdump_func(char bits)
{
  bitset<8> bt(bits);
  DUMPOUT << bt.to_string() << endl;
}

// 64bit可視化
void vdump_func(int64_t bits)
{
  bitset<64> bt(bits);
  DUMPOUT << bt.to_string() << endl;
}

// グリッド可視化(文字列用)
void vdump_func(vector<string> &grid)
{
  for (auto &&e : grid)
    DUMPOUT << e << endl;
}

// セグメント可視化
void vdump_func(map<int64_t,vector<string>> &mp, int64_t inf = INT64_INFINITY, int64_t padding_length = 3)
{
  if (mp.empty()) {
    DUMPOUT << "{}" << endl;
    return;
  }

  int64_t maxDepth = 0;
  for (auto [depth,vec] : mp) {
    if (maxDepth < depth) maxDepth = depth;
    for (string str: vec) {
      if (padding_length < str.size()) padding_length = str.size();
    }
  }

  stringstream ss;
  for (auto [depth,vec] : mp)
  {
    ss << "\n" << depth << "|";
    for (string str: vec) {
      int64_t requireSpace = (maxDepth - depth) + 1;
      int64_t width = str.size();
      int64_t leftSpace = (((padding_length) << requireSpace) - width - 1) / 2;
      int64_t rightSpace =  (((padding_length) << requireSpace) - width - 1) - leftSpace;
      ss << string(leftSpace, ' ') << str << string(rightSpace, ' ') << "|";

    }
  }
  DUMPOUT << ss.str().substr(1) << endl;
}


// グリッド可視化(一次元化 int64_t用)
void vdump_func(vector<int64_t> &grid, int64_t h, int64_t w, int64_t inf = INT64_INFINITY, int64_t padding_length = 2)
{
  for (int64_t i = 0; i < h; i++)
  {
    stringstream ss;
    for (int64_t j = 0; j < w; j++)
    {
      ss << ",";
      if (grid[i * w + j] >= inf - 100)
        ss << string(padding_length - 1, ' ') << "∞";
      else if (grid[i * w + j] <= -inf + 100)
        ss << string(padding_length - 2, ' ') << "-∞";
      else
        ss << std::right << std::setw(padding_length) << std::setfill(' ') << grid[i * w + j];
    }
    DUMPOUT << ss.str().substr(1) << endl;
  }
}

// グリッド可視化(二次元 int64_t用)
void vdump_func(vector<vector<int64_t>> &grid, int64_t inf = INT64_INFINITY, int64_t padding_length = 2)
{
  if (grid.size() == 0)
    return;
  int64_t h = grid.size(), w = grid[0].size();
  for (int64_t i = 0; i < h; i++)
  {
    stringstream ss;
    for (int64_t j = 0; j < w; j++)
    {
      ss << ",";
      if (grid[i][j] >= inf - 100)
        ss << string(padding_length - 1, ' ') << "∞";
      else if (grid[i][j] <= -inf + 100)
        ss << string(padding_length - 2, ' ') << "-∞";
      else
        ss << std::right << std::setw(padding_length) << std::setfill(' ') << grid[i][j];
    }
    DUMPOUT << ss.str().substr(1) << endl;
  }
}

// グリッド可視化(二次元 long double用)
void vdump_func(vector<vector<long double>> &grid, int64_t padding_length = 8, int64_t precision = 1000)
{
  if (grid.size() == 0)
    return;
  int64_t h = grid.size(), w = grid[0].size();
  for (int64_t i = 0; i < h; i++)
  {
    stringstream ss;
    for (int64_t j = 0; j < w; j++)
    {
      ss << ",";
      if (grid[i][j] >= INT64_INFINITY - 100)
        ss << string(padding_length - 1, ' ') << "∞";
      else if (grid[i][j] <= -INT64_INFINITY + 100)
        ss << string(padding_length - 2, ' ') << "-∞";
      else
        ss << std::right << std::setw(padding_length) << std::setfill(' ') << roundl(grid[i][j] * precision) / precision;
    }
    DUMPOUT << ss.str().substr(1) << endl;
  }
}

void dump_func()
{
  DUMPOUT << endl;
}
template <class Head, class... Tail>
void dump_func(Head &&head, Tail &&...tail)
{
  DUMPOUT << head;
  if (sizeof...(Tail) > 0)
  {
    DUMPOUT << ", ";
  }
  dump_func(std::move(tail)...);
}