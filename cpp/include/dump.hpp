#include <bits/stdc++.h>
using namespace std;

#define DUMPOUT std::cerr

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
ostream &operator<<(ostream &os, const vector<int> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto &e : vec)
  {
    ss << ",";
    if (e >= 1073741823 - 100)
      ss << "∞";
    else if (e <= -1073741823 + 100)
      ss << "-∞";
    else
      ss << e;
  }
  os << ss.str().substr(1) << "}";
  return os;
}
ostream &operator<<(ostream &os, const vector<long long> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto &e : vec)
  {
    ss << ",";
    if (e >= 152921504606846976 - 100)
      ss << "∞";
    else if (e <= -1152921504606846976 + 100)
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
ostream &operator<<(ostream &os, const array<long long, n> &vec)
{
  if (vec.empty())
    return os << "{}";
  stringstream ss;
  os << "{";
  for (auto &e : vec)
  {
    ss << ",";
    if (e >= 152921504606846976 - 100)
      ss << "∞";
    else if (e <= -1152921504606846976 + 100)
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

// 32bit可視化
void vdump_func(int bits)
{
  bitset<32> bt(bits);
  DUMPOUT << bt.to_string() << endl;
}

// 64bit可視化
void vdump_func(long long bits)
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

// グリッド可視化(一次元化 int用)
void vdump_func(vector<int> &grid, int h, int w, int padding_length = 2)
{
  for (int i = 0; i < h; i++)
  {
    stringstream ss;
    for (int j = 0; j < w; j++)
    {
      ss << ",";
      if (grid[i * w + j] >= 1073741823 - 100)
        ss << string(padding_length - 1, ' ') << "∞";
      else if (grid[i * w + j] <= -1073741823 + 100)
        ss << string(padding_length - 2, ' ') << "-∞";
      else
        ss << std::right << std::setw(padding_length) << std::setfill(' ') << grid[i * w + j];
    }
    DUMPOUT << ss.str().substr(1) << endl;
  }
}

// グリッド可視化(一次元化 long long用)
void vdump_func(vector<long long> &grid, int h, int w, int padding_length = 2)
{
  for (int i = 0; i < h; i++)
  {
    stringstream ss;
    for (int j = 0; j < w; j++)
    {
      ss << ",";
      if (grid[i * w + j] >= 152921504606846976LL - 100)
        ss << string(padding_length - 1, ' ') << "∞";
      else if (grid[i * w + j] <= -152921504606846976LL + 100)
        ss << string(padding_length - 2, ' ') << "-∞";
      else
        ss << std::right << std::setw(padding_length) << std::setfill(' ') << grid[i * w + j];
    }
    DUMPOUT << ss.str().substr(1) << endl;
  }
}

// グリッド可視化(二次元 int用)
void vdump_func(vector<vector<int>> &grid, int padding_length = 2)
{
  if (grid.size() == 0)
    return;
  int h = grid.size(), w = grid[0].size();
  for (int i = 0; i < h; i++)
  {
    stringstream ss;
    for (int j = 0; j < w; j++)
    {
      ss << ",";
      if (grid[i][j] >= 1073741823 - 100)
        ss << string(padding_length - 1, ' ') << "∞";
      else if (grid[i][j] <= -1073741823 + 100)
        ss << string(padding_length - 2, ' ') << "-∞";
      else
        ss << std::right << std::setw(padding_length) << std::setfill(' ') << grid[i][j];
    }
    DUMPOUT << ss.str().substr(1) << endl;
  }
}

// グリッド可視化(二次元 long long用)
void vdump_func(vector<vector<long long>> &grid, int padding_length = 2)
{
  if (grid.size() == 0)
    return;
  int h = grid.size(), w = grid[0].size();
  for (int i = 0; i < h; i++)
  {
    stringstream ss;
    for (int j = 0; j < w; j++)
    {
      ss << ",";
      if (grid[i][j] >= 152921504606846976LL - 100)
        ss << string(padding_length - 1, ' ') << "∞";
      else if (grid[i][j] <= -152921504606846976LL + 100)
        ss << string(padding_length - 2, ' ') << "-∞";
      else
        ss << std::right << std::setw(padding_length) << std::setfill(' ') << grid[i][j];
    }
    DUMPOUT << ss.str().substr(1) << endl;
  }
}

// グリッド可視化(二次元 long double用)
void vdump_func(vector<vector<long double>> &grid, int padding_length = 8)
{
  if (grid.size() == 0)
    return;
  int h = grid.size(), w = grid[0].size();
  for (int i = 0; i < h; i++)
  {
    stringstream ss;
    for (int j = 0; j < w; j++)
    {
      ss << ",";
      if (grid[i][j] >= 152921504606846976LL - 100)
        ss << string(padding_length - 1, ' ') << "∞";
      else if (grid[i][j] <= -152921504606846976LL + 100)
        ss << string(padding_length - 2, ' ') << "-∞";
      else
        ss << std::right << std::setw(padding_length) << std::setfill(' ') << grid[i][j];
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