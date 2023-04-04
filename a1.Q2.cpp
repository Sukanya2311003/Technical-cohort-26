#include<iostream>
using namespace std;
int main(int argc, char**argv){
    //grading system
    int marks;
    cout<<"enter marks out of 100: ";
    cin>>marks;
    if(marks>90 && marks<=100){
        cout<<"Excellent"<<endl;
    }
    else if(marks>80 && marks<=90){
        cout<<"Good"<<endl;
    }
    else if(marks>70 && marks<=80){
        cout<<"Fair"<<endl;
    }
    else if(marks>60 && marks<=70){
        cout<<"meets expectations"<<endl;
    }
    else if(marks<=60) {
        cout<<"below par";
    }
    else{
        cout<<"Invalid input";
    }
    return 0;
}
