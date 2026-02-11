/*统计方形*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,cnt = 0,cnt1 = 0;
    cin >> n >> m;
    if(n > m) swap(n,m);
    cnt = n * (n + 1) * m * (m + 1) / 4;
    while(n >= 0){
        cnt1 += n * m;
        n--;
        m--;
    }
    cout << cnt1 <<  " " << cnt - cnt1 << endl;
    return 0;
}