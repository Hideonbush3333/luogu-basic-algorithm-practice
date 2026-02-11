/*涂条纹*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cost_r[55],cost_b[55],cost_w[55],min = 1e9 + 10;
    cin >> n >> m;
    char flag[55][55];
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> flag[i][j];
        }
    }
    for(int i = 1;i <= n;i++){
        int count_r = 0,count_b = 0,count_w = 0;
        for(int j = 1;j <= m;j++){
            if(flag[i][j] == 'W'){
                count_w++;
            }
            else if(flag[i][j] == 'B'){
                count_b++;
            }
            else{
                count_r++;
            }
        }
        cost_r[i] = m - count_r;
        cost_b[i] = m - count_b;
        cost_w[i] = m - count_w;
    }
    for(int i = 1;i <= n - 2;i++){
        for(int j = i + 1;j <= n - 1;j++){
            int ans = 0;
            for(int k = 1;k <= i;k++){
                ans += cost_w[k];
            }
            for(int k = i + 1;k <= j;k++){
                ans += cost_b[k];
            }
            for(int k = j + 1;k <= n;k++){
                ans += cost_r[k];
            }
             if(ans < min) min = ans;
        }
    }
    cout << min << endl;
    return 0;
}