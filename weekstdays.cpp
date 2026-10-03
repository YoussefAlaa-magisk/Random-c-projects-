#include <iostream>
#include <string>


using namespace std;



void wad(){

  string ic ="invalid choice try again (: !";
string r="exiting........";
  double w;
  double d;
  int choice;
  int s=7;
  string wh="enter your choice (1 : convert days to weeks) (2 : convert weeks to days) (3 : exit) ";
  string dtw="enter value of days to convert it to weeks";
  string wtd="enter value of weeks to convert it to days";
  cout<<wh<<endl;
  cin>>choice;


  while(true){




    switch(choice) {




      case 1:
cout<<dtw<<endl;
        cin>>d;
        cout<<d<<"day after converting to weeks = "<<(d/s)<<"week"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;

      case 2:
        cout<<wtd<<endl;
        cin>>w;
        cout<<w<<"week after converting to days = "<<(w*s)<<"day"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      
      case 3:
        cout<<r<<endl;
        return;
        
      break;
      
      default:
        cout<<ic<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;


      
    }


    
  }


  
}









int main(){




wad();

  // محول بسيط جدا ومليت وانا بعمله اصلا 
  
}