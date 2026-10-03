#include <iostream>



using namespace std;







void hhsm(){



  

    cout<<"hello in the simple m and hours and seconds converter"<<endl<<endl;



  
}

void hsm(){


   double m;
   double h;
   double s;
  int choice;
  string htm="enter value of hours to convert it to minutes : ";
  string hts="enter value of hours to convert it to seconds : ";
  string mth="enter value of minutes to convert it to hours : ";




  string mts="enter value of minutes to convert it to seconds : ";


  string stm="enter value of seconds to convert it to minutes : ";


  string sth="enter value of seconds to convert it to hours : ";


  string exiting="exiting... : ";

  
  string thewhile="enter your choice (1 : convert hours to minutes) (2 : convert hours to seconds) (3 : convert minutes to hours) (4 : convert minutes to seconds) (5 : convert seconds to minutes) (6 : convert seconds to hours) (7 : to exit) (8 : to love)";
  string hate="i hate you";
  cout<<thewhile<<endl;
  cin>>choice;



  
  while(true){




    switch(choice){




      case 1 :
      cout<<htm<<endl;
      cin>>h;
      cout<<h<<" hour after converting to minutes = "<<(h*60)<<"min"<<endl;
      cout<<thewhile<<endl;
      cin>>choice;
      break;



      case 2 :
      cout<<hts<<endl;
      cin>>h;
      cout<<h<<" hour after converting to seconds = "<<(h*3600)<<"sec"<<endl;
        cout<<thewhile<<endl;
        cin>>choice;

        break;


      case 3 :
        cout<<mth<<endl;
        cin>>m;
        cout<<m<<" min after converting to hours = "<<(m/60)<<"hour"<<endl;
        cout<<thewhile<<endl;
        cin>>choice;
      break;
      case 4 :
        cout<<mts<<endl;
        cin>>m;
        cout<<m<<" min after converting to seconds = "<<(m*60)<<"sec"<<endl;
          cout<<thewhile<<endl;
        cin>>choice;
      break;
      case 5 :
        cout<<stm<<endl;
        cin>>s;
        cout<<s<<" sec after converting to minutes = "<<(s/60)<<"min"<<endl;
        cout<<thewhile<<endl;
        cin>>choice;
      break;
      case 6 :
                cout<<sth<<endl;
        cin>>s;
        cout<<s<<" sec after converting to hours = "<<(s/3600)<<"hour"<<endl;
        cout<<thewhile<<endl;
        cin>>choice;
      break;
      case 7 :
        cout<<exiting<<endl;
        return;
      break;
      case 8 :
      cout<<hate<<endl;
      return;
      break;
      default :



        cout<<"invalid choice try again (: !"<<endl;
        cout<<thewhile<<endl;
        cin>>choice;
      break;

      
    }


    
  }
   


  
}






int main(){




  hhsm();
  hsm();






  return 0;
  
  
} 
// 169 سطر