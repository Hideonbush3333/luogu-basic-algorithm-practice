/*组合的输出*/
#include <bits/stdc++.h>
using namespace std;
int n, k,ans = 0;
vector<int> nums;
vector<int> current;
void dfs(int start) {    
    if (int(current.size()) == k) {
        for(size_t i = 0;i < current.size();i++){
            cout << setw(3) << current[i];
        }
        cout << endl;
        return;
    }
    for (int i = start; i <= n; i++){
        current.push_back(i);
        dfs(i + 1);
        current.pop_back();
    }
}

int main() {
    cin >> n >> k;
    dfs(1);  
    return 0;
}