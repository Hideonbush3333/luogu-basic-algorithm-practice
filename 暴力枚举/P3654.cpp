/*first step*/
#include<bits/stdc++.h>
using namespace std;
int r,c,k,ans = 0;
char matrix[110][110];
bool judge_row(int x,int y){
    for(int i = x;i <= x + k - 1;i++){
        if(matrix[i][y] != '.'){
            return false;
        }
    }
    return true;
}
bool judge_col(int x,int y){
     for(int i = y;i <= y + k - 1;i++){
        if(matrix[x][i] != '.'){
            return false;
        }
     }
     return true;
}
int main(){
    cin >> r >> c >> k;
    for(int i = 1;i <= r;i++){
       for(int j = 1;j <= c;j++){
          cin >> matrix[i][j];
       }
    }
    for(int i = 1;i <= r;i++){
        for(int j = 1;j <= c;j++){
            if(matrix[i][j] == '.'){
                if(judge_row(i,j)){
                    ans++;
                }
                if(judge_col(i,j)){
                    ans++;
                }
            }
        }
    }
    if(k == 1){
        ans /= 2;
    }
    cout << ans;
    return 0;
}