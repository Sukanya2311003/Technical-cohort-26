#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    bool isPrime=1;
    for(int i=2; i<n;i++){
        // rem=0, not prime
    if(n%i==0){
        isPrime=0;
        break;
    }
    }
    if(isPrime==0){
        cout<<"not a prime number"<<endl;
    }
    else{
        cout<<"is a prime number";
       
    }
    
return 0;
}
