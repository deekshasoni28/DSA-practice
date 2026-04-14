#include<iostream>
using namespace std;
int main(){
    int a[]={2,3,4,67,87,9,8,23,1,35,66,87,90};
    int n=sizeof(a)/sizeof(a[0]);
    int even=0;
    int odd=0;
    for (int i=0;i<n;i++){
        if(a[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }    
    }
    cout<<"Even : "<<even<<endl;;
    cout<<"Odd : "<<odd;
    return 0;
}