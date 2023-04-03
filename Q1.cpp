#include<iostream>
using namespace std;
int main(){
  int row,col;
  for(row=1;row<=5;row++){
    for(col=1;col<=5;col++){
        if(row==1 || row==5 || col==6-row){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
  }
return 0;
}
      
