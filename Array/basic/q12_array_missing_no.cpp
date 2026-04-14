#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int total=n+1;
    int expected=total*(total+1)/2;
    int actual=0;
    for(int i=0;i<n;i++){
        actual=actual+arr[i];
    }
    cout<<"Missing no : "<<expected-actual;
    return 0;
}
