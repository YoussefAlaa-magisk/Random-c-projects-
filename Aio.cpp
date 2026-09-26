#include <iostream>





#include <string>





using namespace std;




























/*
#include <windows.h> //cancelled
#include <vector> //cancelled
#include "الهوية الشخصيه.h" // ملغي 100%



input output stream yes sir


<string> yes sir


""



*/








// total func by youssef alaa abdelaziz






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
















































void fahretcel(){


int ch123;
double fahr;
double cel;
cout<<"enter your choice 1 to : Convert temperature from Fahrenheit to Celsius 2 : Convert temperature from Celsius to Fahrenheit 3 : exit\n";
  cin>>ch123;
  while(true){

  switch(ch123){


    case 1 :
    cout<<"enter Fahrenheit temperature = ";
    cin>>fahr;
cout<<"temperature after Converting = "<<(fahr-32)/1.8<<endl;
      cout<<"enter your choice 1 to : Convert temperature from Fahrenheit to Celsius, 2 : Convert temperature from Celsius to Fahrenheit, 3 : exit\n";
  cin>>ch123;
  break;

    case 2 :
    cout<<"enter Celsius temperature = ";
    cin>>cel;
    cout<<"temperature after Converting = "<<(cel*1.8)+32<<endl;
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




/*void yn(){


  string name;
  cout<<"enter your name "<<endl;
getline(cin, name);
  cout<<"hello "<<name<<endl<<endl;
cout<<"your name is "<<name<<endl<<endl;
}*/

void cabt() {
  
  string bt;
    cout<<"enter your blood type\n\n";

  
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





  
  // الدوال او الفانكشنس بتستدعي

/*
المشروع ده هو الهوية وانا بتعلم C++
وكل شوية كنت بزود فيه حاجات جديدة
والحمد لله وصلت بيه لعدد سطور كبير
وكل ده من الموبايل

ان شاء الله اكمل واتعلم اكتر واعمل حاجات اكبر

وهفتكر الرساله بإذن الله لما اكون حاجه كبيرة يارب

*/

// توكلت علي الله ولا حول ولا قوة إلا بالله 
  /*
  السطر رقم 1361 الف وثلثمية واحد وستين
  بإذن الله اكون حاجه كبيرة 
  
  ربنا يخليلي ابويا ويحفظهولي

  يارب ارزقني انا واهلي وكل من سعي وارزقني بشاشه اكبر واجعلني اكمل في هذا المجال الذي احببتني فيه واجعلني اكمل فيه بشيء كبير 

  */

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














void hbank(){





  

  cout<<" hello in my simple c++ atm!!(:"<<endl;





  
  
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

void oddeven(){


    int num;
    int choice;


  cout<<"enter your choice (1 : case numbers odd/even) , (2 : case numbers +/-/0/ø) (3 : to exit)"<<endl;
cin>>choice;

  while(true){


    

    switch(choice){

      case 1 :
        
cout<<"enter a number "<<endl;
    cin>>num;
    
      if(num!=0){


        if(num%2 == 0){

          cout<<"this number "<<num<<" is even"<<endl;
          cout<<"enter your choice (1 : case numbers odd/even) , (2 : case numbers +/-/0/ø) (3 : to exit)"<<endl;
cin>>choice;
        }

     else{

       cout<<"this number "<<num<<" is odd"<<endl;
       cout<<"enter your choice (1 : case numbers odd/even) , (2 : case numbers +/-/0/ø) (3 : to exit)"<<endl;
cin>>choice;
     }



        
        
      }


      else{

        cout<<"this number is 0"<<endl;
        cout<<"enter your choice (1 : case numbers odd/even) , (2 : case numbers +/-/0/ø) (3 : to exit)"<<endl;
cin>>choice;
      }
      
      break;
      case 2 : 
      cout<<"enter a number "<<endl;
      cin>>num;

      if(num>0){


        cout<<"this number "<<num<<" is positive "<<endl;
        cout<<"enter your choice (1 : case numbers odd/even) , (2 : case numbers +/-/0/ø) (3 : to exit)"<<endl;
cin>>choice;
      }


       else if(num == 0){


        cout<<"this number "<<num<<" is 0 "<<endl;
        cout<<"enter your choice (1 : case numbers odd/even) , (2 : case numbers +/-/0/ø) (3 : to exit)"<<endl;
cin>>choice;
        }


        else if(num<0){


        cout<<"this number "<<num<<" is negative "<<endl;
        cout<<"enter your choice (1 : case numbers odd/even) , (2 : case numbers +/-/0/ø) (3 : to exit)"<<endl;
cin>>choice;
        }

        

        
        
      break;




      case 3 :
      cout<<"exiting..."<<endl;
        
      return;
        
      break;
      
      default : 
        
      cout<<"invalid choice try again !"<<endl;
      cout<<"enter your choice (1 : case numbers odd/even) , (2 : case numbers +/-/0/ø) (3 : to exit)"<<endl;
cin>>choice;
        
      break;
      







      

      
    }



    





    
    

    
  }




  



  
}










int main(){





/*




استدعاء الفانكشنس كلهم 




*/



  
  funcfor();





  




  
  cabt();



  
  
  av();



  
  
  oddeven();


  

  fahretcel();



  
  hbank();



  
  
  bank();


  


  
  hcalc();



  
  calc();



  
  
  stringfunc();




  
  total();



  
  
  funcfavnum();



  
  
  service();


  

  
  gb();



  







  

  return 0;














  
  
  
}





















































































//2400 سطر
