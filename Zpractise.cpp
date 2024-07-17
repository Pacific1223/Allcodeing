#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define f(e,p,n) for(int e=p;e<n;e++)
#define MP make_pair
#define pts cout<<"YES\n";
#define ptn cout<<"NO\n";
#define F first
#define S second
#define pb push_back
#define all(x) x.begin(),x.end()
using vi=vector<int> ;
using vvi=vector<vector<int>> ;
using vs=vector<string> ;
using ii= pair<int,int>;
#define ull unsigned long long
#define lld long double
#define pt(x) cout<<x<<endl;
#define nwl cout<<"\n"
#define sz(x) ((int)x.size())
#define rz(arr,n) arr.resize(n)
//int dx[]= {-1,0,1,0}; 
//int dy[]= {0,1,0,-1}; 

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " -> "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.F);
    cerr << ",";
    _print(p.S);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(multimap<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

int add(ll a,ll b,ll mod){
    return (a+b)%mod;
}
int sub(ll a,ll b,ll mod){
   int dif=a-b;
   if(dif<0) return (mod+dif)%mod;
   return dif%mod;
}
int mul(ll a,ll b,ll mod){
    int ans=((a%mod)*(b%mod))%mod;
    return ans%mod;
}
int binpow(ll a,ll b,ll mod){
    ll ans=1;
  while(b){

    if(b&1) ans= ((a%mod)*(ans%mod))%mod;
    b=b>>1;
    a=((a%mod)*(a%mod))%mod;

  }
  return ans%mod;
}

int div(ll a,ll b,ll mod){
      int binv= binpow( b, mod-2 , mod );
    return mul( a, binv , mod);
}
    /*
           pt(x) cout<<x<<" ";
           nwl cout<<"\n";
           pts ptn for YES and NO
           rz(arr,n) arr.resize(n);
           add(a,b,mod)
           simlly for div,mul,binpow,sub
           debug(x) debug of x in cerr file
     */
ll mod=1e9+7;
 //int n,k;
// vi arr;
#define int long long
void solve(){
 int q,k;cin>>q>>k;
 string s;
 int x;
 set<pair<int,string>>st;
 map<string,int>mp;
 while (q--)
 {
    cin>>s>>x;
    if(st.find(MP(mp[s],s))!=st.end()){
        st.erase(MP(mp[s],s));
    }
    mp[s]+=x;
    st.insert(MP(mp[s],s));
 }
 ll ans=0;
    while(k--){
        if(st.empty())break;
        auto it=st.rbegin();
        ans+=it->first;
        st.erase(*it);
    }
    cout<<ans<<endl;
 }
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);     
    #endif
 // freopen(".in", "r", stdin);
 // freopen(".out", "w", stdout);

//    int t;cin>>t;while(t--)
   {
    solve();
   }

 }