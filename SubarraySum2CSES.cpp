#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
void task() {
    ll n,x;
    cin >> n >> x;
    vector<int> a(n);
    vector<ll> ps(n);
    map<ll,int> m;
    m[0]=1;
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
       cin>>a[i];
       if(i) ps[i] = ps[i-1] + a[i];
       else ps[i]=a[i];
    }
    for(int i=0;i<n;i++){
        ll target = ps[i]-x;
        ans += m[target];
        // cout<<ans<<" "<<i<<" "<<target<<" "<<m[target]<<endl;
        m[ps[i]]++;
    }
    cout<<ans;
}
 
int main() {
    task();
    return 0;
