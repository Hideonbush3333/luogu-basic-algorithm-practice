/*选数*/
#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> nums;
vector<int> current;
int ans = 0;
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
void dfs(int start) {    
    if (int(current.size()) == k) {
        int sum = 0;
        for (int num : current) {
            sum += num;
        }
        if (isPrime(sum)) {
            ans++;
        }
        return;
    }
    for (int i = start; i < n; i++){
        current.push_back(nums[i]);
        dfs(i + 1);
        current.pop_back();
    }
}

int main() {
    cin >> n >> k;
    nums.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    dfs(0);  
    cout << ans << endl;
    return 0;
}