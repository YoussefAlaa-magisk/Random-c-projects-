/*

for loop by youssef alaa forloop.cpp

*/




#include <iostream>



using namespace std;


int main() {

double num1;
  double num2;
  char oper;

  for(int x=1;x<=15;)  {

     cout<<x<<" :youssef alaa abdelaziz"<<endl;

    x++;
    
  }
  for(int y=1;y<=67;) {
      
      cout<<y<<endl<<endl<<endl<<endl<<endl;
      y++;
  }
  
  for(int y=67;y>=1;y--) {

    cout<<y<<endl;
  }

int month=2;
  int weeks=4;
  int days=7;
  for(int n=1;n<=month;n++) {

cout<<"month  :  "<<n<<endl;
    for(int w=1;w<=weeks;w++) {

    
      cout<<"week  :  "<<w<<endl;
      
      for(int d=1;d<=days;d++) {

        cout<<"  day :  "<<d<<endl;
      }
    }
      
    
  }


int age;
  cout<<"enter your age\n";
  cin>>age;

  if(age>=0) {

    if(age == 0) {

      cout<<"new born"<<endl;
    }

    else if(age == 1) {

      cout<<"you are toddler"<<endl;
    }

    else if(age == 2) {

      cout<<"you are toddler"<<endl;
    }

    else if(age>=3 && age<=5) {

      cout<<"you are a preschooler"<<endl;
    }

    else if(age>=6 && age<=12) {

      cout<<"you are a child"<<endl;
    }



    else if(age == 13) {

      cout<<"you are a young teenager"<<endl;
    }

    else if(age>=14 && age<=15) {


      cout<<" you are a teenager"<<endl;
    }


    else if(age>=16 && age<=17) {


      cout<<"you are a older teenager"<<endl;
    }

    else if(age>=18 && age<=24) {

      cout<<"you are a young adult"<<endl;
    }


    else if(age>=25 && age<=39) {

      cout<<"you are an adult"<<endl;
    }



    else if(age>=40 && age<=59) {


      cout<<"You are a middle-aged person"<<endl;
    }


    else if(age>=60 && age<=74) {

      cout<<"you are old"<<endl;
    }




    else if(age>=75 && age<=84) {




      cout<<"You are very old"<<endl;
    }



    else if(age>=85) {

      cout<<"you are oldest old"<<endl;
    }


    
  }


  else {

    cout<<"this age is invalid"<<endl;

    
  }

cout<<"enter an operator (+,/,-,*)"<<endl;
cin>>oper;

  cout<<"enter two numbers in calc"<<endl;

  cin>>num1;
  cin>>num2;
  
  switch(oper) {


    case '+' :
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
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
    default :
    cout<<"this operator is invalid\n"<<endl;
    break;
  }

return 0;
  
}