/*三连击升级版*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,x,y,z,count[10],cnt = 0;
    cin >> a >> b >> c;
    if(a == 0){
        cout << "No!!!" << endl;
        return 0;
    }
    for(int i = 123;i <= 329;i++){
        int flag = 0;
        memset(count,0,sizeof(count));
        x = i;
        y = b * x / a;
        z = c * x / a;
        int x1 = x,y1 = y,z1 = z;
        while(x1 > 0){//拆位
            count[x1 % 10]++;
            x1 /= 10;
        }
        while(y1 > 0){
            count[y1 % 10]++;
            y1 /= 10;
        }
        while(z1 > 0){
            count[z1 % 10]++;
            z1 /= 10;
        }
        if(count[0] != 0){//这里要注意,0是不能出现的
            flag = 1;
        }
        for(int i = 1;i <= 9;i++){
            if(count[i] != 1){//1-9每个数字仅能出现一次
                flag = 1;
            }
        }
        if(flag == 0){
            cnt++;
            cout << x << " " << y << " " << z << endl;
        }
    }
    if(cnt == 0){        
        cout << "No!!!" << endl;    
    }
    return 0;
}