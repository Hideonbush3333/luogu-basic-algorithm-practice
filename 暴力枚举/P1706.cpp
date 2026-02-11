/*全排列*/
#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> path;
bool used[10];

void dfs() {
    if (int(path.size()) == n) {
        for (size_t i = 0;i < path.size();i++) {
            printf("%5d",path[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            used[i] = true;
            path.push_back(i);
            dfs();
            path.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    cin >> n;
    dfs();
    return 0;
}