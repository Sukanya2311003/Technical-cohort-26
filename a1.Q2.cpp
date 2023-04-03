#include<iostream>
using namespace std;
int main(int argc, char**argv){
    //grading system
    int marks;
    cin>>marks;
    if(marks>90 && marks<=100){
        cout<<"Excellent"<<endl;
    }
    if(marks>80 && marks<=90){
        cout<<"Good"<<endl;
    }
    if(marks>70 && marks<=80){
        cout<<"Fair"<<endl;
    }
    if(marks>60 && marks<=70){
        cout<<"meets expectations"<<endl;
    }
    if(marks<=60) {
        cout<<"below par";
    }
    return 0;
    
}
