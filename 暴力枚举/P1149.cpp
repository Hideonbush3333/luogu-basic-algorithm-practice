/*火柴棒等式*/
#include<bits/stdc++.h>
using namespace std;
int a[2010] = {6,2,5,5,4,5,6,3,7,6},k;
int n,ans = 0;
int main(){
    cin >> n;
    for(int i = 10;i <= 2000;i++){//2111 是2开头用火柴棒最少的数字 超过24 所以打表到2000就行了
        int temp = i;
        while(temp > 0){
            a[i] += a[temp % 10];
            temp /= 10;
        }
    }
    for(int i = 0;i <= 1000;i++){
        for(int j = 0;j <= 1000;j++){
            k = i + j;
            if(a[i] + a[j] + a[k] == n - 4){
                ans++;
            }
        }
    }
    cout << ans << endl;
}