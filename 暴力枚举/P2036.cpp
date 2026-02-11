/*Perket*/
#include<bits/stdc++.h>
using namespace std;
int n,s[15],b[15],diff = 1e9 - 10;
void dfs(int step,int Sum_s,int Sum_b,int count){
    if(step == n){
        if(count > 0){
           diff = min(diff,abs(Sum_s - Sum_b));
        }
        return;
    }
    dfs(step + 1,Sum_s,Sum_b,count);
    dfs(step + 1,Sum_s * s[step],Sum_b + b[step],count + 1);
}
int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> s[i] >> b[i];
    }
    dfs(0,1,0,0);
    cout << diff << endl;
    return 0;
}