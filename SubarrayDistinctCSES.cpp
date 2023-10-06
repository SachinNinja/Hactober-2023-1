#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
void task() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    ll count = 0;
    int left = 0;
    int right = 0;
    unordered_map<int,int> map;
    while (right < n) {
 
        if (map.find(arr[right])==map.end())
            map[arr[right]]=0;
        map[arr[right]]++;
 
        while (map.size() > k) {
            map[arr[left]]= map[arr[left]] - 1;
            if (map[arr[left]] == 0)
                map.erase(arr[left]);
            left++;
        }
        count += right - left + 1;
        right++;
    }
    cout<<count;
}
 
int main() {
    task();
    return 0;
}
