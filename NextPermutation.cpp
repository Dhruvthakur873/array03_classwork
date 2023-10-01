#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&v,int s,int e){
        for(int i=s, j=e;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}
int pivotI(vector<int>&v){
    for(int i = v.size()-2;i>=0;i--){
        if(v[i]<v[i+1]){
            return i; 
        }
        else 
        return -1;

    }
}
void nextPermutation(vector<int>&v){
    int pivotIdx = -1;
    pivotIdx = pivotI(v);
    if(pivotIdx == -1){
        reverse(v,0,v.size()-1);
        return;
    }
    reverse(v,pivotIdx+1,v.size()-1);
    swap(v[pivotIdx],v[pivotIdx+1]);  
}
int main(){
    vector<int>v = {3,2,1};
    nextPermutation(v);
    for(int i:v){
        cout<<i<<" ";
    }

}
