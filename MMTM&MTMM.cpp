#include <iostream>
#include <string>



using namespace std;





void hconv(){


  cout<<"welcome in my simple converter between : (millimeters && meters) by youssef alaa (me)"<<endl<<endl;

  
}
void conv(){



  double mm;
  double m;
  int choice;
  int onet=1000;




  
  string wh="enter your choice (1 : convert meters to millimeters) (2 : convert millimeters to meters) (3 : love) (4 : exit) ";


  string mtmm="enter value of meters to convert it to millimeters";

  
  string mmtm="enter value of millimeters to convert it to meters";


  string r="exiting....";


  string love="i hate you";


cout<<wh<<endl;
  cin>>choice;

  while(true){




    switch(choice){





      case 1:
        cout<<mtmm<<endl;
        cin>>m;
        cout<<m<<"m after converting to millimeters = "<<(m*onet)<<"mm"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      
      case 2 :
        cout<<mmtm<<endl;
        cin>>mm;
        cout<<mm<<"mm after converting to meters = "<<(mm/onet)<<"m"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      
      case 3 :
        cout<<love<<endl;
        cout<<r<<endl;
        return;
        
      break;
      
      case 4 :
        cout<<r<<endl;
        return;
        
      break;

      default :
        cout<<"invalid choice try again (: !"<<endl;
        cout<<wh<<endl;
        cin>>choice;
        
        
      break;

      
    }


    
  }
  
}




int main(){




  hconv();
  conv();




  return 0;



  
}
