#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        vector<int>merge(m+n);
        while(k<(m+n)){
            if(nums1[i]<nums2[j]){
                merge[k]=nums1[i];
                k++;
                i++;
            }
            else{
                merge[k] = nums2[j];
                k++;
                j++;

            }
        }
        while(i<m){
            merge[k] = nums1[i];
            k++;
            i++;
            
        }
        while(j<n){
            merge[k]  = nums2[j];
            k++;
            j++;
        }
        for(int i:merge){
        cout<<i<<" ";
    }
}

int main(){

    vector<int>v  = {1,3,5};
    vector<int>v1= {1,2,4,6,8,10,11};
    int n =v.size();
    int n1 = v1.size();
    merge(v,n,v1,n1);
}