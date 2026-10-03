/*


+-0.cpp by youssef alaa


*/

#include <iostream>

using namespace std;



void casenum() {



  double num;
  
cout<<"enter a number \n";
  


  cin>>num;


  if(num>0) {


    cout<<"this number "<<num<<" is positive\n";
    
  }

  else if(num == 0){



    cout<<"this number "<<num<<" is 0\n";

    
  }


  else if(num<0) {


    cout<<"this number "<<num<<" is negative\n";


    
  }


  else{


    cout<<"invalid number"<<endl;

    
  }
}




int main(){




  casenum();
  
// الفانكشن بتاعت حالة الارقام سالب ولا موجب ولا صفر


  
  return 0;
}