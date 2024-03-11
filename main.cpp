/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE BETWEEN 1 TO 9:";
    cin>>n;
    char ch='y';
    if(n==0 || n<0){
        cout<<"Error!"<<endl;
        cout<<"Enter the positive integer:";
        cin>>n;
    }
    if(n<=3){
        cout<<"your number is >2 or not(y/n):";
        cin>>ch;
        if(ch!='y'||ch!='n'){
        cout<<"\nERROR!"<<endl;
        cout<<"enter the correct char:";
        cin>>ch;
    }
        if(ch=='y' && n==3){
            cout<<"You entered  3"<<endl;
        }
        else{
            cout<<"your number is <2 or not(y/n):";
            cin>>ch;
            if(ch=='y' && n==1){
                cout<<"You entered 1"<<endl;
            }
            else if(n==2){
                cout<<"You enterd 2"<<endl;
            }
            
        }
    }
    if(n>3 && n<=6){
        cout<<"your number is >5 or not(y/n):";
        cin>>ch;
        if(ch!='y'||ch!='n'){
        cout<<"\nERROR!"<<endl;
        cout<<"enter the correct char:";
        cin>>ch;
    }
        if(ch=='y'&& n==6){
            cout<<"You entered 6"<<endl;
        }
        else{
            cout<<"your number is <5 or not(y/n):";
            cin>>ch;
            if(ch=='y'&& n==4){
                cout<<"You entered 4"<<endl;
            }
            else if(n==5){
                cout<<"You entered 5"<<endl;
            }
        }
    }
    if(n>6 && n<=9){
        cout<<"your number is >8 or not(y/n):";
        cin>>ch;
        if(ch!='y'||ch!='n'){
        cout<<"\nERROR!"<<endl;
        cout<<"enter the correct char:";
        cin>>ch;
    }
        if(ch=='y'&& n==9){
            cout<<"You entered 9"<<endl;
        }
        else{
            cout<<"your number is <8 or not(y/n):";
            cin>>ch;
            if(ch=='y'&& n==7){
                cout<<"You entered 7"<<endl;
            }
            else if(n==8){
                cout<<"You entered 8"<<endl;
            }
        }
    }
}