// code to sort array of zeroes and ones in increasing order
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the "<<i<<" ele  of vector: ";
        cin>>x;
        v.push_back(x);
    }
    int l , m , h;
    l = 0;
    m = 0;
    h = n-1;
    while(m<=h){
        if(v[m]==2) {swap(v[m],v[h]);h--;}
        else if(v[m]==0) {swap(v[m],v[l]);l++;m++;}
        else m++;
    }
    for(int i:v){
        cout<<i<<" ";
    }
}