---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template.cpp\"\n// #define Q__OPTIMIZE\n// #define Q__INCLUDE_ATCODER_LIB\n\
    // #define Q__INTERACTIVE\n#ifdef INCLUDED_MAIN\n\n\nstruct Solver {\n  void solve()\
    \ {\n\n  }\n\n  void naive() {\n\n  }\n} solver;\n\n\n\nsigned main(void){\n \
    \ NO_SYNC_STD;\n  V<string> options;\n#ifdef Q__OPTIMIZE\n  options.push_back(\"\
    OPTIMIZE\");\n#endif\n#ifdef Q__INTERACTIVE\n  options.push_back(\"INTERACTIVE\"\
    );\n#endif\n#ifdef Q__INCLUDE_ATCODER_LIB\n  options.push_back(\"INCLUDE_ATCODER_LIB\"\
    );\n#endif\n  DUMP(options);\n#ifndef Q__NAIVE\n  solver.solve();\n#else\n  DUMP(\"\
    naive\");\n  solver.naive();\n#endif\n  return 0;\n}\n\n#else\n#define _GLIBCXX_DEQUE_BUF_SIZE\
    \ 64\n#ifdef Q__OPTIMIZE\n#pragma optimize(\"\", on)\n#ifndef Q__LOCAL\n#pragma\
    \ GCC target(\"avx\")\n#endif\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"\
    unroll-loops\")\n#endif\n#include <algorithm>\n#include <array>\n#include <bitset>\n\
    #include <cassert>\n#include <chrono>\n#include <cmath>\n#include <complex>\n\
    #include <deque>\n#include <forward_list>\n#include <fstream>\n#include <functional>\n\
    #include <iomanip>\n#include <ios>\n#include <iostream>\n#include <limits>\n#include\
    \ <list>\n#include <map>\n#include <memory>\n#include <numeric>\n#include <optional>\n\
    #include <optional>\n#include <queue>\n#include <random>\n#include <regex>\n#include\
    \ <set>\n#include <sstream>\n#include <stack>\n#include <string>\n#include <thread>\n\
    #include <tuple>\n#include <type_traits>\n#include <unordered_map>\n#include <unordered_set>\n\
    #include <utility>\n#include <vector>\n#ifdef Q__INCLUDE_ATCODER_LIB\n#include\
    \ <atcoder/all>\nusing namespace atcoder;\n//using mint = modint1000000007;\n\
    using mint = modint998244353;\nstd::istream &operator>>(std::istream& is, mint&\
    \ a) { int64_t tmp; is >> tmp; a = tmp; return is; }\nstd::ostream &operator<<(std::ostream&\
    \ os, const mint& a) {os << a.val(); return os;}\n#endif\nusing namespace std;\n\
    #define MOD 998244353\n#define OVERLOAD4(a, b, c, d, e, ...) e\n#define REP1(a)\
    \          for(decltype(a) i = 0, i##_len = (a); i < i##_len; ++i)\n#define REP2(i,\
    \ a)       for(decltype(a) i = 0, i##_len = (a); i < i##_len; ++i)\n#define REP3(i,\
    \ a, b)    for(decltype(b) i = (a), i##_len = (b); i < i##_len; ++i)\n#define\
    \ REP4(i, a, b, c) for(decltype(b) i = (a), i##_len = (b); i < i##_len; i += (c))\n\
    #define REP(...) OVERLOAD4(__VA_ARGS__, REP4, REP3, REP2, REP1)(__VA_ARGS__)\n\
    #define RREP1(a)          for(decltype(a) i = (a); i--;)\n#define RREP2(i, a)\
    \       for(decltype(a) i = (a); i--;)\n#define RREP3(i, a, b)    for(decltype(a)\
    \ i = (b), i##_len = (a); i-- > i##_len;)\n#define RREP4(i, a, b, c) for(decltype(a)\
    \ i = (a)+((b)-(a)-1)/(c)*(c), i##_len = (a); i >= i##_len; i -= c)\n#define RREP(...)\
    \ OVERLOAD4(__VA_ARGS__, RREP4, RREP3, RREP2, RREP1)(__VA_ARGS__)\n#define MREP(v,...)\
    \ for(auto v:make_enum_vec({__VA_ARGS__}))\n#define QREP(q, l, r, n) for (int64_t\
    \ q = 1, l = n / (q + 1) + 1, r = n / q + 1; q <= n; q = (q == n ? n + 1 : n /\
    \ (n / (q + 1))), l = n / (q + 1) + 1, r = n / q + 1)\n#define COMB_REP(i,n,k)\
    \ for (int64_t t, i = POW2(k) - 1; i < POW2(n); t=i|(i-1), i = (t+1)|(((~t & -\
    \ ~t)-1) >> (__builtin_ctzll(i)+1)))\n#define SUBSET_ENUM_REP(i,s) for (int64_t\
    \ i = (1LL << 60) - 1; i >= 0, i &= s; --i)\n#define SUBSET_INCLUDE_REP(i,n,s)\
    \ for (int64_t i = s; i < POW2(n); i=(++i)|s)\n#define POPONLY_REP(i,s) for (int64_t\
    \ i=s&-s; i; i=s&(~s+(i << 1)))\n#define ALL(x)  (x).begin(), (x).end()\n#define\
    \ RALL(x) (x).rbegin(), (x).rend()\n#define SZ(x)   ((int)(x).size())\n#define\
    \ POW2(n)      (1LL << ((int)(n)))\n#define GET1BIT(x,n) (((x) >> (int)(n)) &\
    \ 1)\n#ifndef M_PI\n#define M_PI 3.14159265358979323846\n#endif\n#define INFL\
    \ (1LL << 60)\n#define PRECISION std::setprecision(16)\n#define SLEEP(n) std::this_thread::sleep_for(std::chrono::seconds(n))\n\
    #define INT(...)  int __VA_ARGS__;    input(__VA_ARGS__)\n#define CHAR(...) char\
    \ __VA_ARGS__;   input(__VA_ARGS__)\n#define STR(...)  string __VA_ARGS__; input(__VA_ARGS__)\n\
    #define VEC(type, name, size) vector<type> name(size); input(name)\n#ifdef Q__INTERACTIVE\n\
    #define NO_SYNC_STD\n#define ENDL std::endl\n#else\n#define NO_SYNC_STD std::cin.tie(nullptr);ios::sync_with_stdio(false)\n\
    #define ENDL \"\\n\"\n#endif\n#ifdef Q__LOCAL\n#include <dump.hpp>\n#define DUMP(...)\
    \ DUMPOUT << \"  \" << string(#__VA_ARGS__) << \": \" << \"[\" << to_string(__LINE__)\
    \ << \":\" << __FUNCTION__ << \"]\" << endl ,dump_func(__VA_ARGS__)\n#define VDUMP(...)\
    \ DUMPOUT << \"  \" << string(#__VA_ARGS__) << \": \" << \"[\" << to_string(__LINE__)\
    \ << \":\" << __FUNCTION__ << \"]\" << endl, vdump_func(__VA_ARGS__)\n#else\n\
    #define DUMP(...)\n#define VDUMP(...)\n#endif\nusing ull  = unsigned long long;\n\
    using ld   = long double;\nusing ll   = long long;\nusing lint = long long;\n\
    #define int int64_t\nconst int64_t INF = numeric_limits<int64_t>::max() / 2;\n\
    template<class T> using V=vector<T>;\ntemplate<class T> using VV=vector<vector<T>>;\n\
    template<class T> using PQ=priority_queue<T,V<T>,greater<T>>;\nstd::ostream &operator<<(std::ostream\
    \ &dest, __int128_t value) {\n  std::ostream::sentry s(dest);\n  assert(s);\n\
    \  __uint128_t tmp = value < 0 ? -value : value;\n  char buffer[128], *d = std::end(buffer);\n\
    \  const string s0123456789 = \"0123456789\";\n  do { --d; *d = s0123456789[tmp\
    \ % 10]; tmp /= 10; } while (tmp != 0);\n  if (value < 0) { --d; *d = '-'; }\n\
    \  int len = std::end(buffer) - d;\n  if (dest.rdbuf()->sputn(d, len) != len)\
    \ dest.setstate(std::ios_base::badbit);\n  return dest;\n}\n__int128_t parse(string\
    \ &s) { __int128_t res = 0; REP(i,SZ(s)) if ('0' <= s[i] && s[i] <= '9') res =\
    \ 10 * res + s[i] - '0'; return res; }\ntemplate<class T> istream &operator>>(istream\
    \ &is,V<T> &v){for(auto&& e:v)is >> e;return is;}\ntemplate<class T> istream &operator>>(istream\
    \ &is,complex<T> &v){T x,y; is >> x >> y;v.real(x);v.imag(y);return is;}\ntemplate<class\
    \ T,class U> istream &operator>>(istream &is,pair<T,U> &v){is >> v.first >> v.second;return\
    \ is;}\ntemplate<class T,size_t n> istream &operator>>(istream &is,array<T,n>\
    \ &v){for(auto&& e:v)is >> e;return is;}\ntemplate<class... A> void input(A&&...\
    \ args){(cin >> ... >> args);}\ntemplate<class... A> void print_rest(){cout <<\
    \ ENDL;}\ntemplate<class T,class... A> void print_rest(const T& first,const A&...\
    \ rest){cout << \" \" << first;print_rest(rest...);}\ntemplate<class T,class...\
    \ A> void print(const T& first,const A&... rest){cout << fixed << PRECISION <<\
    \ first;print_rest(rest...);}\ntemplate<class T,class... A> void die(const T&\
    \ first,const A&... rest){cout << fixed << PRECISION << first;print_rest(rest...);exit(0);}\n\
    template <typename ... Args> string fmt(const string& fmt, Args ... args ){size_t\
    \ len = snprintf( nullptr, 0, fmt.c_str(), args ... );vector<char> buf(len + 1);snprintf(&buf[0],\
    \ len + 1, fmt.c_str(), args ... );return string(&buf[0], &buf[0] + len);}\ntemplate<class\
    \ T> inline string join(const T& v,string sep=\" \"){if(!SZ(v))return \"\";stringstream\
    \ ss;for(auto&& e:v)ss << sep << e;return ss.str().substr(SZ(sep));}\nV<string>\
    \ split(const string &s,char sep=' ') {V<string> ret;stringstream ss(s);string\
    \ buf;while(getline(ss,buf,sep))ret.push_back(buf);return ret;}\ntemplate<class\
    \ T> inline string padding(const T& v,int len,char pad=' ',bool l=false){stringstream\
    \ ss;ss << (l?std::left:std::right) << setw(len) << setfill(pad) << v;return ss.str();}\n\
    template<class T> V<T> make_vec(size_t n,T a){return V<T>(n,a);}\ntemplate<class...\
    \ Ts> auto make_vec(size_t n,Ts... ts){return V<decltype(make_vec(ts...))>(n,make_vec(ts...));}\n\
    template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}\n\
    template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}\n\
    template<class T,class F> pair<T,T> binarysearch(T ng,T ok,T eps,F f,bool sign=false){while(abs(ng-ok)>eps){auto\
    \ mid=ng+(ok-ng)/2;if(sign^f(mid)){ok=mid;}else{ng=mid;}}return{ng,ok};}\ntemplate<class\
    \ T> constexpr T cdiv(T x,T y){return (x+y-1)/y;}\ntemplate<class T> constexpr\
    \ bool between(T a,T x,T b){return(a<=x&&x<b);}\ntemplate<class T> constexpr T\
    \ pos1d(T y,T x,T h,T w){assert(between(T(0),y,h));assert(between(T(0),x,w));return\
    \ y*w+x;}\ntemplate<class T> constexpr pair<T,T> pos2d(T p,T h,T w){T y=p/w,x=p-y*w;assert(between(T(0),y,h));assert(between(T(0),x,w));return{y,x};}\n\
    template<class T> constexpr T sign(T n) {return (n > 0) - (n < 0);}\ntemplate<class\
    \ T> inline V<T> transposed(V<T>& A){int h=SZ(A),w=SZ(A[0]);V<T> tA(w);REP(i,h)REP(j,w)tA[j].push_back(A[i][j]);return\
    \ tA;}\ntemplate<class T> inline V<T> ruiseki(V<T>& a){auto ret = a; ret.push_back(T(0));exclusive_scan(ALL(ret),\
    \ ret.begin(), T(0));return ret;}\ntemplate<class T> inline V<T> kaisa(V<T>& a){V<T>\
    \ ret(a.size());adjacent_difference(ALL(a), ret.begin());return ret;}\ntemplate<class\
    \ T> inline int g_index(V<T> &s, T x) {\n  if (s.empty()) return -2;\n  auto it\
    \ = upper_bound(ALL(s), x);\n  if (it == s.end()) return -1;\n  return (int)distance(s.begin(),\
    \ it);\n}\ntemplate<class T> inline int ge_index(V<T> &s, T x) {\n  if (s.empty())\
    \ return -2;\n  auto it = lower_bound(ALL(s), x);\n  if (it == s.end()) return\
    \ -1;\n  return (int)distance(s.begin(), it);\n}\ntemplate<class T> inline int\
    \ l_index(V<T> &s, T x) {\n  if (s.empty()) return -2;\n  auto it = lower_bound(ALL(s),\
    \ x);\n  if (it == s.begin()) return -1;\n  return (int)distance(s.begin(), prev(it));\n\
    }\ntemplate<class T> inline int le_index(V<T> &s, T x) {\n  if (s.empty()) return\
    \ -2;\n  auto it = upper_bound(ALL(s), x);\n  if (it == s.begin()) return -1;\n\
    \  return (int)distance(s.begin(), prev(it));\n}\ntemplate<class T, class U> inline\
    \ pair<typename map<T,U>::iterator,bool> g_it(map<T,U> &s, T x) {\n  if (s.empty())\
    \ return {s.end(), false};\n  auto it = s.upper_bound(x);\n  if (it == s.end())\
    \ return {it, false};\n  return {it, true};\n}\ntemplate<class T, class U> inline\
    \ pair<typename map<T,U>::iterator,bool> ge_it(map<T,U> &s, T x) {\n  if (s.empty())\
    \ return {s.end(), false};\n  auto it = s.lower_bound(x);\n  if (it == s.end())\
    \ return {it, false};\n  return {it, true};\n}\ntemplate<class T, class U> inline\
    \ pair<typename map<T,U>::iterator,bool> l_it(map<T,U> &s, T x) {\n  if (s.empty())\
    \ return {s.end(), false};\n  auto it = s.lower_bound(x);\n  if (it == s.begin())\
    \ return {it, false};\n  return {prev(it), true};\n}\ntemplate<class T, class\
    \ U> inline pair<typename map<T,U>::iterator,bool> le_it(map<T,U> &s, T x) {\n\
    \  if (s.empty()) return {s.end(), false};\n  auto it = s.upper_bound(x);\n  if\
    \ (it == s.begin()) return {it, false};\n  return {prev(it), true};\n}\ntemplate<class\
    \ T> inline pair<typename set<T>::iterator,bool> g_it(set<T> &s, T x) {\n  if\
    \ (s.empty()) return {s.end(), false};\n  auto it = s.upper_bound(x);\n  if (it\
    \ == s.end()) return {it, false};\n  return {it, true};\n}\ntemplate<class T>\
    \ inline pair<typename set<T>::iterator,bool> ge_it(set<T> &s, T x) {\n  if (s.empty())\
    \ return {s.end(), false};\n  auto it = s.lower_bound(x);\n  if (it == s.end())\
    \ return {it, false};\n  return {it, true};\n}\ntemplate<class T> inline pair<typename\
    \ set<T>::iterator,bool> l_it(set<T> &s, T x) {\n  if (s.empty()) return {s.end(),\
    \ false};\n  auto it = s.lower_bound(x);\n  if (it == s.begin()) return {it, false};\n\
    \  return {prev(it), true};\n}\ntemplate<class T> inline pair<typename set<T>::iterator,bool>\
    \ le_it(set<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto it\
    \ = s.upper_bound(x);\n  if (it == s.begin()) return {it, false};\n  return {prev(it),\
    \ true};\n}\ntemplate<class T> inline V<T> it_range(set<T> &st, int l, int r)\
    \ {\n  auto startIt = st.lower_bound(l); auto endIt = st.upper_bound(r); V<T>\
    \ ret;\n  for(auto itr = startIt; itr != endIt; itr++) ret.emplace_back(*itr);\n\
    \  return ret;\n}\ntemplate<class T> inline pair<typename multiset<T>::iterator,bool>\
    \ g_it(multiset<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto\
    \ it = s.upper_bound(x);\n  if (it == s.end()) return {it, false};\n  return {it,\
    \ true};\n}\ntemplate<class T> inline pair<typename multiset<T>::iterator,bool>\
    \ ge_it(multiset<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto\
    \ it = s.lower_bound(x);\n  if (it == s.end()) return {it, false};\n  return {it,\
    \ true};\n}\ntemplate<class T> inline pair<typename multiset<T>::iterator,bool>\
    \ l_it(multiset<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto\
    \ it = s.lower_bound(x);\n  if (it == s.begin()) return {it, false};\n  return\
    \ {prev(it), true};\n}\ntemplate<class T> inline pair<typename multiset<T>::iterator,bool>\
    \ le_it(multiset<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto\
    \ it = s.upper_bound(x);\n  if (it == s.begin()) return {it, false};\n  return\
    \ {prev(it), true};\n}\ntemplate<class T> inline V<T> it_range(multiset<T> &st,\
    \ int l, int r) {\n  auto startIt = st.lower_bound(l); auto endIt = st.upper_bound(r);\
    \ V<T> ret;\n  for(auto itr = startIt; itr != endIt; itr++) ret.emplace_back(*itr);\n\
    \  return ret;\n}\ntemplate<class T> constexpr void dup_erase(V<T> &a){a.erase(unique(a.begin(),\
    \ a.end()), a.end());}\ntemplate <class T> V<int> iota(const V<T> &a, bool greater\
    \ = false) {\n  V<int> ret(a.size());\n  iota(ret.begin(), ret.end(), 0);\n  if\
    \ (greater) {\n    sort(RALL(ret), [&](int i, int j) {\n      if (a[i] == a[j])\
    \ return i > j;\n      return a[i] < a[j];\n    });\n  } else {\n    sort(ALL(ret),\
    \ [&](int i, int j) {\n      if (a[i] == a[j]) return i < j;\n      return a[i]\
    \ < a[j];\n    });\n  }\n  return ret;\n}\ntemplate<class T> constexpr T modpow(T\
    \ x,T n,T m=1152921504606846976LL){T ret=1;for(;n>0;x=x*x%m,n>>=1)if(n&1)ret=ret*x%m;return\
    \ ret;}\ntemplate<class T> constexpr T safe_mod(T x, T m) {x%=m;if(x<0)x+=m;return\
    \ x;}\ntemplate<class T> constexpr T keta(T n, T base = 10LL) {T ret = 0; while(n\
    \ > 0) {n /= base, ret++;} return ret;}\nconstexpr int pcnt(int64_t x) {return\
    \ __builtin_popcountll(x);}\nconstexpr int log2f(int64_t x) {return 63 - __builtin_clzll(x);}\n\
    constexpr int log2c(int64_t x) {return (x==1LL)?0:(64-__builtin_clzll(x-1LL));}\n\
    template<class T> constexpr T nC2(T n) {return n*(n-1)/2;}\ntemplate<class T>\
    \ constexpr long double deg2rad(T degree){return (long double)degree * M_PI/180;}\n\
    mt19937 rnd_engine{random_device{}()};\ninline int rand(int l, int r) {uniform_int_distribution<>\
    \ ret(l, r);return ret(rnd_engine);}\ninline long double lrand(long double l,\
    \ long double r) {uniform_real_distribution<> ret(l, r);return ret(rnd_engine);}\n\
    inline long double nrand(long double ave, long double var) {normal_distribution<>\
    \ ret(ave, var);return ret(rnd_engine);}\ninline void yes(bool cond) {cout <<\
    \ (cond?\"Yes\":\"No\") << ENDL;}\ninline bool is_palindrome(const string& s){return\
    \ equal(ALL(s), s.rbegin());}\ninline string make_palindrome(const string& s,\
    \ bool odd = true) {string t = s.substr(0, SZ(s)-odd);reverse(ALL(t));return s\
    \ + t;}\nVV<int> make_enum_vec(V<int> v){\n  if(v.empty()) return VV<int>(1,V<int>());\n\
    \  int n=v.back(); v.pop_back();\n  VV<int> ret,tmp=make_enum_vec(v);\n  for(auto\
    \ e:tmp)for(int i=0;i<n;++i){ret.push_back(e);ret.back().push_back(i);}\n  return\
    \ ret;\n}\nV<int> restore_path(V<int>& to, int goal, bool to1indexed = true) {\n\
    \  V<int> ret;\n  int x = goal;\n  while(x >= 0) {\n    ret.push_back(x);\n  \
    \  x = to[x];\n  }\n  reverse(ALL(ret));\n  if (to1indexed) for(auto&& e: ret)\
    \ e++;\n  return ret;\n}\nstring tolower(string s) {for(auto&& e: s) e = tolower(e);\
    \ return s;}\nstring toupper(string s) {for(auto&& e: s) e = toupper(e); return\
    \ s;}\nstring rtrim(const string &s, string delimiter){size_t end = s.find_last_not_of(delimiter);return\
    \ (end == string::npos) ? \"\" : s.substr(0, end + 1);}\nstring ltrim(const string\
    \ &s, string delimiter){size_t start = s.find_first_not_of(delimiter);return (start\
    \ == string::npos) ? \"\" : s.substr(start);}\nmap<char,int> RULD = {{'R',0},{'U',1},{'L',2},{'D',3}};\n\
    const int dx4[4] = {1, 0, -1, 0};\nconst int dy4[4] = {0, 1, 0, -1};\nconst int\
    \ dx6[6] = {1, 0, -1, 0, 1, -1};\nconst int dy6[6] = {0, 1, 0, -1, 1, -1};\nconst\
    \ int dx8[8] = {1, 0, -1, 0, 1, -1, -1, 1};\nconst int dy8[8] = {0, 1, 0, -1,\
    \ 1, 1, -1, -1};\nclass Timer{\n  chrono::system_clock::time_point start;\npublic:\n\
    \  Timer() : start(chrono::system_clock::now()) {}\n  double count(){\n    chrono::duration<double>\
    \ duration = chrono::system_clock::now() - start;\n    return duration.count();\n\
    \  }\n  bool is_timeout(double x){return (this -> count()) >= x;}\n};\n#ifdef\
    \ Q__LOCAL\n#define FILENAME __FILE__\n#else\n#define FILENAME __FILE__\n// #define\
    \ FILENAME \"code.cpp\" // AOJ\n#endif\n#define INCLUDED_MAIN\n#include FILENAME\n\
    #endif\n"
  code: "// #define Q__OPTIMIZE\n// #define Q__INCLUDE_ATCODER_LIB\n// #define Q__INTERACTIVE\n\
    #ifdef INCLUDED_MAIN\n\n\nstruct Solver {\n  void solve() {\n\n  }\n\n  void naive()\
    \ {\n\n  }\n} solver;\n\n\n\nsigned main(void){\n  NO_SYNC_STD;\n  V<string> options;\n\
    #ifdef Q__OPTIMIZE\n  options.push_back(\"OPTIMIZE\");\n#endif\n#ifdef Q__INTERACTIVE\n\
    \  options.push_back(\"INTERACTIVE\");\n#endif\n#ifdef Q__INCLUDE_ATCODER_LIB\n\
    \  options.push_back(\"INCLUDE_ATCODER_LIB\");\n#endif\n  DUMP(options);\n#ifndef\
    \ Q__NAIVE\n  solver.solve();\n#else\n  DUMP(\"naive\");\n  solver.naive();\n\
    #endif\n  return 0;\n}\n\n#else\n#define _GLIBCXX_DEQUE_BUF_SIZE 64\n#ifdef Q__OPTIMIZE\n\
    #pragma optimize(\"\", on)\n#ifndef Q__LOCAL\n#pragma GCC target(\"avx\")\n#endif\n\
    #pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"unroll-loops\")\n#endif\n\
    #include <algorithm>\n#include <array>\n#include <bitset>\n#include <cassert>\n\
    #include <chrono>\n#include <cmath>\n#include <complex>\n#include <deque>\n#include\
    \ <forward_list>\n#include <fstream>\n#include <functional>\n#include <iomanip>\n\
    #include <ios>\n#include <iostream>\n#include <limits>\n#include <list>\n#include\
    \ <map>\n#include <memory>\n#include <numeric>\n#include <optional>\n#include\
    \ <optional>\n#include <queue>\n#include <random>\n#include <regex>\n#include\
    \ <set>\n#include <sstream>\n#include <stack>\n#include <string>\n#include <thread>\n\
    #include <tuple>\n#include <type_traits>\n#include <unordered_map>\n#include <unordered_set>\n\
    #include <utility>\n#include <vector>\n#ifdef Q__INCLUDE_ATCODER_LIB\n#include\
    \ <atcoder/all>\nusing namespace atcoder;\n//using mint = modint1000000007;\n\
    using mint = modint998244353;\nstd::istream &operator>>(std::istream& is, mint&\
    \ a) { int64_t tmp; is >> tmp; a = tmp; return is; }\nstd::ostream &operator<<(std::ostream&\
    \ os, const mint& a) {os << a.val(); return os;}\n#endif\nusing namespace std;\n\
    #define MOD 998244353\n#define OVERLOAD4(a, b, c, d, e, ...) e\n#define REP1(a)\
    \          for(decltype(a) i = 0, i##_len = (a); i < i##_len; ++i)\n#define REP2(i,\
    \ a)       for(decltype(a) i = 0, i##_len = (a); i < i##_len; ++i)\n#define REP3(i,\
    \ a, b)    for(decltype(b) i = (a), i##_len = (b); i < i##_len; ++i)\n#define\
    \ REP4(i, a, b, c) for(decltype(b) i = (a), i##_len = (b); i < i##_len; i += (c))\n\
    #define REP(...) OVERLOAD4(__VA_ARGS__, REP4, REP3, REP2, REP1)(__VA_ARGS__)\n\
    #define RREP1(a)          for(decltype(a) i = (a); i--;)\n#define RREP2(i, a)\
    \       for(decltype(a) i = (a); i--;)\n#define RREP3(i, a, b)    for(decltype(a)\
    \ i = (b), i##_len = (a); i-- > i##_len;)\n#define RREP4(i, a, b, c) for(decltype(a)\
    \ i = (a)+((b)-(a)-1)/(c)*(c), i##_len = (a); i >= i##_len; i -= c)\n#define RREP(...)\
    \ OVERLOAD4(__VA_ARGS__, RREP4, RREP3, RREP2, RREP1)(__VA_ARGS__)\n#define MREP(v,...)\
    \ for(auto v:make_enum_vec({__VA_ARGS__}))\n#define QREP(q, l, r, n) for (int64_t\
    \ q = 1, l = n / (q + 1) + 1, r = n / q + 1; q <= n; q = (q == n ? n + 1 : n /\
    \ (n / (q + 1))), l = n / (q + 1) + 1, r = n / q + 1)\n#define COMB_REP(i,n,k)\
    \ for (int64_t t, i = POW2(k) - 1; i < POW2(n); t=i|(i-1), i = (t+1)|(((~t & -\
    \ ~t)-1) >> (__builtin_ctzll(i)+1)))\n#define SUBSET_ENUM_REP(i,s) for (int64_t\
    \ i = (1LL << 60) - 1; i >= 0, i &= s; --i)\n#define SUBSET_INCLUDE_REP(i,n,s)\
    \ for (int64_t i = s; i < POW2(n); i=(++i)|s)\n#define POPONLY_REP(i,s) for (int64_t\
    \ i=s&-s; i; i=s&(~s+(i << 1)))\n#define ALL(x)  (x).begin(), (x).end()\n#define\
    \ RALL(x) (x).rbegin(), (x).rend()\n#define SZ(x)   ((int)(x).size())\n#define\
    \ POW2(n)      (1LL << ((int)(n)))\n#define GET1BIT(x,n) (((x) >> (int)(n)) &\
    \ 1)\n#ifndef M_PI\n#define M_PI 3.14159265358979323846\n#endif\n#define INFL\
    \ (1LL << 60)\n#define PRECISION std::setprecision(16)\n#define SLEEP(n) std::this_thread::sleep_for(std::chrono::seconds(n))\n\
    #define INT(...)  int __VA_ARGS__;    input(__VA_ARGS__)\n#define CHAR(...) char\
    \ __VA_ARGS__;   input(__VA_ARGS__)\n#define STR(...)  string __VA_ARGS__; input(__VA_ARGS__)\n\
    #define VEC(type, name, size) vector<type> name(size); input(name)\n#ifdef Q__INTERACTIVE\n\
    #define NO_SYNC_STD\n#define ENDL std::endl\n#else\n#define NO_SYNC_STD std::cin.tie(nullptr);ios::sync_with_stdio(false)\n\
    #define ENDL \"\\n\"\n#endif\n#ifdef Q__LOCAL\n#include <dump.hpp>\n#define DUMP(...)\
    \ DUMPOUT << \"  \" << string(#__VA_ARGS__) << \": \" << \"[\" << to_string(__LINE__)\
    \ << \":\" << __FUNCTION__ << \"]\" << endl ,dump_func(__VA_ARGS__)\n#define VDUMP(...)\
    \ DUMPOUT << \"  \" << string(#__VA_ARGS__) << \": \" << \"[\" << to_string(__LINE__)\
    \ << \":\" << __FUNCTION__ << \"]\" << endl, vdump_func(__VA_ARGS__)\n#else\n\
    #define DUMP(...)\n#define VDUMP(...)\n#endif\nusing ull  = unsigned long long;\n\
    using ld   = long double;\nusing ll   = long long;\nusing lint = long long;\n\
    #define int int64_t\nconst int64_t INF = numeric_limits<int64_t>::max() / 2;\n\
    template<class T> using V=vector<T>;\ntemplate<class T> using VV=vector<vector<T>>;\n\
    template<class T> using PQ=priority_queue<T,V<T>,greater<T>>;\nstd::ostream &operator<<(std::ostream\
    \ &dest, __int128_t value) {\n  std::ostream::sentry s(dest);\n  assert(s);\n\
    \  __uint128_t tmp = value < 0 ? -value : value;\n  char buffer[128], *d = std::end(buffer);\n\
    \  const string s0123456789 = \"0123456789\";\n  do { --d; *d = s0123456789[tmp\
    \ % 10]; tmp /= 10; } while (tmp != 0);\n  if (value < 0) { --d; *d = '-'; }\n\
    \  int len = std::end(buffer) - d;\n  if (dest.rdbuf()->sputn(d, len) != len)\
    \ dest.setstate(std::ios_base::badbit);\n  return dest;\n}\n__int128_t parse(string\
    \ &s) { __int128_t res = 0; REP(i,SZ(s)) if ('0' <= s[i] && s[i] <= '9') res =\
    \ 10 * res + s[i] - '0'; return res; }\ntemplate<class T> istream &operator>>(istream\
    \ &is,V<T> &v){for(auto&& e:v)is >> e;return is;}\ntemplate<class T> istream &operator>>(istream\
    \ &is,complex<T> &v){T x,y; is >> x >> y;v.real(x);v.imag(y);return is;}\ntemplate<class\
    \ T,class U> istream &operator>>(istream &is,pair<T,U> &v){is >> v.first >> v.second;return\
    \ is;}\ntemplate<class T,size_t n> istream &operator>>(istream &is,array<T,n>\
    \ &v){for(auto&& e:v)is >> e;return is;}\ntemplate<class... A> void input(A&&...\
    \ args){(cin >> ... >> args);}\ntemplate<class... A> void print_rest(){cout <<\
    \ ENDL;}\ntemplate<class T,class... A> void print_rest(const T& first,const A&...\
    \ rest){cout << \" \" << first;print_rest(rest...);}\ntemplate<class T,class...\
    \ A> void print(const T& first,const A&... rest){cout << fixed << PRECISION <<\
    \ first;print_rest(rest...);}\ntemplate<class T,class... A> void die(const T&\
    \ first,const A&... rest){cout << fixed << PRECISION << first;print_rest(rest...);exit(0);}\n\
    template <typename ... Args> string fmt(const string& fmt, Args ... args ){size_t\
    \ len = snprintf( nullptr, 0, fmt.c_str(), args ... );vector<char> buf(len + 1);snprintf(&buf[0],\
    \ len + 1, fmt.c_str(), args ... );return string(&buf[0], &buf[0] + len);}\ntemplate<class\
    \ T> inline string join(const T& v,string sep=\" \"){if(!SZ(v))return \"\";stringstream\
    \ ss;for(auto&& e:v)ss << sep << e;return ss.str().substr(SZ(sep));}\nV<string>\
    \ split(const string &s,char sep=' ') {V<string> ret;stringstream ss(s);string\
    \ buf;while(getline(ss,buf,sep))ret.push_back(buf);return ret;}\ntemplate<class\
    \ T> inline string padding(const T& v,int len,char pad=' ',bool l=false){stringstream\
    \ ss;ss << (l?std::left:std::right) << setw(len) << setfill(pad) << v;return ss.str();}\n\
    template<class T> V<T> make_vec(size_t n,T a){return V<T>(n,a);}\ntemplate<class...\
    \ Ts> auto make_vec(size_t n,Ts... ts){return V<decltype(make_vec(ts...))>(n,make_vec(ts...));}\n\
    template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}\n\
    template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}\n\
    template<class T,class F> pair<T,T> binarysearch(T ng,T ok,T eps,F f,bool sign=false){while(abs(ng-ok)>eps){auto\
    \ mid=ng+(ok-ng)/2;if(sign^f(mid)){ok=mid;}else{ng=mid;}}return{ng,ok};}\ntemplate<class\
    \ T> constexpr T cdiv(T x,T y){return (x+y-1)/y;}\ntemplate<class T> constexpr\
    \ bool between(T a,T x,T b){return(a<=x&&x<b);}\ntemplate<class T> constexpr T\
    \ pos1d(T y,T x,T h,T w){assert(between(T(0),y,h));assert(between(T(0),x,w));return\
    \ y*w+x;}\ntemplate<class T> constexpr pair<T,T> pos2d(T p,T h,T w){T y=p/w,x=p-y*w;assert(between(T(0),y,h));assert(between(T(0),x,w));return{y,x};}\n\
    template<class T> constexpr T sign(T n) {return (n > 0) - (n < 0);}\ntemplate<class\
    \ T> inline V<T> transposed(V<T>& A){int h=SZ(A),w=SZ(A[0]);V<T> tA(w);REP(i,h)REP(j,w)tA[j].push_back(A[i][j]);return\
    \ tA;}\ntemplate<class T> inline V<T> ruiseki(V<T>& a){auto ret = a; ret.push_back(T(0));exclusive_scan(ALL(ret),\
    \ ret.begin(), T(0));return ret;}\ntemplate<class T> inline V<T> kaisa(V<T>& a){V<T>\
    \ ret(a.size());adjacent_difference(ALL(a), ret.begin());return ret;}\ntemplate<class\
    \ T> inline int g_index(V<T> &s, T x) {\n  if (s.empty()) return -2;\n  auto it\
    \ = upper_bound(ALL(s), x);\n  if (it == s.end()) return -1;\n  return (int)distance(s.begin(),\
    \ it);\n}\ntemplate<class T> inline int ge_index(V<T> &s, T x) {\n  if (s.empty())\
    \ return -2;\n  auto it = lower_bound(ALL(s), x);\n  if (it == s.end()) return\
    \ -1;\n  return (int)distance(s.begin(), it);\n}\ntemplate<class T> inline int\
    \ l_index(V<T> &s, T x) {\n  if (s.empty()) return -2;\n  auto it = lower_bound(ALL(s),\
    \ x);\n  if (it == s.begin()) return -1;\n  return (int)distance(s.begin(), prev(it));\n\
    }\ntemplate<class T> inline int le_index(V<T> &s, T x) {\n  if (s.empty()) return\
    \ -2;\n  auto it = upper_bound(ALL(s), x);\n  if (it == s.begin()) return -1;\n\
    \  return (int)distance(s.begin(), prev(it));\n}\ntemplate<class T, class U> inline\
    \ pair<typename map<T,U>::iterator,bool> g_it(map<T,U> &s, T x) {\n  if (s.empty())\
    \ return {s.end(), false};\n  auto it = s.upper_bound(x);\n  if (it == s.end())\
    \ return {it, false};\n  return {it, true};\n}\ntemplate<class T, class U> inline\
    \ pair<typename map<T,U>::iterator,bool> ge_it(map<T,U> &s, T x) {\n  if (s.empty())\
    \ return {s.end(), false};\n  auto it = s.lower_bound(x);\n  if (it == s.end())\
    \ return {it, false};\n  return {it, true};\n}\ntemplate<class T, class U> inline\
    \ pair<typename map<T,U>::iterator,bool> l_it(map<T,U> &s, T x) {\n  if (s.empty())\
    \ return {s.end(), false};\n  auto it = s.lower_bound(x);\n  if (it == s.begin())\
    \ return {it, false};\n  return {prev(it), true};\n}\ntemplate<class T, class\
    \ U> inline pair<typename map<T,U>::iterator,bool> le_it(map<T,U> &s, T x) {\n\
    \  if (s.empty()) return {s.end(), false};\n  auto it = s.upper_bound(x);\n  if\
    \ (it == s.begin()) return {it, false};\n  return {prev(it), true};\n}\ntemplate<class\
    \ T> inline pair<typename set<T>::iterator,bool> g_it(set<T> &s, T x) {\n  if\
    \ (s.empty()) return {s.end(), false};\n  auto it = s.upper_bound(x);\n  if (it\
    \ == s.end()) return {it, false};\n  return {it, true};\n}\ntemplate<class T>\
    \ inline pair<typename set<T>::iterator,bool> ge_it(set<T> &s, T x) {\n  if (s.empty())\
    \ return {s.end(), false};\n  auto it = s.lower_bound(x);\n  if (it == s.end())\
    \ return {it, false};\n  return {it, true};\n}\ntemplate<class T> inline pair<typename\
    \ set<T>::iterator,bool> l_it(set<T> &s, T x) {\n  if (s.empty()) return {s.end(),\
    \ false};\n  auto it = s.lower_bound(x);\n  if (it == s.begin()) return {it, false};\n\
    \  return {prev(it), true};\n}\ntemplate<class T> inline pair<typename set<T>::iterator,bool>\
    \ le_it(set<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto it\
    \ = s.upper_bound(x);\n  if (it == s.begin()) return {it, false};\n  return {prev(it),\
    \ true};\n}\ntemplate<class T> inline V<T> it_range(set<T> &st, int l, int r)\
    \ {\n  auto startIt = st.lower_bound(l); auto endIt = st.upper_bound(r); V<T>\
    \ ret;\n  for(auto itr = startIt; itr != endIt; itr++) ret.emplace_back(*itr);\n\
    \  return ret;\n}\ntemplate<class T> inline pair<typename multiset<T>::iterator,bool>\
    \ g_it(multiset<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto\
    \ it = s.upper_bound(x);\n  if (it == s.end()) return {it, false};\n  return {it,\
    \ true};\n}\ntemplate<class T> inline pair<typename multiset<T>::iterator,bool>\
    \ ge_it(multiset<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto\
    \ it = s.lower_bound(x);\n  if (it == s.end()) return {it, false};\n  return {it,\
    \ true};\n}\ntemplate<class T> inline pair<typename multiset<T>::iterator,bool>\
    \ l_it(multiset<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto\
    \ it = s.lower_bound(x);\n  if (it == s.begin()) return {it, false};\n  return\
    \ {prev(it), true};\n}\ntemplate<class T> inline pair<typename multiset<T>::iterator,bool>\
    \ le_it(multiset<T> &s, T x) {\n  if (s.empty()) return {s.end(), false};\n  auto\
    \ it = s.upper_bound(x);\n  if (it == s.begin()) return {it, false};\n  return\
    \ {prev(it), true};\n}\ntemplate<class T> inline V<T> it_range(multiset<T> &st,\
    \ int l, int r) {\n  auto startIt = st.lower_bound(l); auto endIt = st.upper_bound(r);\
    \ V<T> ret;\n  for(auto itr = startIt; itr != endIt; itr++) ret.emplace_back(*itr);\n\
    \  return ret;\n}\ntemplate<class T> constexpr void dup_erase(V<T> &a){a.erase(unique(a.begin(),\
    \ a.end()), a.end());}\ntemplate <class T> V<int> iota(const V<T> &a, bool greater\
    \ = false) {\n  V<int> ret(a.size());\n  iota(ret.begin(), ret.end(), 0);\n  if\
    \ (greater) {\n    sort(RALL(ret), [&](int i, int j) {\n      if (a[i] == a[j])\
    \ return i > j;\n      return a[i] < a[j];\n    });\n  } else {\n    sort(ALL(ret),\
    \ [&](int i, int j) {\n      if (a[i] == a[j]) return i < j;\n      return a[i]\
    \ < a[j];\n    });\n  }\n  return ret;\n}\ntemplate<class T> constexpr T modpow(T\
    \ x,T n,T m=1152921504606846976LL){T ret=1;for(;n>0;x=x*x%m,n>>=1)if(n&1)ret=ret*x%m;return\
    \ ret;}\ntemplate<class T> constexpr T safe_mod(T x, T m) {x%=m;if(x<0)x+=m;return\
    \ x;}\ntemplate<class T> constexpr T keta(T n, T base = 10LL) {T ret = 0; while(n\
    \ > 0) {n /= base, ret++;} return ret;}\nconstexpr int pcnt(int64_t x) {return\
    \ __builtin_popcountll(x);}\nconstexpr int log2f(int64_t x) {return 63 - __builtin_clzll(x);}\n\
    constexpr int log2c(int64_t x) {return (x==1LL)?0:(64-__builtin_clzll(x-1LL));}\n\
    template<class T> constexpr T nC2(T n) {return n*(n-1)/2;}\ntemplate<class T>\
    \ constexpr long double deg2rad(T degree){return (long double)degree * M_PI/180;}\n\
    mt19937 rnd_engine{random_device{}()};\ninline int rand(int l, int r) {uniform_int_distribution<>\
    \ ret(l, r);return ret(rnd_engine);}\ninline long double lrand(long double l,\
    \ long double r) {uniform_real_distribution<> ret(l, r);return ret(rnd_engine);}\n\
    inline long double nrand(long double ave, long double var) {normal_distribution<>\
    \ ret(ave, var);return ret(rnd_engine);}\ninline void yes(bool cond) {cout <<\
    \ (cond?\"Yes\":\"No\") << ENDL;}\ninline bool is_palindrome(const string& s){return\
    \ equal(ALL(s), s.rbegin());}\ninline string make_palindrome(const string& s,\
    \ bool odd = true) {string t = s.substr(0, SZ(s)-odd);reverse(ALL(t));return s\
    \ + t;}\nVV<int> make_enum_vec(V<int> v){\n  if(v.empty()) return VV<int>(1,V<int>());\n\
    \  int n=v.back(); v.pop_back();\n  VV<int> ret,tmp=make_enum_vec(v);\n  for(auto\
    \ e:tmp)for(int i=0;i<n;++i){ret.push_back(e);ret.back().push_back(i);}\n  return\
    \ ret;\n}\nV<int> restore_path(V<int>& to, int goal, bool to1indexed = true) {\n\
    \  V<int> ret;\n  int x = goal;\n  while(x >= 0) {\n    ret.push_back(x);\n  \
    \  x = to[x];\n  }\n  reverse(ALL(ret));\n  if (to1indexed) for(auto&& e: ret)\
    \ e++;\n  return ret;\n}\nstring tolower(string s) {for(auto&& e: s) e = tolower(e);\
    \ return s;}\nstring toupper(string s) {for(auto&& e: s) e = toupper(e); return\
    \ s;}\nstring rtrim(const string &s, string delimiter){size_t end = s.find_last_not_of(delimiter);return\
    \ (end == string::npos) ? \"\" : s.substr(0, end + 1);}\nstring ltrim(const string\
    \ &s, string delimiter){size_t start = s.find_first_not_of(delimiter);return (start\
    \ == string::npos) ? \"\" : s.substr(start);}\nmap<char,int> RULD = {{'R',0},{'U',1},{'L',2},{'D',3}};\n\
    const int dx4[4] = {1, 0, -1, 0};\nconst int dy4[4] = {0, 1, 0, -1};\nconst int\
    \ dx6[6] = {1, 0, -1, 0, 1, -1};\nconst int dy6[6] = {0, 1, 0, -1, 1, -1};\nconst\
    \ int dx8[8] = {1, 0, -1, 0, 1, -1, -1, 1};\nconst int dy8[8] = {0, 1, 0, -1,\
    \ 1, 1, -1, -1};\nclass Timer{\n  chrono::system_clock::time_point start;\npublic:\n\
    \  Timer() : start(chrono::system_clock::now()) {}\n  double count(){\n    chrono::duration<double>\
    \ duration = chrono::system_clock::now() - start;\n    return duration.count();\n\
    \  }\n  bool is_timeout(double x){return (this -> count()) >= x;}\n};\n#ifdef\
    \ Q__LOCAL\n#define FILENAME __FILE__\n#else\n#define FILENAME __FILE__\n// #define\
    \ FILENAME \"code.cpp\" // AOJ\n#endif\n#define INCLUDED_MAIN\n#include FILENAME\n\
    #endif"
  dependsOn: []
  isVerificationFile: false
  path: template.cpp
  requiredBy: []
  timestamp: '2024-09-28 23:42:14+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: template.cpp
layout: document
redirect_from:
- /library/template.cpp
- /library/template.cpp.html
title: template.cpp
---
