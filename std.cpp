#include <iostream>



#include <string>


using namespace std;













void av(){
string sn;
int age;
int math;
int english;
int science;

  cout<<"enter your name \n";
 getline(cin, sn);
  cout<<"your name is "<<sn<<endl;

  cout<<"enter your age \n";
  cin>>age;
  if(age>0){

    if(age>=18 && age<98) {

      cout<<"you are an adult !\n";
    }
      else if(age>=98) {
        cout<<"very big age not available\n";
      }
    else {

      cout<<"you are not an adult !!\n";
    }
  }
  else {
    cout<<"invalid value \n";

    
  }



  
cout<<"enter Your grade in Science ?/100"<<endl;
  cin>>science;
  if(science>=90 && science<=100) {
    cout<<"excellent"<<endl;
  }
  else if(science>=80 && science<=89) {


    cout<<"very good"<<endl;
  }

  else if(science>=70 && science<=79) {

    cout<<"good"<<endl;
  }

  else if(science>=60 && science<=69) {

    cout<<"acceptable"<<endl;
  }
    else if(science>=50 && science<=59) {
      cout<<"pass\n";
    }
  else if(science<50 && science>0) {
    cout<<"sorry you have failed better luck next time!"<<endl;
  }
  else if(science<=0) {
    cout<<"invalid\n"<<endl;
  }

else {

  cout<<"this value is higher than 100"<<endl;
}

cout<<"enter Your grade in math ?/100"<<endl;
  cin>>math;
  if(math>=90 && math<=100) {
    cout<<"excellent"<<endl;
  }
  else if(math>=80 && math<=89) {


    cout<<"very good"<<endl;
  }

  else if(math>=70 && math<=79) {

    cout<<"good"<<endl;
  }

  else if(math>=60 && math<=69) {

    cout<<"acceptable"<<endl;
  }
  else if(math>=50 && math<=59) {
      cout<<"pass\n";
    }
  else if(math<50 && math>0) {
    cout<<"sorry you have failed better luck next time!"<<endl;
  }
  else if(math<=0) {
    cout<<"invalid\n"<<endl;
  }

else {

  cout<<"this value is higher than 100"<<endl;
}


cout<<"enter Your grade in english ?/100"<<endl;
  cin>>english;
  if(english>=90 && english<=100) {
    cout<<"excellent"<<endl;
  }
  else if(english>=80 && english<=89) {


    cout<<"very good"<<endl;
  }

  else if(english>=70 && english<=79) {

    cout<<"good"<<endl;
  }

  else if(english>=60 && english<=69) {

    cout<<"acceptable"<<endl;
  }
  else if(english>=50 && english<=59) {
      cout<<"pass\n";
    }
  else if(english<50 && english>0) {
    cout<<"sorry you have failed better luck next time!"<<endl;
  }
  else if(english<=0) {
    cout<<"invalid\n"<<endl;
  }

else {

  cout<<"this grade is higher than 100"<<endl;
}



int ch1234;
  cout<<"enter your choice \n 1 : view your data \n 2 : view grade \n 3 : View your average grade and grade classification \n 4 : exit \n";
  cin>>ch1234;
  while(ch1234 == 1 || ch1234 == 2 || ch1234 == 3 || ch1234 == 4 || ch1234 >=5 || ch1234<=5) {
  switch(ch1234) {
    case 1 :
    cout<<"your name is "<<sn<<endl;
    if(age>0 && age<98) {
      cout<<"your age = "<<age<<endl;
    }
    else if(age>=98) {
      cout<<"very big age and not available "<<endl;
    }
    else {
      cout<<"you enterd invalid value for age "<<endl;
    }
     cout<<"enter your choice \n 1 : view your data \n 2 : view grade \n 3 : View your average grade and grade classification \n 4 : exit \n";
    cin>>ch1234;
    break;
    case 2 :
    cout<<"your grade in math = "<<math<<endl;
    cout<<"your grade in english = "<<english<<endl;
    cout<<"your grade in science = "<<science<<endl;
      if(english>100 && english<=1000) {
        cout<<"You are a liar in english "<<english<<endl;
      }


      
      if(math>100 && math<=1000) {



        cout<<"You are a liar in math "<<math<<endl;
        
      }

      if(science>100 && science<1000) {

        cout<<"You are a liar in science "<<science<<endl;
      }
      if(science>=1000) {
        cout<<"You are the biggest, most stubborn liar science\n";
      }
      if(math>=1000) {
        cout<<"You are the biggest, most stubborn liar math\n";
          }
      if(english>=1000) {
        cout<<"You are the biggest, most stubborn liar english\n";
      }
      cout<<"enter your choice \n 1 : view your data \n 2 : view grade \n 3 : View your average grade and grade classification \n 4 : exit \n";
    cin>>ch1234;
    break;
    case 3 :
    cout<<"Your total score out of 300 = "<<math+english+science<<endl;
      if(math+english+science>300) {
        cout<<"You are a liar"<<endl;
      }
else if(math+english+science<150 && math+english+science>0) {

  cout<<"you need to restart or shutdown your brain fail!!\n";
}
      else if(math+english+science<=0){
        cout<<"what are you doing here ?"<<endl;
      }
else if(math+english+science>=270 && math+english+science<=300) {


  cout<<"excellent!!\n";
      }
else if(math+english+science>=240 && math+english+science<=269) {


  cout<<"very good!!\n";
    }

else if(math+english+science>=210 && math+english+science<=239) {


  cout<<"good!!\n";
}


else if(math+english+science>=180 && math+english+science<=209) {


  cout<<"acceptable!!\n";
      }
else if(math+english+science>=150 && math+english+science<=179) {


  cout<<"pass\n";
}      





      if(english>100) {
        cout<<"You are a liar in english "<<english<<endl;
      }
      if(math>100) {



        cout<<"You are a liar in math "<<math<<endl;
      }

      if(science>100) {

        cout<<"You are a liar in science "<<science<<endl;
      }

      



      
      cout<<"enter your choice \n 1 : view your data \n 2 : view grade \n 3 : View your average grade and grade classification \n 4 : exit \n";
    cin>>ch1234;
    break;
    case 4 :
    cout<<"ok"<<endl;
    return;
    break;

    
    
    default :
    cout<<"invalid choice please try again\n";
      cout<<"enter your choice \n 1 : view your data \n 2 : view grade \n 3 : View your average grade and grade classification \n 4 : exit \n";
    cin>>ch1234;
      
    break;


    
  }








    
}


  






  







  
}





int main() {


 av();






  
}





