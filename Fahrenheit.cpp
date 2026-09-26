#include <iostream>



using namespace std;



void f2c(){

  

int ch123;
  
double f;
  
double c;
  
cout<<"enter your choice 1 to : Convert temperature from Fahrenheit to Celsius 2 : Convert temperature from Celsius to Fahrenheit 3 : exit\n";
  
  cin>>ch123;
  
  while(true){

  switch(ch123){


    case 1 :
    cout<<"enter Fahrenheit temperature = ";
    cin>>f;
cout<<"temperature after Converting = "<<(f-32)/1.8<<endl;
      cout<<"enter your choice 1 to : Convert temperature from Fahrenheit to Celsius, 2 : Convert temperature from Celsius to Fahrenheit, 3 : exit\n";
  cin>>ch123;

      
  break;

    case 2 :
    cout<<"enter Celsius temperature = ";
    cin>>c;
    cout<<"temperature after Converting = "<<(c*1.8)+32<<endl;
    cout<<"enter your choice 1 to : Convert temperature from Fahrenheit to Celsius 2 : Convert temperature from Celsius to Fahrenheit 3 : exit\n";
  cin>>ch123;
    break;

    case 3 :
    cout<<"exiting...\n";
    return;
    break;


    default :
      cout<<"invalid choice): ! try again !! (:\n";
    cout<<"enter your choice 1 to : Convert temperature from Fahrenheit to Celsius 2 : Convert temperature from Celsius to Fahrenheit 3 : exit\n";
  cin>>ch123;
    break;










    

    
  }













    
    
  }




  


  
  
}






void theend(){


  cout<<"goodbye bro (: !!\n"<<endl;


  
}

void end(){

  
  cout<<"this is the end goodbye!!"<<endl<<endl;

  
}




void service(){


  

  int trys=4;
  int whtrys=0;
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


  else{
    cout<<"invalid input try again you have only 4 trys!!"<<endl;
    cin>>sv;
    while(true){
  



      if(sv == "yes" || sv == "Yes" || sv == "YES" || sv == "YeS" || sv == "yEs" || sv == "YEs") {

        cout<<"thank you bro(: !"<<endl;
        return;
      }
      else if(sv == "no" || sv == "No" || sv == "NO" || sv == "nO" || sv == "noo" || sv == "Noo") {

        cout<<"we are sorry );"<<endl;
        return;
        
      }

      else if(trys>whtrys){
        trys--;
        cout<<"invalid input try again you have only "<<trys<<" trys"<<endl;
    cin>>sv;
      }
      if(trys==whtrys){

  cout<<"too many incorrect attempts!"<<endl;
      cout<<"exiting..."<<endl;
      return;
  
}
    
    }
  }

    
    



  
  

}



int main(){




  f2c();



  
  service();


  
  
  end();



  
  theend();






  



  
}


