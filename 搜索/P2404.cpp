/*自然数的拆分问题*/
#include<bits/stdc++.h>
using namespace std;
int n;
vector <int> path;
void dfs(int sum,int start){
    if(sum == 0){
        if(path.size() > 1){
        cout << path[0];
        }
        for(size_t i = 1;i < path.size();i++){
           cout << "+" << path[i];
        }
        cout << endl;
        return;
    }
    for(int i = start;sum - i >= 0;i++){
        path.push_back(i);
        sum -= i;
        dfs(sum,i);
        sum += i;
        path.pop_back();
    }
    
}
int main(){
    cin >> n;
    dfs(n,1);
    return 0;
}