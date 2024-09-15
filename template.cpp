// #define Q__OPTIMIZE
// #define Q__INCLUDE_ATCODER_LIB
// #define Q__INTERACTIVE
#ifdef INCLUDED_MAIN


struct Solver {
  void solve() {

  }

  void naive() {

  }
} solver;



signed main(void){
  NO_SYNC_STD;
  V<string> options;
#ifdef Q__OPTIMIZE
  options.push_back("OPTIMIZE");
#endif
#ifdef Q__INTERACTIVE
  options.push_back("INTERACTIVE");
#endif
#ifdef Q__INCLUDE_ATCODER_LIB
  options.push_back("INCLUDE_ATCODER_LIB");
#endif
  DUMP(options);
#ifndef Q__NAIVE
  solver.solve();
#else
  DUMP("naive");
  solver.naive();
#endif
  return 0;
}

#else
#define _GLIBCXX_DEQUE_BUF_SIZE 64
#ifdef Q__OPTIMIZE
#pragma optimize("", on)
#ifndef Q__LOCAL
#pragma GCC target("avx")
#endif
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#endif
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
#include <optional>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <thread>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#ifdef Q__INCLUDE_ATCODER_LIB
#include <atcoder/all>
using namespace atcoder;
//using mint = modint1000000007;
using mint = modint998244353;
std::istream &operator>>(std::istream& is, mint& a) { int64_t tmp; is >> tmp; a = tmp; return is; }
std::ostream &operator<<(std::ostream& os, const mint& a) {os << a.val(); return os;}
#endif
using namespace std;
#define MOD 998244353
#define OVERLOAD4(a, b, c, d, e, ...) e
#define REP1(a)          for(decltype(a) i = 0, i##_len = (a); i < i##_len; ++i)
#define REP2(i, a)       for(decltype(a) i = 0, i##_len = (a); i < i##_len; ++i)
#define REP3(i, a, b)    for(decltype(b) i = (a), i##_len = (b); i < i##_len; ++i)
#define REP4(i, a, b, c) for(decltype(b) i = (a), i##_len = (b); i < i##_len; i += (c))
#define REP(...) OVERLOAD4(__VA_ARGS__, REP4, REP3, REP2, REP1)(__VA_ARGS__)
#define RREP1(a)          for(decltype(a) i = (a); i--;)
#define RREP2(i, a)       for(decltype(a) i = (a); i--;)
#define RREP3(i, a, b)    for(decltype(a) i = (b), i##_len = (a); i-- > i##_len;)
#define RREP4(i, a, b, c) for(decltype(a) i = (a)+((b)-(a)-1)/(c)*(c), i##_len = (a); i >= i##_len; i -= c)
#define RREP(...) OVERLOAD4(__VA_ARGS__, RREP4, RREP3, RREP2, RREP1)(__VA_ARGS__)
#define MREP(v,...) for(auto v:make_enum_vec({__VA_ARGS__}))
#define QREP(q, l, r, n) for (int64_t q = 1, l = n / (q + 1) + 1, r = n / q + 1; q <= n; q = (q == n ? n + 1 : n / (n / (q + 1))), l = n / (q + 1) + 1, r = n / q + 1)
#define COMB_REP(i,n,k) for (int64_t t, i = POW2(k) - 1; i < POW2(n); t=i|(i-1), i = (t+1)|(((~t & - ~t)-1) >> (__builtin_ctzll(i)+1)))
#define SUBSET_ENUM_REP(i,s) for (int64_t i = (1LL << 60) - 1; i >= 0, i &= s; --i)
#define SUBSET_INCLUDE_REP(i,n,s) for (int64_t i = s; i < POW2(n); i=(++i)|s)
#define POPONLY_REP(i,s) for (int64_t i=s&-s; i; i=s&(~s+(i << 1)))
#define ALL(x)  (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x)   ((int)(x).size())
#define POW2(n)      (1LL << ((int)(n)))
#define GET1BIT(x,n) (((x) >> (int)(n)) & 1)
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#define INFL (1LL << 60)
#define PRECISION std::setprecision(16)
#define SLEEP(n) std::this_thread::sleep_for(std::chrono::seconds(n))
#define INT(...)  int __VA_ARGS__;    input(__VA_ARGS__)
#define CHAR(...) char __VA_ARGS__;   input(__VA_ARGS__)
#define STR(...)  string __VA_ARGS__; input(__VA_ARGS__)
#define VEC(type, name, size) vector<type> name(size); input(name)
#ifdef Q__INTERACTIVE
#define NO_SYNC_STD
#define ENDL std::endl
#else
#define NO_SYNC_STD std::cin.tie(nullptr);ios::sync_with_stdio(false)
#define ENDL "\n"
#endif
#ifdef Q__LOCAL
#include <dump.hpp>
#define DUMP(...) DUMPOUT << "  " << string(#__VA_ARGS__) << ": " << "[" << to_string(__LINE__) << ":" << __FUNCTION__ << "]" << endl ,dump_func(__VA_ARGS__)
#define VDUMP(...) DUMPOUT << "  " << string(#__VA_ARGS__) << ": " << "[" << to_string(__LINE__) << ":" << __FUNCTION__ << "]" << endl, vdump_func(__VA_ARGS__)
#else
#define DUMP(...)
#define VDUMP(...)
#endif
using ull  = unsigned long long;
using ld   = long double;
using ll   = long long;
using lint = long long;
#define int int64_t
const int64_t INF = numeric_limits<int64_t>::max() / 2;
template<class T> using V=vector<T>;
template<class T> using VV=vector<vector<T>>;
template<class T> using PQ=priority_queue<T,V<T>,greater<T>>;
template<class T> istream &operator>>(istream &is,V<T> &v){for(auto&& e:v)is >> e;return is;}
template<class T> istream &operator>>(istream &is,complex<T> &v){T x,y; is >> x >> y;v.real(x);v.imag(y);return is;}
template<class T,class U> istream &operator>>(istream &is,pair<T,U> &v){is >> v.first >> v.second;return is;}
template<class T,size_t n> istream &operator>>(istream &is,array<T,n> &v){for(auto&& e:v)is >> e;return is;}
template<class... A> void input(A&&... args){(cin >> ... >> args);}
template<class... A> void print_rest(){cout << ENDL;}
template<class T,class... A> void print_rest(const T& first,const A&... rest){cout << " " << first;print_rest(rest...);}
template<class T,class... A> void print(const T& first,const A&... rest){cout << fixed << PRECISION << first;print_rest(rest...);}
template<class T,class... A> void die(const T& first,const A&... rest){cout << fixed << PRECISION << first;print_rest(rest...);exit(0);}
template <typename ... Args> string fmt(const string& fmt, Args ... args ){size_t len = snprintf( nullptr, 0, fmt.c_str(), args ... );vector<char> buf(len + 1);snprintf(&buf[0], len + 1, fmt.c_str(), args ... );return string(&buf[0], &buf[0] + len);}
template<class T> inline string join(const T& v,string sep=" "){if(!SZ(v))return "";stringstream ss;for(auto&& e:v)ss << sep << e;return ss.str().substr(SZ(sep));}
V<string> split(const string &s,char sep=' ') {V<string> ret;stringstream ss(s);string buf;while(getline(ss,buf,sep))ret.push_back(buf);return ret;}
template<class T> inline string padding(const T& v,int len,char pad=' ',bool l=false){stringstream ss;ss << (l?std::left:std::right) << setw(len) << setfill(pad) << v;return ss.str();}
template<class T> V<T> make_vec(size_t n,T a){return V<T>(n,a);}
template<class... Ts> auto make_vec(size_t n,Ts... ts){return V<decltype(make_vec(ts...))>(n,make_vec(ts...));}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}
template<class T,class F> pair<T,T> binarysearch(T ng,T ok,T eps,F f,bool sign=false){while(abs(ng-ok)>eps){auto mid=ng+(ok-ng)/2;if(sign^f(mid)){ok=mid;}else{ng=mid;}}return{ng,ok};}
template<class T> constexpr T cdiv(T x,T y){return (x+y-1)/y;}
template<class T> constexpr bool between(T a,T x,T b){return(a<=x&&x<b);}
template<class T> constexpr T pos1d(T y,T x,T h,T w){assert(between(T(0),y,h));assert(between(T(0),x,w));return y*w+x;}
template<class T> constexpr pair<T,T> pos2d(T p,T h,T w){T y=p/w,x=p-y*w;assert(between(T(0),y,h));assert(between(T(0),x,w));return{y,x};}
template<class T> constexpr T sign(T n) {return (n > 0) - (n < 0);}
template<class T> inline V<T> transposed(V<T>& A){int h=SZ(A),w=SZ(A[0]);V<T> tA(w);REP(i,h)REP(j,w)tA[j].push_back(A[i][j]);return tA;}
template<class T> inline V<T> ruiseki(V<T>& a){auto ret = a; ret.push_back(T(0));exclusive_scan(ALL(ret), ret.begin(), T(0));return ret;}
template<class T> inline V<T> kaisa(V<T>& a){V<T> ret(a.size());adjacent_difference(ALL(a), ret.begin());return ret;}
template<class T> inline int g_index(V<T> &s, T x) {
  if (s.empty()) return -2;
  auto it = upper_bound(ALL(s), x);
  if (it == s.end()) return -1;
  return (int)distance(s.begin(), it);
}
template<class T> inline int ge_index(V<T> &s, T x) {
  if (s.empty()) return -2;
  auto it = lower_bound(ALL(s), x);
  if (it == s.end()) return -1;
  return (int)distance(s.begin(), it);
}
template<class T> inline int l_index(V<T> &s, T x) {
  if (s.empty()) return -2;
  auto it = lower_bound(ALL(s), x);
  if (it == s.begin()) return -1;
  return (int)distance(s.begin(), prev(it));
}
template<class T> inline int le_index(V<T> &s, T x) {
  if (s.empty()) return -2;
  auto it = upper_bound(ALL(s), x);
  if (it == s.begin()) return -1;
  return (int)distance(s.begin(), prev(it));
}
template<class T, class U> inline pair<typename map<T,U>::iterator,bool> g_it(map<T,U> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.upper_bound(x);
  if (it == s.end()) return {it, false};
  return {it, true};
}
template<class T, class U> inline pair<typename map<T,U>::iterator,bool> ge_it(map<T,U> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.lower_bound(x);
  if (it == s.end()) return {it, false};
  return {it, true};
}
template<class T, class U> inline pair<typename map<T,U>::iterator,bool> l_it(map<T,U> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.lower_bound(x);
  if (it == s.begin()) return {it, false};
  return {prev(it), true};
}
template<class T, class U> inline pair<typename map<T,U>::iterator,bool> le_it(map<T,U> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.upper_bound(x);
  if (it == s.begin()) return {it, false};
  return {prev(it), true};
}
template<class T> inline pair<typename set<T>::iterator,bool> g_it(set<T> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.upper_bound(x);
  if (it == s.end()) return {it, false};
  return {it, true};
}
template<class T> inline pair<typename set<T>::iterator,bool> ge_it(set<T> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.lower_bound(x);
  if (it == s.end()) return {it, false};
  return {it, true};
}
template<class T> inline pair<typename set<T>::iterator,bool> l_it(set<T> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.lower_bound(x);
  if (it == s.begin()) return {it, false};
  return {prev(it), true};
}
template<class T> inline pair<typename set<T>::iterator,bool> le_it(set<T> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.upper_bound(x);
  if (it == s.begin()) return {it, false};
  return {prev(it), true};
}
template<class T> inline V<T> it_range(set<T> &st, int l, int r) {
  auto startIt = st.lower_bound(l); auto endIt = st.upper_bound(r); V<T> ret;
  for(auto itr = startIt; itr != endIt; itr++) ret.emplace_back(*itr);
  return ret;
}
template<class T> inline pair<typename multiset<T>::iterator,bool> g_it(multiset<T> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.upper_bound(x);
  if (it == s.end()) return {it, false};
  return {it, true};
}
template<class T> inline pair<typename multiset<T>::iterator,bool> ge_it(multiset<T> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.lower_bound(x);
  if (it == s.end()) return {it, false};
  return {it, true};
}
template<class T> inline pair<typename multiset<T>::iterator,bool> l_it(multiset<T> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.lower_bound(x);
  if (it == s.begin()) return {it, false};
  return {prev(it), true};
}
template<class T> inline pair<typename multiset<T>::iterator,bool> le_it(multiset<T> &s, T x) {
  if (s.empty()) return {s.end(), false};
  auto it = s.upper_bound(x);
  if (it == s.begin()) return {it, false};
  return {prev(it), true};
}
template<class T> inline V<T> it_range(multiset<T> &st, int l, int r) {
  auto startIt = st.lower_bound(l); auto endIt = st.upper_bound(r); V<T> ret;
  for(auto itr = startIt; itr != endIt; itr++) ret.emplace_back(*itr);
  return ret;
}
template<class T> constexpr void dup_erase(V<T> &a){a.erase(unique(a.begin(), a.end()), a.end());}
template <class T> V<int> iota(const V<T> &a, bool greater = false) {
    V<int> ret(a.size());
    iota(ret.begin(), ret.end(), 0);
    if (greater) {
      sort(RALL(ret), [&](int i, int j) {
        if (a[i] == a[j]) return i > j;
        return a[i] < a[j];
      });
    } else {
      sort(ALL(ret), [&](int i, int j) {
        if (a[i] == a[j]) return i < j;
        return a[i] < a[j];
      });
    }
    return ret;
}
constexpr int64_t modpow(int64_t x,int64_t n,int64_t m=1152921504606846976LL){int64_t ret=1;for(;n>0;x=x*x%m,n>>=1)if(n&1)ret=ret*x%m;return ret;}
constexpr int64_t safe_mod(int64_t x, int64_t m) {x%=m;if(x<0)x+=m;return x;}
constexpr int64_t keta(int64_t n, int64_t base = 10LL) {int64_t ret = 0; while(n > 0) {n /= base, ret++;} return ret;}
constexpr int pcnt(int64_t x) {return __builtin_popcountll(x);}
constexpr int log2f(int64_t x) {return 63 - __builtin_clzll(x);}
constexpr int log2c(int64_t x) {return (x==1LL)?0:(64-__builtin_clzll(x-1LL));}
constexpr int64_t nC2(int64_t n) {return n*(n-1)/2;}
constexpr long double deg2rad(int64_t degree){return (long double)degree * M_PI/180;}
mt19937 rnd_engine{random_device{}()};
inline int rand(int l, int r) {uniform_int_distribution<> ret(l, r);return ret(rnd_engine);}
inline long double lrand(long double l, long double r) {uniform_real_distribution<> ret(l, r);return ret(rnd_engine);}
inline long double nrand(long double ave, long double var) {normal_distribution<> ret(ave, var);return ret(rnd_engine);}
inline void yes(bool cond) {cout << (cond?"Yes":"No") << ENDL;}
inline bool is_palindrome(const string& s){return equal(ALL(s), s.rbegin());}
inline string make_palindrome(const string& s, bool odd = true) {string t = s.substr(0, SZ(s)-odd);reverse(ALL(t));return s + t;}
VV<int> make_enum_vec(V<int> v){
  if(v.empty()) return VV<int>(1,V<int>());
  int n=v.back(); v.pop_back();
  VV<int> ret,tmp=make_enum_vec(v);
  for(auto e:tmp)for(int i=0;i<n;++i){ret.push_back(e);ret.back().push_back(i);}
  return ret;
}
V<int> restore_path(V<int>& to, int goal, bool to1indexed = true) {
  V<int> ret;
  int x = goal;
  while(x >= 0) {
    ret.push_back(x);
    x = to[x];
  }
  reverse(ALL(ret));
  if (to1indexed) for(auto&& e: ret) e++;
  return ret;
}
string tolower(string s) {for(auto&& e: s) e = tolower(e); return s;}
string toupper(string s) {for(auto&& e: s) e = toupper(e); return s;}
string rtrim(const string &s, string delimiter){size_t end = s.find_last_not_of(delimiter);return (end == string::npos) ? "" : s.substr(0, end + 1);}
string ltrim(const string &s, string delimiter){size_t start = s.find_first_not_of(delimiter);return (start == string::npos) ? "" : s.substr(start);}
map<char,int> RULD = {{'R',0},{'U',1},{'L',2},{'D',3}};
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx6[6] = {1, 0, -1, 0, 1, -1};
const int dy6[6] = {0, 1, 0, -1, 1, -1};
const int dx8[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy8[8] = {0, 1, 0, -1, 1, 1, -1, -1};
class Timer{
  chrono::system_clock::time_point start;
public:
  Timer() : start(chrono::system_clock::now()) {}
  double count(){
    chrono::duration<double> duration = chrono::system_clock::now() - start;
    return duration.count();
  }
  bool is_timeout(double x){return (this -> count()) >= x;}
};
#ifdef Q__LOCAL
#define FILENAME __FILE__
#else
#define FILENAME __FILE__
// #define FILENAME "code.cpp" // AOJ
#endif
#define INCLUDED_MAIN
#include FILENAME
#endif