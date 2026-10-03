#include <iostream>

using namespace std;


/*

simple calc.cpp by youssef alaa!

*/


void vir() {

  string yn;
  cout<<"enter your name \n\n";
  
  cin>>yn;
  cout<<"hello my brother "<<yn<<" in my simple c++ code!!\n"<<endl;
  cout<<"this is my simple calc.cpp by youssef alaa (me)\n\n";
}

void calc() {
  char oper;
  
  double num1;
  
  double num2;
  
  cout<<"enter an operator (+,*,/,-) : ";
  cin>>oper;
  
  cout<<"enter two numbers \n";
  cin>>num1;
  
  cin>>num2;
  

  switch(oper) {



    case '+' :
    cout<<num1<<"+"<<num2<<"="   <<num1+num2<<endl;
   break;
    

    case '*' :
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    break;
    

    case '/' :
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    break;
    

    case '-' :
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    break;
    

    case '%' :
    cout<<"modulo is not oper in this calc"<<endl;
    break;

    
    default :
    cout<<"ERROR!! this operator is not valid"<<endl;
    break;

}

  
}
int main() {

  vir();
  
  calc();




  
  return 0;




}