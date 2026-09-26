// total.cpp by youssef alaa



#include <iostream>
#include <string>




using namespace std;






void total(){



  string exiting="exiting...";

  double food;
  
  double shop;
  
  double trans;
  
  double enter;

  int choice;
  cout<<"Enter the total amount of money for food "<<endl;
  cin>>food;
  cout<<"Enter the total amount of money for shopping "<<endl;
  cin>>shop;
  cout<<"Enter the total amount of money for Transportation "<<endl;
  cin>>trans;
  cout<<"Enter the total amount of money for entertainment "<<endl;
  cin>>enter;
  cout<<"the total amount = "<<(food+shop+trans+enter)<<" $"<<endl;

  cout<<"enter your choice (1 : food total) (2 : shopping total) (3 : entertainment total)(4 : Transportation total) (5 : total ),( 6 : exit)"<<endl;
  cin>>choice;
while(true){

  switch(choice){

    case 1 :
    cout<<"total of food = "<<food<<"$"<<endl;
    cout<<"enter your choice (1 : food total) (2 : shopping total) (3 : entertainment total)(4 : Transportation total) (5 : total ),( 6 : exit)"<<endl;
  cin>>choice;
    break;
    case 2 :
    cout<<"total of shopping = "<<shop<<"$"<<endl;
      cout<<"enter your choice (1 : food total) (2 : shopping total) (3 : entertainment total)(4 : Transportation total) (5 : total ),( 6 : exit)"<<endl;
  cin>>choice;
      
    break;
    case 3 :
    cout<<"total of entertainment = "<<enter<<"$"<<endl;
      cout<<"enter your choice (1 : food total) (2 : shopping total) (3 : entertainment total)(4 : Transportation total) (5 : total ),( 6 : exit)"<<endl;
  cin>>choice;
    break;
    case 4 :
    cout<<"total of Transportation = "<<trans<<"$"<<endl;
      cout<<"enter your choice (1 : food total) (2 : shopping total) (3 : entertainment total)(4 : Transportation total) (5 : total ),( 6 : exit)"<<endl;
  cin>>choice;
      
    break;
    case 5 : 
    cout<<"total = "<<(shop+enter+trans+food)<<"$"<<endl;
      cout<<"enter your choice (1 : food total) (2 : shopping total) (3 : entertainment total)(4 : Transportation total) (5 : total ),( 6 : exit)"<<endl;
  cin>>choice;
    break;
    case 6 :
    cout<<exiting<<endl;
    return;
    break;
    default :
    cout<<"invalid choice try again!"<<endl;
      cout<<"enter your choice (1 : food total) (2 : shopping total) (3 : entertainment total)(4 : Transportation total) (5 : total ),( 6 : exit)"<<endl;
  cin>>choice;
    break;

    

    
  }

  
}

  
}


void service(){


  

  
  string sv;




  
  string ourservice= "Did you enjoy our service? Yes or no ? ";


  cout<<ourservice<<endl;
  
  
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

  
  string theend="this is the end goodbye!!";


  
  cout<<theend<<endl;

  
}


int main(){


  
  total();


  
  service();


  
  end();

  

  return 0;


  
}


