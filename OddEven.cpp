/*

OddEven.cpp case

*/




#include <iostream>




using namespace std;






void oddeven(){

int num;
int ch12;
while(true){



cout<<"enter you choice 1 : case number even/odd 2 : exit"<<endl;
cin>>ch12;
switch(ch12){
  
case 1 :
cout<<"enter a number \n";


  cin>>num;
if(num!=0){

  if(num%2 == 0) {

    cout<<"this number "<<num<<" is even!\n";
    
  }
else{

  cout<<"this num "<<num<<" is odd!\n";
  
}


}
  
else {




  cout<<"this number is 0\n";

  
}

cout<<"enter you choice 1 : case number even/odd 2 : exit"<<endl;
cin>>ch12;
break;


case 2 :
cout<<"ok\n";
return;
break;



default : 
cout<<"invalid choice try again! (:"<<endl;
cout<<"enter you choice 1 : case number even/odd 2 : exit"<<endl;
cin>>ch12;




}
  
  
  
}  



}





void goodbye(){
	
	
	
	cout<<"goodbye bro!! (:\n";
	
	
	
	
	}

void service(){


  

  
  string sv;



  
  
  cout<<"Did you enjoy our service? Yes or no ?"<<endl;

  cin>>sv;

  
  if(sv == "yes") {

    cout<<"thank you bro(: !"<<endl;
    
  }
  else if(sv == "Yes") {

    cout<<"thank you bro(: !"<<endl;
    
  }

  else if(sv == "YES") {

    cout<<"thank you bro(: !"<<endl;
    
  }
  else if(sv == "YeS") {

    cout<<"thank you bro(: !"<<endl;
    
  }

  else if(sv == "yEs") {

    cout<<"thank you bro(: !"<<endl;
    
  }

  else if(sv == "No") {

    cout<<"we are sorry );"<<endl;
    
    
  }
  else if(sv == "no") {

    cout<<"we are sorry );"<<endl;
    
    
  }


  else if(sv == "NO") {

    cout<<"we are sorry );"<<endl;
    
    
  }


  else if(sv == "nO") {

    
    cout<<"we are sorry );"<<endl;
    

    
  }




  
  
  
}


int main(){








  oddeven();
  
  
  
  goodbye();



  service();


  
}
