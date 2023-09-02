#define PROBLEM "https://judge.yosupo.jp/problem/many_aplusb"
// #define Q__OPTIMIZE
// #define Q__INCLUDE_ATCODER_LIB
// #define Q__INTERACTIVE
#if !__INCLUDE_LEVEL__
#include __FILE__


struct Solver {
  void solve() {
    INT(t);
    REP(t) {
      LL(a,b);
      print(a+b);
    }
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
  solver.solve();
  return 0;
}

#else
#define _GLIBCXX_DEQUE_BUF_SIZE 64
#ifdef Q__OPTIMIZE
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#endif
#include <bits/stdc++.h>
#ifdef Q__INCLUDE_ATCODER_LIB
#include <atcoder/all>
using namespace atcoder;
using mint = modint1000000007;
// using mint = modint998244353;
std::istream &operator>>(std::istream& is, mint& a) { int tmp; is >> tmp; a = tmp; return is; }
std::ostream &operator<<(std::ostream& os, const mint& a) {os << a.val(); return os;}
#endif
using namespace std;
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
#define ALL(x)  (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x)   ((int)(x).size())
#define POW2(n)      (1LL << ((int)(n)))
#define GET1BIT(x,n) (((x) >> (int)(n)) & 1)
#define INF ((1 << 30) - 1)
#define INFL (1LL << 60)
#define PRECISION std::setprecision(16)
#define INT(...) int __VA_ARGS__;    input(__VA_ARGS__)
#define LL(...)  ll __VA_ARGS__;     input(__VA_ARGS__)
#define STR(...) string __VA_ARGS__; input(__VA_ARGS__)
#define LD(...)  ld __VA_ARGS__;     input(__VA_ARGS__)
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
using ll=long long;
using ull=unsigned long long;
using ld=long double;
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
template<class T> inline V<T> transposed(V<T>& A){int h=SZ(A),w=SZ(A[0]);V<T> tA(w);REP(i,h)REP(j,w)tA[j].push_back(A[i][j]);return tA;}
template<class T> constexpr T pos1d(T y,T x,T h,T w){assert(between(T(0),y,h));assert(between(T(0),x,w));return y*w+x;}
template<class T> constexpr pair<T,T> pos2d(T p,T h,T w){T y=p/w,x=p-y*w;assert(between(T(0),y,h));assert(between(T(0),x,w));return{y,x};}
template<class T> constexpr T sign(T n) {return (n > 0) - (n < 0);}
constexpr ll modpow(ll x,ll n,ll m=1152921504606846976LL){ll ret=1;for(;n>0;x=x*x%m,n>>=1)if(n&1)ret=ret*x%m;return ret;}
constexpr ll safe_mod(ll x, ll m) {x%=m;if(x<0)x+=m;return x;}
constexpr ll keta(ll n, ll base = 10LL) {ll ret = 0; while(n > 0) {n /= base, ret++;} return ret;}
constexpr int pcnt(ll x) {return __builtin_popcountll(x);}
constexpr int log2f(ll x) {return 63 - __builtin_clzll(x);}
constexpr int log2c(ll x) {return (x==1LL)?0:(64-__builtin_clzll(x-1LL));}
constexpr ll nC2(ll n) {return n*(n-1)/2;}
constexpr ld deg2rad(ll degree){return (ld)degree * M_PI/180;}
mt19937 rnd_engine{random_device{}()};
inline int rand(int l, int r) {uniform_int_distribution<> ret(l, r);return ret(rnd_engine);}
inline ld lrand(ld l, ld r) {uniform_real_distribution<> ret(l, r);return ret(rnd_engine);}
inline ld nrand(ld ave, ld var) {normal_distribution<> ret(ave, var);return ret(rnd_engine);}
inline void yes(bool cond) {cout << (cond?"Yes":"No") << ENDL;}
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx6[6] = {1, 0, -1, 0, 1, -1};
const int dy6[6] = {0, 1, 0, -1, 1, -1};
const int dx8[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy8[8] = {0, 1, 0, -1, 1, 1, -1, -1};
#endif