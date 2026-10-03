/*


vhrandom


*/

#include <iostream>
#include <string>

/*
#include <windows.h> //cancelled
#include <vector> //cancelled
#include "اvhrandom.h" // canc 100%



input output stream yes sir


<string> yes sir


""



*/



using namespace std;

void gr(){



int math;
int english;
int science;



  


  
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
  cout<<"enter your choice \n 1 : view grade\n 2 : View your average grade and grade classification \n 3 : exit \n";
  cin>>ch1234;
  while(ch1234 == 1 || ch1234 == 2 || ch1234 == 3 || ch1234 >=5 || ch1234<=5) {
  switch(ch1234) {
    case 1 :
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
  cout<<"enter your choice \n 1 : view grade\n 2 : View your average grade and grade classification \n 3 : exit \n";
    cin>>ch1234;
    break;
    case 2 :
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

      



    cout<<"enter your choice \n 1 : view grade\n 2 : View your average grade and grade classification \n 3 : exit \n";
    cin>>ch1234;
    break;
    case 3 :
cout<<"exiting"<<endl;
return;
    


      
    cout<<"enter your choice \n 1 : view grade\n 2 : View your average grade and grade classification \n 3 : exit \n";
    cin>>ch1234;
    break;

    
    
    default :
    cout<<"invalid choice please try again\n";
        cout<<"enter your choice \n 1 : view grade\n 2 : View your average grade and grade classification \n 3 : exit \n";
    cin>>ch1234;
      
    break;


    
  }








    
}


  






  







  
}









  
void funcfor(){

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

}


void hcalc () {


  cout<<"theres calc here \n\n";
  
}
void calc() {


    char oper;
  double num1;
  double num2;
cout<<"enter an operator (+ , * , / ,- )"<<endl<<endl;



  
  cin>>oper;

  

  if(oper == '+' || oper == '*' || oper == '/' || oper == '-') {

  
  
cout<<"enter two numbers"<<endl<<endl;

  cin>>num1;
  cin>>num2;
  
  switch(oper) {



    case '+' :
 cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
   break;
    case '*' :
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    break;
    
    case '-' :
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    break;

    case '/' :
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    break;

    
    
 
 
 
 
  }

  
  
}

else {
  
  cout<<"invalid"<<endl;
  
  }
  
}




void yn(){


  string name;
  cout<<"enter your name "<<endl;
getline(cin, name);
  cout<<"hello "<<name<<endl<<endl;
cout<<"your name is "<<name<<endl<<endl;
}

