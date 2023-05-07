#include<iostream>

using namespace std;

int main(){
    int a,b;
    double x;
    int no;
   
    cout<<"area of?\n1.Square\n2.Rectangle\n3.Triangle\n4.Circle\n";
    cin>>no;
    
    
    if (no==1){
        cout<<"enter the value of side of a square ";
        cin>>a;
    }else if (no==2){
        cout<<"enter the value of breadth ";
        cin>>a;
        if(cin.fail()){
            cout<<"";
        }else{
           cout<<"enter the value of height ";
           cin>>b;
        }
    }else if (no==3){
        cout<<"enter the value of base  ";
        cin>>a;
        if(cin.fail()){
            cout<<"";
        }else{
           cout<<"enter the value of height ";
           cin>>b;
        }
    }else if (no==4){
        cout<<"enter the value of radius of circle ";
        cin>>a;
    }else {
        cout<<"";
    }
    
    x = (no==1) ? (a*a)  : 
        (no==2) ? (a*b) : 
        (no==3) ? (0.5*(a*b)) : 
        (no==4) ? (3.14*(a*a)) : 
        0;
        
    if (x!=0){
        if (no==1){
            cout<<"Area of Square = "<<x;
        }else if (no==2){
            cout<<"Area of Rectangle = "<<x;
        }else if (no==3){
            cout<<"Area of Triangle = "<<x;
        }else if(no==4){
            cout<<"Area of Circle = "<<x;
        }
    }else{
        if (no > 0 && no <= 4){
        cout<<"Invalid Input";
        }else{
            cout<<"Invalid Input";
        }
    }
   
    return 0;
}
