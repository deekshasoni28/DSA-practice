#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    int start=0;
    int end=n-1;
    int temp;
    while(start<end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed Array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}