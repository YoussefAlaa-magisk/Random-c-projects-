//bank.cpp by youssef alaa abdelaziz




#include <iostream>


using namespace std;


void bank(){


double balance=1999.9;
int pin;
int ch1234; 
double amountw;
double amountd;  
int cpin;
int att;
cout<<"create your pin : ";
  cin>>pin;
  cout<<"confirm your pin "<<endl;
  cin>>cpin;
  if(cpin == pin){
  cout<<"correct pin!"<<endl;
  cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
cin>>ch1234;

  while(true){



    




    switch(ch1234){



      case 1 :
      cout<<"your balance = "<<balance<<"$"<<endl;
cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
cin>>ch1234;


      break;
      case 2 :
     cout<<"Enter the amount you wish to withdraw"<<endl;   
cin>>amountw;
        
        

       if(amountw>balance && amountw>0){

          cout<<"your balance is not enough\n";
          cout<<"your balance = "<<balance<<"$"<<endl;
         cout<<"try again"<<endl;
  cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
cin>>ch1234;
        }
         
else if(amountw<=0){

          cout<<"invalid\n";
          cout<<"your balance = "<<balance<<"$"<<endl;
         cout<<"try again"<<endl;
  cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
cin>>ch1234;
}
        else if(amountw<=balance && amountw>0){
          balance-=amountw;
        cout<<"you withdrew "<<amountw<<"$"<<endl;
cout<<"your balance = "<<balance<<"$"<<endl;

          
  
        
        
        cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
cin>>ch1234;
        }
      break;
      case 3 :
      cout<<"your balance = "<<balance<<"$"<<endl;
        cout<<"enter a amount you wish to Deposit "<<endl;
        cin>>amountd;
        
        if(amountd<=0) {
           cout<<"invalid\n";
          cout<<"your balance = "<<balance<<"$"<<endl;
         cout<<"try again"<<endl;
  cout<<"enter your choice ,( 1 : view your balance) , (2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
cin>>ch1234;
        }
        else if(amountd>0){
          balance+=amountd;
        cout<<"your balance = "<<balance<<"$"<<endl;
        
        cout<<"enter your choice ,( 1 : view your balance) , (2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
cin>>ch1234;
        }
      break;
      case 4 :
      cout<<"exiting...\n";  
     return;
      break;
      default :
      cout<<"invalid choice try again \n";
        cout<<"enter your choice ,( 1 : view your balance) , (2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
cin>>ch1234;
      break;











      


      
      
    }






    
    
  }





  }
  


  else if(cpin!=pin) {

    cout<<"incorrect pin try again!"<<endl;

    att=3;

    while(att>0){

      cout<<"enter your pin : ";
      cin>>cpin;

      if(cpin==pin){

        cout<<"correct pin!"<<endl;
        cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
        cin>>ch1234;

        while(true){

          switch(ch1234){

            case 1 :
            cout<<"your balance = "<<balance<<"$"<<endl;
            cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
            cin>>ch1234;
            break;

            case 2 :
            cout<<"Enter the amount you wish to withdraw"<<endl;
            cin>>amountw;

            if(amountw>balance && amountw>0){

              cout<<"your balance is not enough\n";
              cout<<"your balance = "<<balance<<"$"<<endl;
              cout<<"try again"<<endl;
              cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
              cin>>ch1234;
            }

            else if(amountw<=0){

              cout<<"invalid\n";
              cout<<"your balance = "<<balance<<"$"<<endl;
              cout<<"try again"<<endl;
              cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
              cin>>ch1234;
            }

            else if(amountw<=balance && amountw>0){

              balance-=amountw;
              cout<<"you withdrew "<<amountw<<"$"<<endl;
              cout<<"your balance = "<<balance<<"$"<<endl;

              cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
              cin>>ch1234;
            }
            break;

            case 3 :
            cout<<"your balance = "<<balance<<"$"<<endl;
            cout<<"enter a amount you wish to Deposit "<<endl;
            cin>>amountd;

            if(amountd<=0) {

              cout<<"invalid\n";
              cout<<"your balance = "<<balance<<"$"<<endl;
              cout<<"try again"<<endl;
              cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
              cin>>ch1234;
            }

            else if(amountd>0){

              balance+=amountd;
              cout<<"your balance = "<<balance<<"$"<<endl;

              cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
              cin>>ch1234;
            }
            break;

            case 4 :
            cout<<"exiting...\n";
            return;
            break;

            default :
            cout<<"invalid choice try again \n";
            cout<<"enter your choice ,( 1 : view your balance) ,( 2 : To withdraw) , (3 : Depositing funds) , (4 : exit )"<<endl;
            cin>>ch1234;
            break;
          }
        }
      }

      else {

        att--;

        cout<<"incorrect pin!"<<endl;
        cout<<"attempts left = "<<att<<endl;
      }
    }

    if(att==0){

      cout<<"too many incorrect attempts!"<<endl;
      cout<<"exiting..."<<endl;
      return;
    }
  }
}








void hbank(){





  

  cout<<" hello in my simple c++ atm!!(:"<<endl;





  
  
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











void end(){

  
  cout<<"this is the end goodbye!!"<<endl<<endl;

  
}

int main(){







  

  hbank();




  
  bank();





  
  service();



  

  end();





  









  
  
}