#include <iostream>



using namespace std;






/*






METER TO CM & OP.cpp by youssef alaa abdelaziz






*/





void hm2cm(){


  cout<<"hello in the simple meter to cm or op converter"<<endl<<endl;


  
}

void m2cm(){



  int hun=100;
  double m;
  double cm;
  int choice;
  
  string thewhile="enter your choice (1 : convert meter to cm) (2 : convert cm to meter) (3 : exit)";
  cout<<thewhile<<endl;
  cin>>choice;

  while(true){



    switch(choice){




      case 1 :
      cout<<"enter the value of meter to convert it "<<endl;
      cin>>m;
      cout<<m<<" after converting to cm = "<<(m*hun)<<endl;
      cout<<thewhile<<endl;
      cin>>choice;
      break;

      case 2 :
            cout<<"enter the value of  c meter to convert it "<<endl;
      cin>>cm;
      cout<<cm<<" after converting to meter = "<<(cm/hun)<<endl;
       cout<<thewhile<<endl;
      cin>>choice;
      break;

      case 3 :
      cout<<"exiting..."<<endl;
      return;
      break;


      default:
      cout<<"invalid choice try again (: !"<<endl;
cout<<thewhile<<endl;
      cin>>choice;
      break;
    }


    
  }
  


  
}




int main(){


  hm2cm();
  m2cm();


  return 0;

  
}


