#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define ld long double
#define pll pair<ll, ll>
#define vl vector<ll>
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define all(a) a.begin(), a.end()
#define pqueue(T) priority_queue<T>
#define pdqueue(T) priority_queue<T, vector<T>, greater<T>>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#ifdef LOCAL
#define dbg(...)                                                               \
    cerr << "[" << #__VA_ARGS__ << "]: ", _dbg(__VA_ARGS__), cerr << endl
template <class A, class B> void _p(const pair<A, B>& p);
template <class T> void _p(const T& x)
{
    if constexpr (requires { cerr << x; }) {
        cerr << x;
    }
    else {
        cerr << "{";
        bool f = true;
        for (auto& e : x) {
            if (!f) {
                cerr << ", ";
            }
            f = false;
            _p(e);
        }
        cerr << "}";
    }
}
template <class A, class B> void _p(const pair<A, B>& p)
{
    cerr << "(";
    _p(p.first);
    cerr << ", ";
    _p(p.second);
    cerr << ")";
}
void _dbg()
{
}
template <class H, class... T> void _dbg(const H& h, const T&... t)
{
    _p(h);
    if (sizeof...(t)) {
        cerr << ", ";
    }
    _dbg(t...);
}
#else
#define dbg(...)
#endif
const ll MOD = 1'000'000'007LL;
const int dx4[] = {1, 0, -1, 0}, dy4[] = {0, 1, 0, -1};
const int dx8[] = {1, 1, 0, -1, -1, -1, 0, 1},
          dy8[] = {0, 1, 1, 1, 0, -1, -1, -1};
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

void solve()
{
}
