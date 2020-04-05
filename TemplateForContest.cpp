#include <bits/stdc++.h>

#define debug(x) cout <<"DEBUG"<<" "<< #x << ":" << x << '\n'
#define rep(i,n) for(int i = 0; i < ((int)(n)); i++)   // 0-indexed昇順
#define rep1(i,n) for(int i = 1; i <= ((int)(n)); i++) // 1-indexed昇順
#define rrep(i,n) for(int i = ((int)(n)-1); i >= 0; i--)  // 0-indexed降順
#define rrep1(i,n) for(int i = ((int)(n)); i >= 1; i--)   // 1-indexed降順
#define all(x) (x).begin(),(x).end()

using namespace std;

template<typename T>
using vec = vector<T>;
using i32 = int_fast32_t;
using i64 = int_fast64_t;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;
using ll = long long;
using ld = long double;
using vi = vec<int_fast32_t>;
using vl = vec<int_fast64_t>;
using vld = vec<ld>;
using vii = vec<vi>;  // 2次元配列
using PII = pair<int_fast32_t, int_fast32_t>;

template<class T>
using maxheap = std::priority_queue<T>;
template<class T>
using minheap = std::priority_queue<T, std::vector<T>, std::greater<T>>;

template<class T,class U> inline bool chmax(T &a, const U &b){if(a<b){a=b;return 1;}return 0;}
template<class T,class U> inline bool chmin(T &a, const U &b){if(a>b){a=b;return 1;}return 0;}

const ld Pi = std::acos(-1.0L);
constexpr ll infll = (1LL<<62)-1;
constexpr int inf = (1<<30)-1;
const int mod = 1000000007;
// const int mod = 998244353;


/*FUNCs=================================================*/


/*MAIN==================================================*/
signed main(){
    int START_TIME = clock();
    cin.tie(nullptr);
    ios::sync_with_stdio(false);   //cin cout 高速化
//    cout << fixed << setprecision(15);



    // printf("ExecutionTime: %d /ms\n",1000*(int)((clock()-START_TIME)/CLOCKS_PER_SEC));
}
