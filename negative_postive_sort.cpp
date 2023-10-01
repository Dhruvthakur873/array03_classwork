// code to sort array of zeroes and ones in increasing order
#include<bits/stdc++.h>
using namespace std;
void sort(vector<int>&v){
    int i=0;
    int j = v.size()-1;
    while(i<j-1){
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        else if(v[i]>0&&v[j]<0){
            swap(v[i],v[j]);
            i++;
            j--;
        } 
    }
}
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

    sort(v);

    for(int i:v){
        cout<<i<<"  ";
    }
}