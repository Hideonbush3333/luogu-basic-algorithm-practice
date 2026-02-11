/*类斐波那契循环数*/
#include<bits/stdc++.h>
using namespace std;
bool judge(int n){
    vector<int>nums;
    string temp = to_string(n);
    for(size_t i = 0;i < temp.size();i++){
        nums.push_back(temp[i]- '0');
    }
    for(int i = 0;i < n;i++){
        int sum = 0;
        for(size_t j = i;j < temp.size() + i ;j++){
            sum += nums[j];
        }
        nums.push_back(sum);
        if(sum == n){
            return true;
        }
        if(sum > n){
            break;
        }
    }
    return false;
}
int main(){
    for(int i = pow(10,7);i >= 0;i--){
        if(judge(i)){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}