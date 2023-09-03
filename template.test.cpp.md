---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    links: []
  bundledCode: "#line 1 \"template.test.cpp\"\n// #define Q__OPTIMIZE\n// #define\
    \ Q__INCLUDE_ATCODER_LIB\n// #define Q__INTERACTIVE\n#if !__INCLUDE_LEVEL__\n\
    #include __FILE__\n\n\nstruct Solver {\n  void solve() {\n\n  }\n} solver;\n\n\
    \n\nsigned main(void){\n  NO_SYNC_STD;\n  V<string> options;\n#ifdef Q__OPTIMIZE\n\
    \  options.push_back(\"OPTIMIZE\");\n#endif\n#ifdef Q__INTERACTIVE\n  options.push_back(\"\
    INTERACTIVE\");\n#endif\n#ifdef Q__INCLUDE_ATCODER_LIB\n  options.push_back(\"\
    INCLUDE_ATCODER_LIB\");\n#endif\n  DUMP(options);\n  solver.solve();\n  return\
    \ 0;\n}\n\n#else\n#define _GLIBCXX_DEQUE_BUF_SIZE 64\n#ifdef Q__OPTIMIZE\n#pragma\
    \ GCC target(\"avx\")\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"unroll-loops\"\
    )\n#endif\n#include <bits/stdc++.h>\n#ifdef Q__INCLUDE_ATCODER_LIB\n#include <atcoder/all>\n\
    using namespace atcoder;\nusing mint = modint1000000007;\n// using mint = modint998244353;\n\
    std::istream &operator>>(std::istream& is, mint& a) { int tmp; is >> tmp; a =\
    \ tmp; return is; }\nstd::ostream &operator<<(std::ostream& os, const mint& a)\
    \ {os << a.val(); return os;}\n#endif\nusing namespace std;\n#define OVERLOAD4(a,\
    \ b, c, d, e, ...) e\n#define REP1(a)          for(decltype(a) i = 0, i##_len\
    \ = (a); i < i##_len; ++i)\n#define REP2(i, a)       for(decltype(a) i = 0, i##_len\
    \ = (a); i < i##_len; ++i)\n#define REP3(i, a, b)    for(decltype(b) i = (a),\
    \ i##_len = (b); i < i##_len; ++i)\n#define REP4(i, a, b, c) for(decltype(b) i\
    \ = (a), i##_len = (b); i < i##_len; i += (c))\n#define REP(...) OVERLOAD4(__VA_ARGS__,\
    \ REP4, REP3, REP2, REP1)(__VA_ARGS__)\n#define RREP1(a)          for(decltype(a)\
    \ i = (a); i--;)\n#define RREP2(i, a)       for(decltype(a) i = (a); i--;)\n#define\
    \ RREP3(i, a, b)    for(decltype(a) i = (b), i##_len = (a); i-- > i##_len;)\n\
    #define RREP4(i, a, b, c) for(decltype(a) i = (a)+((b)-(a)-1)/(c)*(c), i##_len\
    \ = (a); i >= i##_len; i -= c)\n#define RREP(...) OVERLOAD4(__VA_ARGS__, RREP4,\
    \ RREP3, RREP2, RREP1)(__VA_ARGS__)\n#define ALL(x)  (x).begin(), (x).end()\n\
    #define RALL(x) (x).rbegin(), (x).rend()\n#define SZ(x)   ((int)(x).size())\n\
    #define POW2(n)      (1LL << ((int)(n)))\n#define GET1BIT(x,n) (((x) >> (int)(n))\
    \ & 1)\n#define INF ((1 << 30) - 1)\n#define INFL (1LL << 60)\n#define PRECISION\
    \ std::setprecision(16)\n#define THE_WORLD std::this_thread::sleep_for(30s)\n\
    #define INT(...) int __VA_ARGS__;    input(__VA_ARGS__)\n#define LL(...)  ll __VA_ARGS__;\
    \     input(__VA_ARGS__)\n#define STR(...) string __VA_ARGS__; input(__VA_ARGS__)\n\
    #define LD(...)  ld __VA_ARGS__;     input(__VA_ARGS__)\n#define VEC(type, name,\
    \ size) vector<type> name(size); input(name)\n#ifdef Q__INTERACTIVE\n#define NO_SYNC_STD\n\
    #define ENDL std::endl\n#else\n#define NO_SYNC_STD std::cin.tie(nullptr);ios::sync_with_stdio(false)\n\
    #define ENDL \"\\n\"\n#endif\n#ifdef Q__LOCAL\n#include <dump.hpp>\n#define DUMP(...)\
    \ DUMPOUT << \"  \" << string(#__VA_ARGS__) << \": \" << \"[\" << to_string(__LINE__)\
    \ << \":\" << __FUNCTION__ << \"]\" << endl ,dump_func(__VA_ARGS__)\n#define VDUMP(...)\
    \ DUMPOUT << \"  \" << string(#__VA_ARGS__) << \": \" << \"[\" << to_string(__LINE__)\
    \ << \":\" << __FUNCTION__ << \"]\" << endl, vdump_func(__VA_ARGS__)\n#else\n\
    #define DUMP(...)\n#define VDUMP(...)\n#endif\nusing ll=long long;\nusing ull=unsigned\
    \ long long;\nusing ld=long double;\ntemplate<class T> using V=vector<T>;\ntemplate<class\
    \ T> using VV=vector<vector<T>>;\ntemplate<class T> using PQ=priority_queue<T,V<T>,greater<T>>;\n\
    template<class T> istream &operator>>(istream &is,V<T> &v){for(auto&& e:v)is >>\
    \ e;return is;}\ntemplate<class T> istream &operator>>(istream &is,complex<T>\
    \ &v){T x,y; is >> x >> y;v.real(x);v.imag(y);return is;}\ntemplate<class T,class\
    \ U> istream &operator>>(istream &is,pair<T,U> &v){is >> v.first >> v.second;return\
    \ is;}\ntemplate<class T,size_t n> istream &operator>>(istream &is,array<T,n>\
    \ &v){for(auto&& e:v)is >> e;return is;}\ntemplate<class... A> void input(A&&...\
    \ args){(cin >> ... >> args);}\ntemplate<class... A> void print_rest(){cout <<\
    \ ENDL;}\ntemplate<class T,class... A> void print_rest(const T& first,const A&...\
    \ rest){cout << \" \" << first;print_rest(rest...);}\ntemplate<class T,class...\
    \ A> void print(const T& first,const A&... rest){cout << fixed << PRECISION <<\
    \ first;print_rest(rest...);}\ntemplate<class T,class... A> void die(const T&\
    \ first,const A&... rest){cout << fixed << PRECISION << first;print_rest(rest...);exit(0);}\n\
    template<class T> inline string join(const T& v,string sep=\" \"){if(!SZ(v))return\
    \ \"\";stringstream ss;for(auto&& e:v)ss << sep << e;return ss.str().substr(SZ(sep));}\n\
    V<string> split(const string &s,char sep=' ') {V<string> ret;stringstream ss(s);string\
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
    \ bool between(T a,T x,T b){return(a<=x&&x<b);}\ntemplate<class T> inline V<T>\
    \ transposed(V<T>& A){int h=SZ(A),w=SZ(A[0]);V<T> tA(w);REP(i,h)REP(j,w)tA[j].push_back(A[i][j]);return\
    \ tA;}\ntemplate<class T> constexpr T pos1d(T y,T x,T h,T w){assert(between(T(0),y,h));assert(between(T(0),x,w));return\
    \ y*w+x;}\ntemplate<class T> constexpr pair<T,T> pos2d(T p,T h,T w){T y=p/w,x=p-y*w;assert(between(T(0),y,h));assert(between(T(0),x,w));return{y,x};}\n\
    template<class T> constexpr T sign(T n) {return (n > 0) - (n < 0);}\nconstexpr\
    \ ll modpow(ll x,ll n,ll m=1152921504606846976LL){ll ret=1;for(;n>0;x=x*x%m,n>>=1)if(n&1)ret=ret*x%m;return\
    \ ret;}\nconstexpr ll safe_mod(ll x, ll m) {x%=m;if(x<0)x+=m;return x;}\nconstexpr\
    \ ll keta(ll n, ll base = 10LL) {ll ret = 0; while(n > 0) {n /= base, ret++;}\
    \ return ret;}\nconstexpr int pcnt(ll x) {return __builtin_popcountll(x);}\nconstexpr\
    \ int log2f(ll x) {return 63 - __builtin_clzll(x);}\nconstexpr int log2c(ll x)\
    \ {return (x==1LL)?0:(64-__builtin_clzll(x-1LL));}\nconstexpr ll nC2(ll n) {return\
    \ n*(n-1)/2;}\nconstexpr ld deg2rad(ll degree){return (ld)degree * M_PI/180;}\n\
    mt19937 rnd_engine{random_device{}()};\ninline int rand(int l, int r) {uniform_int_distribution<>\
    \ ret(l, r);return ret(rnd_engine);}\ninline ld lrand(ld l, ld r) {uniform_real_distribution<>\
    \ ret(l, r);return ret(rnd_engine);}\ninline ld nrand(ld ave, ld var) {normal_distribution<>\
    \ ret(ave, var);return ret(rnd_engine);}\ninline void yes(bool cond) {cout <<\
    \ (cond?\"Yes\":\"No\") << ENDL;}\nconst int dx4[4] = {1, 0, -1, 0};\nconst int\
    \ dy4[4] = {0, 1, 0, -1};\nconst int dx6[6] = {1, 0, -1, 0, 1, -1};\nconst int\
    \ dy6[6] = {0, 1, 0, -1, 1, -1};\nconst int dx8[8] = {1, 0, -1, 0, 1, -1, -1,\
    \ 1};\nconst int dy8[8] = {0, 1, 0, -1, 1, 1, -1, -1};\n#endif\n"
  code: "// #define Q__OPTIMIZE\n// #define Q__INCLUDE_ATCODER_LIB\n// #define Q__INTERACTIVE\n\
    #if !__INCLUDE_LEVEL__\n#include __FILE__\n\n\nstruct Solver {\n  void solve()\
    \ {\n\n  }\n} solver;\n\n\n\nsigned main(void){\n  NO_SYNC_STD;\n  V<string> options;\n\
    #ifdef Q__OPTIMIZE\n  options.push_back(\"OPTIMIZE\");\n#endif\n#ifdef Q__INTERACTIVE\n\
    \  options.push_back(\"INTERACTIVE\");\n#endif\n#ifdef Q__INCLUDE_ATCODER_LIB\n\
    \  options.push_back(\"INCLUDE_ATCODER_LIB\");\n#endif\n  DUMP(options);\n  solver.solve();\n\
    \  return 0;\n}\n\n#else\n#define _GLIBCXX_DEQUE_BUF_SIZE 64\n#ifdef Q__OPTIMIZE\n\
    #pragma GCC target(\"avx\")\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"\
    unroll-loops\")\n#endif\n#include <bits/stdc++.h>\n#ifdef Q__INCLUDE_ATCODER_LIB\n\
    #include <atcoder/all>\nusing namespace atcoder;\nusing mint = modint1000000007;\n\
    // using mint = modint998244353;\nstd::istream &operator>>(std::istream& is, mint&\
    \ a) { int tmp; is >> tmp; a = tmp; return is; }\nstd::ostream &operator<<(std::ostream&\
    \ os, const mint& a) {os << a.val(); return os;}\n#endif\nusing namespace std;\n\
    #define OVERLOAD4(a, b, c, d, e, ...) e\n#define REP1(a)          for(decltype(a)\
    \ i = 0, i##_len = (a); i < i##_len; ++i)\n#define REP2(i, a)       for(decltype(a)\
    \ i = 0, i##_len = (a); i < i##_len; ++i)\n#define REP3(i, a, b)    for(decltype(b)\
    \ i = (a), i##_len = (b); i < i##_len; ++i)\n#define REP4(i, a, b, c) for(decltype(b)\
    \ i = (a), i##_len = (b); i < i##_len; i += (c))\n#define REP(...) OVERLOAD4(__VA_ARGS__,\
    \ REP4, REP3, REP2, REP1)(__VA_ARGS__)\n#define RREP1(a)          for(decltype(a)\
    \ i = (a); i--;)\n#define RREP2(i, a)       for(decltype(a) i = (a); i--;)\n#define\
    \ RREP3(i, a, b)    for(decltype(a) i = (b), i##_len = (a); i-- > i##_len;)\n\
    #define RREP4(i, a, b, c) for(decltype(a) i = (a)+((b)-(a)-1)/(c)*(c), i##_len\
    \ = (a); i >= i##_len; i -= c)\n#define RREP(...) OVERLOAD4(__VA_ARGS__, RREP4,\
    \ RREP3, RREP2, RREP1)(__VA_ARGS__)\n#define ALL(x)  (x).begin(), (x).end()\n\
    #define RALL(x) (x).rbegin(), (x).rend()\n#define SZ(x)   ((int)(x).size())\n\
    #define POW2(n)      (1LL << ((int)(n)))\n#define GET1BIT(x,n) (((x) >> (int)(n))\
    \ & 1)\n#define INF ((1 << 30) - 1)\n#define INFL (1LL << 60)\n#define PRECISION\
    \ std::setprecision(16)\n#define THE_WORLD std::this_thread::sleep_for(30s)\n\
    #define INT(...) int __VA_ARGS__;    input(__VA_ARGS__)\n#define LL(...)  ll __VA_ARGS__;\
    \     input(__VA_ARGS__)\n#define STR(...) string __VA_ARGS__; input(__VA_ARGS__)\n\
    #define LD(...)  ld __VA_ARGS__;     input(__VA_ARGS__)\n#define VEC(type, name,\
    \ size) vector<type> name(size); input(name)\n#ifdef Q__INTERACTIVE\n#define NO_SYNC_STD\n\
    #define ENDL std::endl\n#else\n#define NO_SYNC_STD std::cin.tie(nullptr);ios::sync_with_stdio(false)\n\
    #define ENDL \"\\n\"\n#endif\n#ifdef Q__LOCAL\n#include <dump.hpp>\n#define DUMP(...)\
    \ DUMPOUT << \"  \" << string(#__VA_ARGS__) << \": \" << \"[\" << to_string(__LINE__)\
    \ << \":\" << __FUNCTION__ << \"]\" << endl ,dump_func(__VA_ARGS__)\n#define VDUMP(...)\
    \ DUMPOUT << \"  \" << string(#__VA_ARGS__) << \": \" << \"[\" << to_string(__LINE__)\
    \ << \":\" << __FUNCTION__ << \"]\" << endl, vdump_func(__VA_ARGS__)\n#else\n\
    #define DUMP(...)\n#define VDUMP(...)\n#endif\nusing ll=long long;\nusing ull=unsigned\
    \ long long;\nusing ld=long double;\ntemplate<class T> using V=vector<T>;\ntemplate<class\
    \ T> using VV=vector<vector<T>>;\ntemplate<class T> using PQ=priority_queue<T,V<T>,greater<T>>;\n\
    template<class T> istream &operator>>(istream &is,V<T> &v){for(auto&& e:v)is >>\
    \ e;return is;}\ntemplate<class T> istream &operator>>(istream &is,complex<T>\
    \ &v){T x,y; is >> x >> y;v.real(x);v.imag(y);return is;}\ntemplate<class T,class\
    \ U> istream &operator>>(istream &is,pair<T,U> &v){is >> v.first >> v.second;return\
    \ is;}\ntemplate<class T,size_t n> istream &operator>>(istream &is,array<T,n>\
    \ &v){for(auto&& e:v)is >> e;return is;}\ntemplate<class... A> void input(A&&...\
    \ args){(cin >> ... >> args);}\ntemplate<class... A> void print_rest(){cout <<\
    \ ENDL;}\ntemplate<class T,class... A> void print_rest(const T& first,const A&...\
    \ rest){cout << \" \" << first;print_rest(rest...);}\ntemplate<class T,class...\
    \ A> void print(const T& first,const A&... rest){cout << fixed << PRECISION <<\
    \ first;print_rest(rest...);}\ntemplate<class T,class... A> void die(const T&\
    \ first,const A&... rest){cout << fixed << PRECISION << first;print_rest(rest...);exit(0);}\n\
    template<class T> inline string join(const T& v,string sep=\" \"){if(!SZ(v))return\
    \ \"\";stringstream ss;for(auto&& e:v)ss << sep << e;return ss.str().substr(SZ(sep));}\n\
    V<string> split(const string &s,char sep=' ') {V<string> ret;stringstream ss(s);string\
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
    \ bool between(T a,T x,T b){return(a<=x&&x<b);}\ntemplate<class T> inline V<T>\
    \ transposed(V<T>& A){int h=SZ(A),w=SZ(A[0]);V<T> tA(w);REP(i,h)REP(j,w)tA[j].push_back(A[i][j]);return\
    \ tA;}\ntemplate<class T> constexpr T pos1d(T y,T x,T h,T w){assert(between(T(0),y,h));assert(between(T(0),x,w));return\
    \ y*w+x;}\ntemplate<class T> constexpr pair<T,T> pos2d(T p,T h,T w){T y=p/w,x=p-y*w;assert(between(T(0),y,h));assert(between(T(0),x,w));return{y,x};}\n\
    template<class T> constexpr T sign(T n) {return (n > 0) - (n < 0);}\nconstexpr\
    \ ll modpow(ll x,ll n,ll m=1152921504606846976LL){ll ret=1;for(;n>0;x=x*x%m,n>>=1)if(n&1)ret=ret*x%m;return\
    \ ret;}\nconstexpr ll safe_mod(ll x, ll m) {x%=m;if(x<0)x+=m;return x;}\nconstexpr\
    \ ll keta(ll n, ll base = 10LL) {ll ret = 0; while(n > 0) {n /= base, ret++;}\
    \ return ret;}\nconstexpr int pcnt(ll x) {return __builtin_popcountll(x);}\nconstexpr\
    \ int log2f(ll x) {return 63 - __builtin_clzll(x);}\nconstexpr int log2c(ll x)\
    \ {return (x==1LL)?0:(64-__builtin_clzll(x-1LL));}\nconstexpr ll nC2(ll n) {return\
    \ n*(n-1)/2;}\nconstexpr ld deg2rad(ll degree){return (ld)degree * M_PI/180;}\n\
    mt19937 rnd_engine{random_device{}()};\ninline int rand(int l, int r) {uniform_int_distribution<>\
    \ ret(l, r);return ret(rnd_engine);}\ninline ld lrand(ld l, ld r) {uniform_real_distribution<>\
    \ ret(l, r);return ret(rnd_engine);}\ninline ld nrand(ld ave, ld var) {normal_distribution<>\
    \ ret(ave, var);return ret(rnd_engine);}\ninline void yes(bool cond) {cout <<\
    \ (cond?\"Yes\":\"No\") << ENDL;}\nconst int dx4[4] = {1, 0, -1, 0};\nconst int\
    \ dy4[4] = {0, 1, 0, -1};\nconst int dx6[6] = {1, 0, -1, 0, 1, -1};\nconst int\
    \ dy6[6] = {0, 1, 0, -1, 1, -1};\nconst int dx8[8] = {1, 0, -1, 0, 1, -1, -1,\
    \ 1};\nconst int dy8[8] = {0, 1, 0, -1, 1, 1, -1, -1};\n#endif"
  dependsOn: []
  isVerificationFile: true
  path: template.test.cpp
  requiredBy: []
  timestamp: '2023-09-03 15:48:52+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: template.test.cpp
layout: document
redirect_from:
- /verify/template.test.cpp
- /verify/template.test.cpp.html
title: template.test.cpp
---