void cabt() {
  
  string bt;
    cout<<"enter your blood type\n\n";

  cin.ignore();
 getline(cin, bt);

  if(bt == "O+") {

    cout<<"O positive (O+): 37.4% of the population. This is the most common type not rare"<<endl;
  }

  else if(bt == "A+") {


    cout<<"A positive (A+): 35.7% of the population. This is the second most common type not rare \n";
  }

  else if(bt == "B+") {

    cout<<"B positive (B+): 8.5% of the population. It is moderately common in some regions"<<endl;
  }

  else if(bt == "O-") {


    cout<<"O negative (O-): 6.6% of the population. It is considered a universal red blood cell donor (rare)"<<endl;
  }

  else if(bt == "A-") {


    cout<<"A negative (A-): 6.3% of the population (rare)"<<endl;
  }

  else if(bt == "AB+") {

    cout<<"AB positive (AB+): 3.4% of the population This is the universal recipient type for plasma and red blood cells (very rare)"<<endl;
  }

  else if(bt == "B-") {


    cout<<"B negative (B-): 1.5% of the population (very rare)"<<endl;
  }

  else if(bt == "AB-") {


    cout<<".AB negative (AB-): 0.6% of the population This is the rarest of the eight primary blood types (very high rare)"<<endl;
  }

  else if(bt == "O plus") {

    cout<<"O positive (O+): 37.4% of the population. This is the most common type not rare"<<endl;
  }

  else if(bt == "A plus") {


    cout<<"A positive (A+): 35.7% of the population. This is the second most common type not rare \n";
  }

  else if(bt == "B plus") {

    cout<<"B positive (B+): 8.5% of the population. It is moderately common in some regions"<<endl;
  }

  else if(bt == "O negative") {


    cout<<"O negative (O-): 6.6% of the population. It is considered a universal red blood cell donor (rare)"<<endl;
  }

  else if(bt == "A negative") {


    cout<<"A negative (A-): 6.3% of the population (rare)"<<endl;
  }

  else if(bt == "AB plus") {

    cout<<"AB positive (AB+): 3.4% of the population This is the universal recipient type for plasma and red blood cells (very rare)"<<endl;
  }

  else if(bt == "B negative") {


    cout<<"B negative (B-): 1.5% of the population (very rare)"<<endl;
  }

  else if(bt == "AB negative") {


    cout<<".AB negative (AB-): 0.6% of the population This is the rarest of the eight primary blood types (very high rare)"<<endl;
  }
  else if(bt == "Oplus") {

    cout<<"O positive (O+): 37.4% of the population. This is the most common type not rare"<<endl;
  }

  else if(bt == "Aplus") {


    cout<<"A positive (A+): 35.7% of the population. This is the second most common type not rare \n";
  }

  else if(bt == "b plus") {

    cout<<"B positive (B+): 8.5% of the population. It is moderately common in some regions"<<endl;
  }

  else if(bt == "Onegative") {


    cout<<"O negative (O-): 6.6% of the population. It is considered a universal red blood cell donor (rare)"<<endl;
  }

  else if(bt == "Anegative") {


    cout<<"A negative (A-): 6.3% of the population (rare)"<<endl;
  }

  else if(bt == "ABplus") {

    cout<<"AB positive (AB+): 3.4% of the population This is the universal recipient type for plasma and red blood cells (very rare)"<<endl;
  }

  else if(bt == "Bnegative") {


    cout<<"B negative (B-): 1.5% of the population (very rare)"<<endl;
  }

  else if(bt == "ABnegative") {


    cout<<".AB negative (AB-): 0.6% of the population This is the rarest of the eight primary blood types (very high rare)"<<endl;
  }
 else if(bt == "O Plus") {

    cout<<"O positive (O+): 37.4% of the population. This is the most common type not rare"<<endl;
  }

  else if(bt == "A Plus") {


    cout<<"A positive (A+): 35.7% of the population. This is the second most common type not rare \n";
  }

  else if(bt == "B Plus") {

    cout<<"B positive (B+): 8.5% of the population. It is moderately common in some regions"<<endl;
  }

  else if(bt == "O Negative") {


    cout<<"O negative (O-): 6.6% of the population. It is considered a universal red blood cell donor (rare)"<<endl;
  }

  else if(bt == "A Negative") {


    cout<<"A negative (A-): 6.3% of the population (rare)"<<endl;
  }

  else if(bt == "AB Plus") {

    cout<<"AB positive (AB+): 3.4% of the population This is the universal recipient type for plasma and red blood cells (very rare)"<<endl;
  }

  else if(bt == "B Negative") {


    cout<<"B negative (B-): 1.5% of the population (very rare)"<<endl;
  }

  else if(bt == "AB Negative") {


    cout<<".AB negative (AB-): 0.6% of the population This is the rarest of the eight primary blood types (very high rare)"<<endl;
  }


  else if(bt == "o+") {

    cout<<"O positive (O+): 37.4% of the population. This is the most common type not rare"<<endl;
  }

  else if(bt == "a+") {


    cout<<"A positive (A+): 35.7% of the population. This is the second most common type not rare \n";
  }

  else if(bt == "b+") {

    cout<<"B positive (B+): 8.5% of the population. It is moderately common in some regions"<<endl;
  }

  else if(bt == "o-") {


    cout<<"O negative (O-): 6.6% of the population. It is considered a universal red blood cell donor (rare)"<<endl;
  }

  else if(bt == "a-") {


    cout<<"A negative (A-): 6.3% of the population (rare)"<<endl;
  }

  else if(bt == "ab+") {

    cout<<"AB positive (AB+): 3.4% of the population This is the universal recipient type for plasma and red blood cells (very rare)"<<endl;
  }

  else if(bt == "b-") {


    cout<<"B negative (B-): 1.5% of the population (very rare)"<<endl;
  }

  else if(bt == "ab-") {


    cout<<".AB negative (AB-): 0.6% of the population This is the rarest of the eight primary blood types (very high rare)"<<endl;
  }




 else if(bt == "oplus") {

    cout<<"O positive (O+): 37.4% of the population. This is the most common type not rare"<<endl;
  }

  else if(bt == "aplus") {


    cout<<"A positive (A+): 35.7% of the population. This is the second most common type not rare \n";
  }

  else if(bt == "bplus") {

    cout<<"B positive (B+): 8.5% of the population. It is moderately common in some regions"<<endl;
  }

  else if(bt == "onegative") {


    cout<<"O negative (O-): 6.6% of the population. It is considered a universal red blood cell donor (rare)"<<endl;
  }

  else if(bt == "anegative") {


    cout<<"A negative (A-): 6.3% of the population (rare)"<<endl;
  }

  else if(bt == "abplus") {

    cout<<"AB positive (AB+): 3.4% of the population This is the universal recipient type for plasma and red blood cells (very rare)"<<endl;
  }

  else if(bt == "bnegative") {


    cout<<"B negative (B-): 1.5% of the population (very rare)"<<endl;
  }

  else if(bt == "abnegative") {


    cout<<".AB negative (AB-): 0.6% of the population This is the rarest of the eight primary blood types (very high rare)"<<endl;
  }





  else if(bt == "OPLUS") {

    cout<<"O positive (O+): 37.4% of the population. This is the most common type not rare"<<endl;
  }

  else if(bt == "APLUS") {


    cout<<"A positive (A+): 35.7% of the population. This is the second most common type not rare \n";
  }

  else if(bt == "BPLUS") {

    cout<<"B positive (B+): 8.5% of the population. It is moderately common in some regions"<<endl;
  }

  else if(bt == "ONEGATIVE") {


    cout<<"O negative (O-): 6.6% of the population. It is considered a universal red blood cell donor (rare)"<<endl;
  }

  else if(bt == "ANEGATIVE") {


    cout<<"A negative (A-): 6.3% of the population (rare)"<<endl;
  }

  else if(bt == "ABPLUS") {

    cout<<"AB positive (AB+): 3.4% of the population This is the universal recipient type for plasma and red blood cells (very rare)"<<endl;
  }

  else if(bt == "BNEGATIVE") {


    cout<<"B negative (B-): 1.5% of the population (very rare)"<<endl;
  }

  else if(bt == "ABNEGATIVE") {


    cout<<".AB negative (AB-): 0.6% of the population This is the rarest of the eight primary blood types (very high rare)"<<endl;
  }

else if(bt == "O positive") {

    cout<<"O positive (O+): 37.4% of the population. This is the most common type not rare"<<endl;
  }

  else if(bt == "A positive") {


    cout<<"A positive (A+): 35.7% of the population. This is the second most common type not rare \n";
  }

  else if(bt == "B positive") {

    cout<<"B positive (B+): 8.5% of the population. It is moderately common in some regions"<<endl;
  }

  else if(bt == "oneGative") {


    cout<<"O negative (O-): 6.6% of the population. It is considered a universal red blood cell donor (rare)"<<endl;
  }

  else if(bt == "a NEgative") {


    cout<<"A negative (A-): 6.3% of the population (rare)"<<endl;
  }

  else if(bt == "AB positive") {

    cout<<"AB positive (AB+): 3.4% of the population This is the universal recipient type for plasma and red blood cells (very rare)"<<endl;
  }

  else if(bt == "bNeGative") {


    cout<<"B negative (B-): 1.5% of the population (very rare)"<<endl;
  }

  else if(bt == "AB NEgative") {


    cout<<".AB negative (AB-): 0.6% of the population This is the rarest of the eight primary blood types (very high rare)"<<endl;
  }

  else{

    cout<<"this blood type is not available\n";
  }


  
  

  
  string con;
  cout<<"enter your continent africa,europe,antarctica,asia,north america,south america,oceania\n";
 getline(cin, con);

  if(con == "africa") {




    
    cout<<"You are part of the population of the African continent, and your continent's population is approximately 1.59 billion people"<<endl;




    
  }
    else if(con == "asia") {



    cout<<"You are part of the population of the Asian continent, and your continent's population is approximately 4.86 billion people"<<endl;



      
    }


      else if(con == "Africa") {


        cout<<"You are part of the population of the African continent, and your continent's population is approximately 1.59 billion people"<<endl;

        
      }

        else if(con == "AFRICA") {


        cout<<"You are part of the population of the African continent, and your continent's population is approximately 1.59 billion people"<<endl;
        }


        else if(con == "Oceania") {



          cout<<"You are part of the population of the Oceania continent, and your continent's population is approximately 47.2m people"<<endl;
        }

          else if(con == "australia") {


            cout<<"You are part of the population of the Oceania continent, and your continent's population is approximately 47.2m people"<<endl;
          }

      else if(con == "Australia") {


        cout<<"You are part of the population of the Oceania continent, and your continent's population is approximately 47.2m people"<<endl;
      }

        else if(con == "Europe") {


          cout<<"You are part of the population of the European continent, and your continent's population is approximately 744m people"<<endl;
        }

else if(con == "EUROPE") {


          cout<<"You are part of the population of the European continent, and your continent's population is approximately 744m people"<<endl;
}

  else if(con == "ASIA") {


            cout<<"You are part of the population of the Asian continent, and your continent's population is approximately 4.86 billion people"<<endl;
  }
    
          else if(con == "Asia") {


            cout<<"You are part of the population of the Asian continent, and your continent's population is approximately 4.86 billion people"<<endl;
          }

            else if(con == "EuRoPe") {


          cout<<"You are part of the population of the European continent, and your continent's population is approximately 744m people"<<endl;
            }
   else if(con == "europe") {



     cout<<"You are part of the population of the European continent, and your continent's population is approximately 744m people"<<endl;
   }
  else if(con == "antarctica") {

     cout<<"Are you penguin? Do you know Linux? It's your friend you are lying.\n"<<endl;
    
   }

    else if(con == "South america") {


      cout<<"You are part of the population of the south american continent, and your continent's population is approximately 441m people"<<endl;
    }

      else if(con == "South America") {


      cout<<"You are part of the population of the south american continent, and your continent's population is approximately 441m people"<<endl;
      }
        else if(con == "North america") {


      cout<<"You are part of the population of the north american continent, and your continent's population is approximately 390m people"<<endl;
        }

          else if(con == "North America") {


      cout<<"You are part of the population of the north american continent, and your continent's population is approximately 390m people"<<endl;
          }
  else if(con == "south america") {


    cout<<"You are part of the population of the south american continent, and your continent's population is approximately 441m people"<<endl;
  }

  else if(con == "north america") {


    cout<<"You are part of the population of the north american continent, and your continent's population is approximately 390m people"<<endl;
    
  }

    else if(con == "oceania") {



      cout<<"You are part of the population of the Oceania continent, and your continent's population is approximately 47.2m people"<<endl;
    }

      else if(con == "AfRiCa") {


        cout<<"You are part of the population of the African continent, and your continent's population is approximately 1.59 billion people"<<endl;
      }
else if(con == "AsIa") {


        cout<<"You are part of the population of the Asian continent, and your continent's population is approximately 4.86 billion people"<<endl;
}
      else if(con == "my house") {


        cout<<"you are an idiot bro\n\n";
      }

        else if(con == "mars") {

          cout<<"you are a fucking liar\n\n";
        }

          else if(con == "Mars") {

          cout<<"you are a fucking liar\n\n";
          }
          else if(con == "idk") {



            cout<<"why bro?"<<endl<<endl;
          }

            else if(con == "i dont know") {


              cout<<"why bro?"<<endl<<endl;
            }



              else if(con == "aFrIcA") {


        cout<<"You are part of the population of the African continent, and your continent's population is approximately 1.59 billion people"<<endl;
              }


                else if(con == "aSiA") {


            cout<<"You are part of the population of the Asian continent, and your continent's population is approximately 4.86 billion people"<<endl;
                }


                  else if(con == "eUrOpE") {


          cout<<"You are part of the population of the European continent, and your continent's population is approximately 744m people"<<endl;
                  }

                    else if(con == "no") {
                      

                      cout<<"so you need a slap?";
                    }


                      


    else if(con == "continent") {

      cout<<"wtf"<<endl<<endl;

      
    }

      else if(con == "Continent") {


        
      cout<<"wtf"<<endl<<endl;


        
      }


        
        else if(con == "CONTINENT") {

      cout<<"wtf"<<endl<<endl;


          
        }



          
else if(con == "CoNtInEnT") {

      cout<<"wtf"<<endl<<endl;
}





  
  else if(con == "cOnTiNeNt") {

      cout<<"wtf"<<endl<<endl;

    
  }




    
          
  else{


    cout<<" ERROR ! this continent is not available ";
  }
  
  cout<<"your Continent is "<<con<<endl;
  cout<<"your blood type is "<<bt<<endl;
  
}


