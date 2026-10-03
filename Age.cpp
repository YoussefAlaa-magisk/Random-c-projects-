#include <iostream>
using namespace std;





void age(){


int yyob;
  cout<<"Enter your year of birth = ";
  cin>>yyob;
  if(yyob>0 && yyob>1899 && yyob!=0){
  




  if(yyob>=1900 && yyob<2027) {

    cout<<"your age = "<<(2026-yyob)<<endl;
    
    if(yyob == 2026) {

      cout<<"new born"<<endl;
    }

    else if(yyob == 2025) {

      cout<<"you are toddler"<<endl;
    }

    else if(yyob == 2024) {

      cout<<"you are toddler"<<endl;
    }

    else if(yyob<=2023 && yyob>=2021) {

      cout<<"you are a preschooler"<<endl;
    }

    else if(yyob<=2020 && yyob>=2014) {

      cout<<"you are a child"<<endl;
    }



    else if(yyob == 2013) {

      cout<<"you are a young teenager"<<endl;
    }

    else if(yyob<=2012 && yyob>=2011) {


      cout<<" you are a teenager"<<endl;
    }


    else if(yyob<=2010 && yyob>=2009) {


      cout<<"you are a older teenager"<<endl;
    }

    else if(yyob<=2008 && yyob>=2002) {

      cout<<"you are a young adult"<<endl;
    }


    else if(yyob<=2001 && yyob>=1987) {

      cout<<"you are an adult"<<endl;
    }



    else if(yyob<=1986 && yyob>=1967) {


      cout<<"You are a middle-aged person"<<endl;
    }


    else if(yyob<=1966 && yyob>=1952) {

      cout<<"you are old"<<endl;
    }




    else if(yyob<=1951 && yyob>=1942) {




      cout<<"You are very old"<<endl;
    }



    else if(yyob<=1941) {

      cout<<"you are oldest old"<<endl;
    }


    
  }
  

  else {

    

    cout<<"this birth is invalid"<<endl;


    
  }

    
  }

  else{

    cout<<"try again you have 1 try only!"<<endl;
    cin>>yyob;
    while(true){

      if(yyob>0 && yyob>1899 && yyob!=0){
         




  if(yyob>=1900 && yyob<2027) {
    
cout<<"your age = "<<(2026-yyob)<<endl;
    
    if(yyob == 2026) {

      cout<<"new born"<<endl;
      return;
    }

    else if(yyob == 2025) {

      cout<<"you are toddler"<<endl;
      return;
    }

    else if(yyob == 2024) {

      cout<<"you are toddler"<<endl;
      return;
    }

    else if(yyob<=2023 && yyob>=2021) {

      cout<<"you are a preschooler"<<endl;
      return;
    }

    else if(yyob<=2020 && yyob>=2014) {

      cout<<"you are a child"<<endl;
      return;
    }



    else if(yyob == 2013) {

      cout<<"you are a young teenager"<<endl;
      return;
    }

    else if(yyob<=2012 && yyob>=2011) {


      cout<<" you are a teenager"<<endl;
      return;
    }


    else if(yyob<=2010 && yyob>=2009) {


      cout<<"you are a older teenager"<<endl;
      return;
    }

    else if(yyob<=2008 && yyob>=2002) {

      cout<<"you are a young adult"<<endl;
      return;
    }


    else if(yyob<=2001 && yyob>=1987) {

      cout<<"you are an adult"<<endl;
      return;
    }



    else if(yyob<=1986 && yyob>=1967) {


      cout<<"You are a middle-aged person"<<endl;
      return;
    }


    else if(yyob<=1966 && yyob>=1952) {

      cout<<"you are old"<<endl;
      return;
    }




    else if(yyob<=1951 && yyob>=1942) {




      cout<<"You are very old"<<endl;
      return;
    }



    else if(yyob<=1941) {

      cout<<"you are oldest old"<<endl;
      return;
    }


    
  }
  

  else {

    

    cout<<"this birth is invalid && 0 try "<<endl;


    return;
  }

    
  }

  else{

    cout<<"no you have 0try "<<endl;
return;

}
      }
    }
  }






void goodbye () {


  
  cout<<"goodbye !!\n";

  
  
}

int main(){



  age();
  goodbye();

  
  
}