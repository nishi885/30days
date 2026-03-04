#include<stdio.h>
vector<int> twosum(vector<int>&arr,int t){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==t){
                return {i,j};
            }
        }
    }
    return {};
}
int main(){
    vector<int>arr={2,7,8,9,14,56};
    int t=9;
    twosum(arr,t);
    return 0;
}