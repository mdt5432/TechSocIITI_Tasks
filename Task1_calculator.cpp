#include <iostream>
using namespace std;
double expo(double base,int pow){ 
    double i=0;
    double res=1;
    if (pow>=0){
        while (i<pow){
        res=res*base;
        i++;
        }
    }
    return res;
}
double fact(double n){
    double res=1;
    double i=1;
     while(i<=n){
        res=res*i;   
        i++;       
        }   
    return res;
}
int main(){
    cout<<"Select the operation by entering a number\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Exponentiation\n6:Trignometric Functions\n";
    int op;
    cin>>op;
    if (op==1){
        double num1, num2;
        cout<<"enter number 1:";
        cin>>num1;
        cout<<"enter number 2:";
        cin>>num2;
        cout<<"the sum is:"<< num1+num2;
    }
    else if (op==2){
        double num1, num2;
        cout<<"enter number to subtract from:";
        cin>>num1;
        cout<<"enter number to be subtracted:";
        cin>>num2;
        cout<<"the result is:"<< num1-num2;
    }
    else if (op==4){
        double num1, num2;
        cout<<"enter dividend:";
        cin>>num1;
        cout<<"enter divisor:";
        cin>>num2;
        cout<<"the result is:"<< num1/num2;
    }
    else if (op==3){
        double num1, num2;
        cout<<"enter number 1:";
        cin>>num1;
        cout<<"enter number 2:";
        cin>>num2;
        cout<<"the result is:"<< num1*num2;
    }
 
    else if (op==5){
        double b;
        int p;
        cout<<"Enter base:";
        cin>>b;
        cout<<"Enter power:";
        cin>>p;
        cout<<"the result is:"<<expo(b,p);
    }   

    else if (op==6){
        int tr;
        double angle;
        cout<<"Enter 1 for sin,2 for cos and 3 for tan:";
        cin>>tr;
        cout<<"Enter angle in radians:";
        cin>>angle;
        double s1=0;
        for (double i=0;i<100;i++){
                s1+=expo(-1,i)*expo(angle,(2*i+1))/fact(2*i+1);
            }    
        double s2=0;
        for (double j=0;j<100;j++){
                s2+=expo(-1,j)*expo(angle,(2*j))/fact(2*j);
            }    
        if (tr==1){
            cout<<"The result is:"<<s1;
        }
        else if (tr==2){
            cout<<"The result is:"<<s2;
        }
        else if (tr==3){
            cout<<"The result is:"<<s1/s2;
        }
        else{
        cout<<"Error:invalid input";
        }
    }
    else{
        cout<<"Error:invalid input";
    }   
    return 0;
}
