/*kkksc考前临时抱佛脚*/
#include<bits/stdc++.h>
using namespace std;
int s[10],t[10][25],ans = 0,minn;
void dfs(int subject,int index,int left,int right){
    if(index == s[subject]){
         int maxn = max(left,right);
         minn = min(maxn,minn);
         return;
    }
    dfs(subject,index + 1,left + t[subject][index],right);
    dfs(subject,index + 1,left,right + t[subject][index]);
}
int main(){
    for(int i = 0;i < 4;i++){
        cin >> s[i];
    }
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < s[i];j++){
            cin >> t[i][j];
        }
    }
    for(int i = 0;i < 4;i++){
        minn = 1e9 + 10;
        dfs(i,0,0,0);
        ans += minn;
    }
    cout << ans << endl;
    return 0;
}