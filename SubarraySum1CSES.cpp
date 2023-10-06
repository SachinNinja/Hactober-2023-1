#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e9
#define me min_element
#define mex max_element
#define PI 3.141592653589793238462
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
 
//******************************************************DEBUGGER*******************************************************************************************
 
//Debugger
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
ll gcd(ll x, ll y) {
    return y ? gcd(y, x % y) : x;
}
 
ll lcm(ll a, ll b) {
    return ((a/gcd(a,b))*b);
}
 
static bool cmp(pair<int,int>& a,pair<int,int>& b){
    if(a.first>b.first) return true;
    else if(a.first==b.first){
        if(a.second<b.second) return true;
        else return false;
    }else{
        return false;
    }
}
 
//********************************************************** CODE **************************************************************************************
void task() {
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=0,ans=0;
    long long curr_sum =0;
 
    while(r<n){
       curr_sum+=a[r];
       while(curr_sum>x and l<r){
          curr_sum-=a[l];
          l++;
       }
       if(curr_sum==x) ans++;
       r++;
    }
    cout<<ans<<endl;
}
 
int main() 
{   
    ios::sync_with_stdio(0);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("Error.txt", "w", stderr);
   #endif
    long long t = 1;
    // cin >> t;
    while (t--) {
      task();
    }
    return 0;
}