void age() {
	
	  int age;
  cout<<"enter your age \n";

  cin>>age;

  if(age>0) {



    if(age>=18) {


      cout<<"you are an adult!! (:"<<endl<<endl;

      
    }
    else {


      cout<<"you are not an adult ! ):"<<endl<<endl;

      
    }
  }
  else {


    cout<<"this value "<<age<<" is not valid"<<endl<<endl;

    
  }
	
	if(age>0) {


    cout<<"your age = "<<age<<endl<<endl;

    
  }

  else if(age<=0) {

    
    cout<<"this value "<<age<<" is not valid"<<endl;
  }
	}


void gb() {

  cout<<"goodbye bro!!!!"<<endl;
}




void funcfavnum(){



float favnum;
  cout<<"enter your fav number\n";
  cin>>favnum;
    if(favnum>0) {
    cout<<"You entered an integer && your favnum is "<<favnum<<endl;
    
    }
  else if(favnum<0) {

    cout<<"You have entered a negative number && your fav numner is "<<favnum<<endl;
  }
  else {
    cout<<"you entered 0 && your fav number is "<<favnum<<endl;
  }

  
}


void oddeven(){




cout<<"enter a number also \n";
  int numb;
  cin>>numb;
  if(numb != 0) {


if(numb%2==0) {


  cout<<numb<<" is even \n";
}

    else {

      cout<<numb<<" is odd \n";
    }



    
  }
    else if(numb != 0 || !(numb > 0) || !(numb < 0)){

      cout<<"invalid"<<endl;
      return;
    }
else {


  
  cout<<"this number is 0";


  
}



  
}



void stringfunc(){


  
string asking= "your phone is on yes or no? ";


  
string knowing= "0 = false & 1 = true ";


  
  cout<<"remember "<<knowing<<endl;




  
  
  string x;





  cout<<asking;


  
  cin>>x;





  
  if(x == "yes") {


    cout<<"your phone is on! (:\n";

    
  }

  else if(x == "no"){




    
    cout<<"your phone is off! (:\n";


    
    
  }
  


  else{



    
    cout<<"invalid"<<endl;



    
    
  }
  






  


  
}




int main() {





  
funcfor();






yn();



  
age();


  

cabt();


  

hcalc();


  
  
calc();

  


  
oddeven();



  
funcfavnum();




stringfunc();


  
  
gr();


  
  
gb();
  
  



  
  







  






  












  




























































return 0;









	



}
