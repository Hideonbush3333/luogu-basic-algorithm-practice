/*火星人*/
#include <bits/stdc++.h>
using namespace std;
int main() {    
    int n, m;    
    cin >> n >> m;    
    vector<int> nums(n);    
    for (int i = 0; i < n; i++) {        
        cin >> nums[i];    
    }    
    for (int i = 0; i < m; i++) {
    next_permutation(nums.begin(), nums.end());    
    }    
    for (int i = 0; i < n; i++) {        
    cout << nums[i] << " "; 
    }              
    return 0;
}