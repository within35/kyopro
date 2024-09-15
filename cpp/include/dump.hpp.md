---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"cpp/include/dump.hpp\"\n#include <algorithm>\n#include <array>\n\
    #include <bitset>\n#include <cassert>\n#include <chrono>\n#include <cmath>\n#include\
    \ <complex>\n#include <deque>\n#include <forward_list>\n#include <fstream>\n#include\
    \ <functional>\n#include <iomanip>\n#include <ios>\n#include <iostream>\n#include\
    \ <limits>\n#include <list>\n#include <map>\n#include <memory>\n#include <numeric>\n\
    #include <optional>\n#include <queue>\n#include <random>\n#include <set>\n#include\
    \ <sstream>\n#include <stack>\n#include <string>\n#include <tuple>\n#include <type_traits>\n\
    #include <unordered_map>\n#include <unordered_set>\n#include <utility>\n#include\
    \ <vector>\nusing namespace std;\n\n#define DUMPOUT std::cerr\n#define INT64_INFINITY\
    \ 152921504606846976\n\ntemplate <class T>\nostream &operator<<(ostream &os, const\
    \ vector<T> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream\
    \ ss;\n  os << \"{\";\n  for (auto e : vec)\n    ss << \",\" << e;\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\nostream &operator<<(ostream &os, const vector<int64_t>\
    \ &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  os << \"{\";\n  for (auto &e : vec)\n  {\n    ss << \",\";\n    if (e >= INT64_INFINITY\
    \ - 100)\n      ss << \"\u221E\";\n    else if (e <= -INT64_INFINITY + 100)\n\
    \      ss << \"-\u221E\";\n    else\n      ss << e;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T, size_t n>\nostream &operator<<(ostream\
    \ &os, const array<T, n> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\"\
    ;\n  stringstream ss;\n  os << \"(\";\n  for (size_t i = 0; i < n; ++i)\n    ss\
    \ << \",\" << vec[i];\n  os << ss.str().substr(1) << \")\";\n  return os;\n}\n\
    template <size_t n>\nostream &operator<<(ostream &os, const array<int64_t, n>\
    \ &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  os << \"{\";\n  for (auto &e : vec)\n  {\n    ss << \",\";\n    if (e >= INT64_INFINITY\
    \ - 100)\n      ss << \"\u221E\";\n    else if (e <= -INT64_INFINITY + 100)\n\
    \      ss << \"-\u221E\";\n    else\n      ss << e;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\ntemplate <class T, size_t n>\nostream &operator<<(ostream\
    \ &os, const vector<array<T, n>> &vec)\n{\n  if (vec.empty())\n    return os <<\
    \ \"{}\";\n  stringstream ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n \
    \   ss << \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n\
    }\n\ntemplate <class T>\nostream &operator<<(ostream &os, const valarray<T> &vec)\n\
    {\n  if (vec.size() == 0)\n    return os << \"{}\";\n  stringstream ss;\n  os\
    \ << \"{\";\n  for (auto e : vec)\n    ss << \",\" << e;\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T, class U>\nostream &operator<<(ostream\
    \ &os, const pair<T, U> &vec)\n{\n  os << \"(\" << vec.first << \", \" << vec.second\
    \ << \")\";\n  return os;\n}\ntemplate <class T, class U>\nostream &operator<<(ostream\
    \ &os, const vector<pair<T, U>> &vec)\n{\n  if (vec.empty())\n    return os <<\
    \ \"{}\";\n  stringstream ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n \
    \   ss << \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n\
    }\ntemplate <class T, class U>\nostream &operator<<(ostream &os, const vector<vector<pair<T,\
    \ U>>> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream\
    \ ss;\n  os << \"{\";\n  for(auto eachVec: vec)\n  {\n    for (auto itr : eachVec)\n\
    \    {\n      ss << \",\" << itr;\n    }\n  }\n\n  os << ss.str().substr(1) <<\
    \ \"}\";\n  return os;\n}\n\ntemplate <class T, class U, class V>\nostream &operator<<(ostream\
    \ &os, const tuple<T, U, V> &vec)\n{\n  os << \"(\" << get<0>(vec) << \", \" <<\
    \ get<1>(vec) << \", \" << get<2>(vec) << \")\";\n  return os;\n}\ntemplate <class\
    \ T, class U, class V>\nostream &operator<<(ostream &os, const vector<tuple<T,\
    \ U, V>> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream\
    \ ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n\
    \  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\ntemplate <class\
    \ T>\nostream &operator<<(ostream &os, queue<T> que)\n{\n  if (que.empty())\n\
    \    return os << \"{}\";\n  stringstream ss;\n  os << \"{\";\n  while (!que.empty())\n\
    \  {\n    ss << \",\" << que.front();\n    que.pop();\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, stack<T> que)\n{\n  if (que.empty())\n    return os << \"{}\";\n  stringstream\
    \ ss;\n  os << \"{\";\n  while (!que.empty())\n  {\n    ss << \",\" << que.top();\n\
    \    que.pop();\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\n\
    template <class T>\nostream &operator<<(ostream &os, priority_queue<T> que)\n\
    {\n  if (que.empty())\n    return os << \"{}\";\n  stringstream ss;\n  os << \"\
    {\";\n  while (!que.empty())\n  {\n    ss << \",\" << que.top();\n    que.pop();\n\
    \  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\ntemplate <class\
    \ T>\nostream &operator<<(ostream &os, priority_queue<T, vector<T>, greater<T>>\
    \ que)\n{\n  if (que.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  os << \"{\";\n  while (!que.empty())\n  {\n    ss << \",\" << que.top();\n\
    \    que.pop();\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\n\
    template <class T>\nostream &operator<<(ostream &os, const deque<T> &vec)\n{\n\
    \  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n  os << \"\
    {\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T, class U>\nostream &operator<<(ostream\
    \ &os, const map<T, U> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n\
    \  stringstream ss;\n  for (auto [key,e] : vec)\n  {\n    ss << \"\\n\" << key\
    \ << \":\" << e;\n  }\n  os << ss.str().substr(1);\n  return os;\n}\n\ntemplate\
    \ <class T, class U>\nostream &operator<<(ostream &os, const map<T, vector<U>>\
    \ &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  for (auto [key,e] : vec)\n  {\n    ss << \"\\n\" << key << \":\" << e;\n  }\n\
    \  os << ss.str().substr(1);\n  return os;\n}\n\ntemplate <class T, class U>\n\
    ostream &operator<<(ostream &os, const unordered_map<T, U> &vec)\n{\n  if (vec.empty())\n\
    \    return os << \"{}\";\n  stringstream ss;\n  for (auto [key,e] : vec)\n  {\n\
    \    ss << \"\\n\" << key << \":\" << e;\n  }\n  os << ss.str().substr(1);\n \
    \ return os;\n}\ntemplate <class T, class U>\nostream &operator<<(ostream &os,\
    \ const unordered_map<T, vector<U>> &vec)\n{\n  if (vec.empty())\n    return os\
    \ << \"{}\";\n  stringstream ss;\n  for (auto [key,e] : vec)\n  {\n    ss << \"\
    \\n\" << key << \":\" << e;\n  }\n  os << ss.str().substr(1);\n  return os;\n\
    }\n\ntemplate <class T>\nostream &operator<<(ostream &os, const set<T> &vec)\n\
    {\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n  os << \"\
    {\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\ntemplate <class T, class U>\nostream &operator<<(ostream\
    \ &os, const set<pair<T, U>> &vec)\n{\n  if (vec.empty())\n    return os << \"\
    {}\";\n  stringstream ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n    ss\
    \ << \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n\
    }\ntemplate <class T>\nostream &operator<<(ostream &os, const set<vector<T>> &vec)\n\
    {\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n  os << \"\
    {\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const multiset<T> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\"\
    ;\n  stringstream ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n    ss <<\
    \ \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\
    template <class T, class U>\nostream &operator<<(ostream &os, const multiset<pair<T,\
    \ U>> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  os << \"{\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n  }\n \
    \ os << ss.str().substr(1) << \"}\";\n  return os;\n}\ntemplate <class T>\nostream\
    \ &operator<<(ostream &os, const multiset<vector<T>> &vec)\n{\n  if (vec.empty())\n\
    \    return os << \"{}\";\n  stringstream ss;\n  os << \"{\";\n  for (auto itr\
    \ : vec)\n  {\n    ss << \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"\
    }\";\n  return os;\n}\n\ntemplate <class T>\nostream &operator<<(ostream &os,\
    \ const complex<T> &var)\n{\n  os << \"(\" << var.real() << \", \" << var.imag()\
    \ << \"i)\";\n  return os;\n}\n\n// 8bit\u53EF\u8996\u5316\nvoid vdump_func(char\
    \ bits)\n{\n  bitset<8> bt(bits);\n  DUMPOUT << bt.to_string() << endl;\n}\n\n\
    // 64bit\u53EF\u8996\u5316\nvoid vdump_func(int64_t bits)\n{\n  bitset<64> bt(bits);\n\
    \  DUMPOUT << bt.to_string() << endl;\n}\n\n// \u30B0\u30EA\u30C3\u30C9\u53EF\u8996\
    \u5316(\u6587\u5B57\u5217\u7528)\nvoid vdump_func(vector<string> &grid)\n{\n \
    \ for (auto &&e : grid)\n    DUMPOUT << e << endl;\n}\n\n// \u30BB\u30B0\u30E1\
    \u30F3\u30C8\u53EF\u8996\u5316\nvoid vdump_func(map<int64_t,vector<string>> &mp,\
    \ int64_t inf = INT64_INFINITY, int64_t padding_length = 3)\n{\n  if (mp.empty())\
    \ {\n    DUMPOUT << \"{}\" << endl;\n    return;\n  }\n\n  int64_t maxDepth =\
    \ 0;\n  for (auto [depth,vec] : mp) {\n    if (maxDepth < depth) maxDepth = depth;\n\
    \    for (string str: vec) {\n      if (padding_length < str.size()) padding_length\
    \ = str.size();\n    }\n  }\n\n  stringstream ss;\n  for (auto [depth,vec] : mp)\n\
    \  {\n    ss << \"\\n\" << depth << \"|\";\n    for (string str: vec) {\n    \
    \  int64_t requireSpace = (maxDepth - depth) + 1;\n      int64_t width = str.size();\n\
    \      int64_t leftSpace = (((padding_length) << requireSpace) - width - 1) /\
    \ 2;\n      int64_t rightSpace =  (((padding_length) << requireSpace) - width\
    \ - 1) - leftSpace;\n      ss << string(leftSpace, ' ') << str << string(rightSpace,\
    \ ' ') << \"|\";\n\n    }\n  }\n  DUMPOUT << ss.str().substr(1) << endl;\n}\n\n\
    \n// \u30B0\u30EA\u30C3\u30C9\u53EF\u8996\u5316(\u4E00\u6B21\u5143\u5316 int64_t\u7528\
    )\nvoid vdump_func(vector<int64_t> &grid, int64_t h, int64_t w, int64_t inf =\
    \ INT64_INFINITY, int64_t padding_length = 2)\n{\n  for (int64_t i = 0; i < h;\
    \ i++)\n  {\n    stringstream ss;\n    for (int64_t j = 0; j < w; j++)\n    {\n\
    \      ss << \",\";\n      if (grid[i * w + j] >= inf - 100)\n        ss << string(padding_length\
    \ - 1, ' ') << \"\u221E\";\n      else if (grid[i * w + j] <= -inf + 100)\n  \
    \      ss << string(padding_length - 2, ' ') << \"-\u221E\";\n      else\n   \
    \     ss << std::right << std::setw(padding_length) << std::setfill(' ') << grid[i\
    \ * w + j];\n    }\n    DUMPOUT << ss.str().substr(1) << endl;\n  }\n}\n\n// \u30B0\
    \u30EA\u30C3\u30C9\u53EF\u8996\u5316(\u4E8C\u6B21\u5143 int64_t\u7528)\nvoid vdump_func(vector<vector<int64_t>>\
    \ &grid, int64_t inf = INT64_INFINITY, int64_t padding_length = 2)\n{\n  if (grid.size()\
    \ == 0)\n    return;\n  int64_t h = grid.size(), w = grid[0].size();\n  for (int64_t\
    \ i = 0; i < h; i++)\n  {\n    stringstream ss;\n    for (int64_t j = 0; j < w;\
    \ j++)\n    {\n      ss << \",\";\n      if (grid[i][j] >= inf - 100)\n      \
    \  ss << string(padding_length - 1, ' ') << \"\u221E\";\n      else if (grid[i][j]\
    \ <= -inf + 100)\n        ss << string(padding_length - 2, ' ') << \"-\u221E\"\
    ;\n      else\n        ss << std::right << std::setw(padding_length) << std::setfill('\
    \ ') << grid[i][j];\n    }\n    DUMPOUT << ss.str().substr(1) << endl;\n  }\n\
    }\n\n// \u30B0\u30EA\u30C3\u30C9\u53EF\u8996\u5316(\u4E8C\u6B21\u5143 long double\u7528\
    )\nvoid vdump_func(vector<vector<long double>> &grid, int64_t padding_length =\
    \ 8, int64_t precision = 1000)\n{\n  if (grid.size() == 0)\n    return;\n  int64_t\
    \ h = grid.size(), w = grid[0].size();\n  for (int64_t i = 0; i < h; i++)\n  {\n\
    \    stringstream ss;\n    for (int64_t j = 0; j < w; j++)\n    {\n      ss <<\
    \ \",\";\n      if (grid[i][j] >= INT64_INFINITY - 100)\n        ss << string(padding_length\
    \ - 1, ' ') << \"\u221E\";\n      else if (grid[i][j] <= -INT64_INFINITY + 100)\n\
    \        ss << string(padding_length - 2, ' ') << \"-\u221E\";\n      else\n \
    \       ss << std::right << std::setw(padding_length) << std::setfill(' ') <<\
    \ roundl(grid[i][j] * precision) / precision;\n    }\n    DUMPOUT << ss.str().substr(1)\
    \ << endl;\n  }\n}\n\nvoid dump_func()\n{\n  DUMPOUT << endl;\n}\ntemplate <class\
    \ Head, class... Tail>\nvoid dump_func(Head &&head, Tail &&...tail)\n{\n  DUMPOUT\
    \ << head;\n  if (sizeof...(Tail) > 0)\n  {\n    DUMPOUT << \", \";\n  }\n  dump_func(std::move(tail)...);\n\
    }\n"
  code: "#include <algorithm>\n#include <array>\n#include <bitset>\n#include <cassert>\n\
    #include <chrono>\n#include <cmath>\n#include <complex>\n#include <deque>\n#include\
    \ <forward_list>\n#include <fstream>\n#include <functional>\n#include <iomanip>\n\
    #include <ios>\n#include <iostream>\n#include <limits>\n#include <list>\n#include\
    \ <map>\n#include <memory>\n#include <numeric>\n#include <optional>\n#include\
    \ <queue>\n#include <random>\n#include <set>\n#include <sstream>\n#include <stack>\n\
    #include <string>\n#include <tuple>\n#include <type_traits>\n#include <unordered_map>\n\
    #include <unordered_set>\n#include <utility>\n#include <vector>\nusing namespace\
    \ std;\n\n#define DUMPOUT std::cerr\n#define INT64_INFINITY 152921504606846976\n\
    \ntemplate <class T>\nostream &operator<<(ostream &os, const vector<T> &vec)\n\
    {\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n  os << \"\
    {\";\n  for (auto e : vec)\n    ss << \",\" << e;\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\nostream &operator<<(ostream &os, const vector<int64_t>\
    \ &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  os << \"{\";\n  for (auto &e : vec)\n  {\n    ss << \",\";\n    if (e >= INT64_INFINITY\
    \ - 100)\n      ss << \"\u221E\";\n    else if (e <= -INT64_INFINITY + 100)\n\
    \      ss << \"-\u221E\";\n    else\n      ss << e;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T, size_t n>\nostream &operator<<(ostream\
    \ &os, const array<T, n> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\"\
    ;\n  stringstream ss;\n  os << \"(\";\n  for (size_t i = 0; i < n; ++i)\n    ss\
    \ << \",\" << vec[i];\n  os << ss.str().substr(1) << \")\";\n  return os;\n}\n\
    template <size_t n>\nostream &operator<<(ostream &os, const array<int64_t, n>\
    \ &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  os << \"{\";\n  for (auto &e : vec)\n  {\n    ss << \",\";\n    if (e >= INT64_INFINITY\
    \ - 100)\n      ss << \"\u221E\";\n    else if (e <= -INT64_INFINITY + 100)\n\
    \      ss << \"-\u221E\";\n    else\n      ss << e;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\ntemplate <class T, size_t n>\nostream &operator<<(ostream\
    \ &os, const vector<array<T, n>> &vec)\n{\n  if (vec.empty())\n    return os <<\
    \ \"{}\";\n  stringstream ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n \
    \   ss << \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n\
    }\n\ntemplate <class T>\nostream &operator<<(ostream &os, const valarray<T> &vec)\n\
    {\n  if (vec.size() == 0)\n    return os << \"{}\";\n  stringstream ss;\n  os\
    \ << \"{\";\n  for (auto e : vec)\n    ss << \",\" << e;\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T, class U>\nostream &operator<<(ostream\
    \ &os, const pair<T, U> &vec)\n{\n  os << \"(\" << vec.first << \", \" << vec.second\
    \ << \")\";\n  return os;\n}\ntemplate <class T, class U>\nostream &operator<<(ostream\
    \ &os, const vector<pair<T, U>> &vec)\n{\n  if (vec.empty())\n    return os <<\
    \ \"{}\";\n  stringstream ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n \
    \   ss << \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n\
    }\ntemplate <class T, class U>\nostream &operator<<(ostream &os, const vector<vector<pair<T,\
    \ U>>> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream\
    \ ss;\n  os << \"{\";\n  for(auto eachVec: vec)\n  {\n    for (auto itr : eachVec)\n\
    \    {\n      ss << \",\" << itr;\n    }\n  }\n\n  os << ss.str().substr(1) <<\
    \ \"}\";\n  return os;\n}\n\ntemplate <class T, class U, class V>\nostream &operator<<(ostream\
    \ &os, const tuple<T, U, V> &vec)\n{\n  os << \"(\" << get<0>(vec) << \", \" <<\
    \ get<1>(vec) << \", \" << get<2>(vec) << \")\";\n  return os;\n}\ntemplate <class\
    \ T, class U, class V>\nostream &operator<<(ostream &os, const vector<tuple<T,\
    \ U, V>> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream\
    \ ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n\
    \  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\ntemplate <class\
    \ T>\nostream &operator<<(ostream &os, queue<T> que)\n{\n  if (que.empty())\n\
    \    return os << \"{}\";\n  stringstream ss;\n  os << \"{\";\n  while (!que.empty())\n\
    \  {\n    ss << \",\" << que.front();\n    que.pop();\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, stack<T> que)\n{\n  if (que.empty())\n    return os << \"{}\";\n  stringstream\
    \ ss;\n  os << \"{\";\n  while (!que.empty())\n  {\n    ss << \",\" << que.top();\n\
    \    que.pop();\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\n\
    template <class T>\nostream &operator<<(ostream &os, priority_queue<T> que)\n\
    {\n  if (que.empty())\n    return os << \"{}\";\n  stringstream ss;\n  os << \"\
    {\";\n  while (!que.empty())\n  {\n    ss << \",\" << que.top();\n    que.pop();\n\
    \  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\ntemplate <class\
    \ T>\nostream &operator<<(ostream &os, priority_queue<T, vector<T>, greater<T>>\
    \ que)\n{\n  if (que.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  os << \"{\";\n  while (!que.empty())\n  {\n    ss << \",\" << que.top();\n\
    \    que.pop();\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\n\
    template <class T>\nostream &operator<<(ostream &os, const deque<T> &vec)\n{\n\
    \  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n  os << \"\
    {\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T, class U>\nostream &operator<<(ostream\
    \ &os, const map<T, U> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n\
    \  stringstream ss;\n  for (auto [key,e] : vec)\n  {\n    ss << \"\\n\" << key\
    \ << \":\" << e;\n  }\n  os << ss.str().substr(1);\n  return os;\n}\n\ntemplate\
    \ <class T, class U>\nostream &operator<<(ostream &os, const map<T, vector<U>>\
    \ &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  for (auto [key,e] : vec)\n  {\n    ss << \"\\n\" << key << \":\" << e;\n  }\n\
    \  os << ss.str().substr(1);\n  return os;\n}\n\ntemplate <class T, class U>\n\
    ostream &operator<<(ostream &os, const unordered_map<T, U> &vec)\n{\n  if (vec.empty())\n\
    \    return os << \"{}\";\n  stringstream ss;\n  for (auto [key,e] : vec)\n  {\n\
    \    ss << \"\\n\" << key << \":\" << e;\n  }\n  os << ss.str().substr(1);\n \
    \ return os;\n}\ntemplate <class T, class U>\nostream &operator<<(ostream &os,\
    \ const unordered_map<T, vector<U>> &vec)\n{\n  if (vec.empty())\n    return os\
    \ << \"{}\";\n  stringstream ss;\n  for (auto [key,e] : vec)\n  {\n    ss << \"\
    \\n\" << key << \":\" << e;\n  }\n  os << ss.str().substr(1);\n  return os;\n\
    }\n\ntemplate <class T>\nostream &operator<<(ostream &os, const set<T> &vec)\n\
    {\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n  os << \"\
    {\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\ntemplate <class T, class U>\nostream &operator<<(ostream\
    \ &os, const set<pair<T, U>> &vec)\n{\n  if (vec.empty())\n    return os << \"\
    {}\";\n  stringstream ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n    ss\
    \ << \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n\
    }\ntemplate <class T>\nostream &operator<<(ostream &os, const set<vector<T>> &vec)\n\
    {\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n  os << \"\
    {\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n  }\n  os << ss.str().substr(1)\
    \ << \"}\";\n  return os;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const multiset<T> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\"\
    ;\n  stringstream ss;\n  os << \"{\";\n  for (auto itr : vec)\n  {\n    ss <<\
    \ \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"}\";\n  return os;\n}\n\
    template <class T, class U>\nostream &operator<<(ostream &os, const multiset<pair<T,\
    \ U>> &vec)\n{\n  if (vec.empty())\n    return os << \"{}\";\n  stringstream ss;\n\
    \  os << \"{\";\n  for (auto itr : vec)\n  {\n    ss << \",\" << itr;\n  }\n \
    \ os << ss.str().substr(1) << \"}\";\n  return os;\n}\ntemplate <class T>\nostream\
    \ &operator<<(ostream &os, const multiset<vector<T>> &vec)\n{\n  if (vec.empty())\n\
    \    return os << \"{}\";\n  stringstream ss;\n  os << \"{\";\n  for (auto itr\
    \ : vec)\n  {\n    ss << \",\" << itr;\n  }\n  os << ss.str().substr(1) << \"\
    }\";\n  return os;\n}\n\ntemplate <class T>\nostream &operator<<(ostream &os,\
    \ const complex<T> &var)\n{\n  os << \"(\" << var.real() << \", \" << var.imag()\
    \ << \"i)\";\n  return os;\n}\n\n// 8bit\u53EF\u8996\u5316\nvoid vdump_func(char\
    \ bits)\n{\n  bitset<8> bt(bits);\n  DUMPOUT << bt.to_string() << endl;\n}\n\n\
    // 64bit\u53EF\u8996\u5316\nvoid vdump_func(int64_t bits)\n{\n  bitset<64> bt(bits);\n\
    \  DUMPOUT << bt.to_string() << endl;\n}\n\n// \u30B0\u30EA\u30C3\u30C9\u53EF\u8996\
    \u5316(\u6587\u5B57\u5217\u7528)\nvoid vdump_func(vector<string> &grid)\n{\n \
    \ for (auto &&e : grid)\n    DUMPOUT << e << endl;\n}\n\n// \u30BB\u30B0\u30E1\
    \u30F3\u30C8\u53EF\u8996\u5316\nvoid vdump_func(map<int64_t,vector<string>> &mp,\
    \ int64_t inf = INT64_INFINITY, int64_t padding_length = 3)\n{\n  if (mp.empty())\
    \ {\n    DUMPOUT << \"{}\" << endl;\n    return;\n  }\n\n  int64_t maxDepth =\
    \ 0;\n  for (auto [depth,vec] : mp) {\n    if (maxDepth < depth) maxDepth = depth;\n\
    \    for (string str: vec) {\n      if (padding_length < str.size()) padding_length\
    \ = str.size();\n    }\n  }\n\n  stringstream ss;\n  for (auto [depth,vec] : mp)\n\
    \  {\n    ss << \"\\n\" << depth << \"|\";\n    for (string str: vec) {\n    \
    \  int64_t requireSpace = (maxDepth - depth) + 1;\n      int64_t width = str.size();\n\
    \      int64_t leftSpace = (((padding_length) << requireSpace) - width - 1) /\
    \ 2;\n      int64_t rightSpace =  (((padding_length) << requireSpace) - width\
    \ - 1) - leftSpace;\n      ss << string(leftSpace, ' ') << str << string(rightSpace,\
    \ ' ') << \"|\";\n\n    }\n  }\n  DUMPOUT << ss.str().substr(1) << endl;\n}\n\n\
    \n// \u30B0\u30EA\u30C3\u30C9\u53EF\u8996\u5316(\u4E00\u6B21\u5143\u5316 int64_t\u7528\
    )\nvoid vdump_func(vector<int64_t> &grid, int64_t h, int64_t w, int64_t inf =\
    \ INT64_INFINITY, int64_t padding_length = 2)\n{\n  for (int64_t i = 0; i < h;\
    \ i++)\n  {\n    stringstream ss;\n    for (int64_t j = 0; j < w; j++)\n    {\n\
    \      ss << \",\";\n      if (grid[i * w + j] >= inf - 100)\n        ss << string(padding_length\
    \ - 1, ' ') << \"\u221E\";\n      else if (grid[i * w + j] <= -inf + 100)\n  \
    \      ss << string(padding_length - 2, ' ') << \"-\u221E\";\n      else\n   \
    \     ss << std::right << std::setw(padding_length) << std::setfill(' ') << grid[i\
    \ * w + j];\n    }\n    DUMPOUT << ss.str().substr(1) << endl;\n  }\n}\n\n// \u30B0\
    \u30EA\u30C3\u30C9\u53EF\u8996\u5316(\u4E8C\u6B21\u5143 int64_t\u7528)\nvoid vdump_func(vector<vector<int64_t>>\
    \ &grid, int64_t inf = INT64_INFINITY, int64_t padding_length = 2)\n{\n  if (grid.size()\
    \ == 0)\n    return;\n  int64_t h = grid.size(), w = grid[0].size();\n  for (int64_t\
    \ i = 0; i < h; i++)\n  {\n    stringstream ss;\n    for (int64_t j = 0; j < w;\
    \ j++)\n    {\n      ss << \",\";\n      if (grid[i][j] >= inf - 100)\n      \
    \  ss << string(padding_length - 1, ' ') << \"\u221E\";\n      else if (grid[i][j]\
    \ <= -inf + 100)\n        ss << string(padding_length - 2, ' ') << \"-\u221E\"\
    ;\n      else\n        ss << std::right << std::setw(padding_length) << std::setfill('\
    \ ') << grid[i][j];\n    }\n    DUMPOUT << ss.str().substr(1) << endl;\n  }\n\
    }\n\n// \u30B0\u30EA\u30C3\u30C9\u53EF\u8996\u5316(\u4E8C\u6B21\u5143 long double\u7528\
    )\nvoid vdump_func(vector<vector<long double>> &grid, int64_t padding_length =\
    \ 8, int64_t precision = 1000)\n{\n  if (grid.size() == 0)\n    return;\n  int64_t\
    \ h = grid.size(), w = grid[0].size();\n  for (int64_t i = 0; i < h; i++)\n  {\n\
    \    stringstream ss;\n    for (int64_t j = 0; j < w; j++)\n    {\n      ss <<\
    \ \",\";\n      if (grid[i][j] >= INT64_INFINITY - 100)\n        ss << string(padding_length\
    \ - 1, ' ') << \"\u221E\";\n      else if (grid[i][j] <= -INT64_INFINITY + 100)\n\
    \        ss << string(padding_length - 2, ' ') << \"-\u221E\";\n      else\n \
    \       ss << std::right << std::setw(padding_length) << std::setfill(' ') <<\
    \ roundl(grid[i][j] * precision) / precision;\n    }\n    DUMPOUT << ss.str().substr(1)\
    \ << endl;\n  }\n}\n\nvoid dump_func()\n{\n  DUMPOUT << endl;\n}\ntemplate <class\
    \ Head, class... Tail>\nvoid dump_func(Head &&head, Tail &&...tail)\n{\n  DUMPOUT\
    \ << head;\n  if (sizeof...(Tail) > 0)\n  {\n    DUMPOUT << \", \";\n  }\n  dump_func(std::move(tail)...);\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: cpp/include/dump.hpp
  requiredBy: []
  timestamp: '2024-09-15 10:23:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: cpp/include/dump.hpp
layout: document
redirect_from:
- /library/cpp/include/dump.hpp
- /library/cpp/include/dump.hpp.html
title: cpp/include/dump.hpp
---
