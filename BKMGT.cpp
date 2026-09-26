#include <iostream>




#include <string>




#include <cmath>// اول مرة استخدم مكتبة cmath من احسن مكاتب c++ بنسبالي


using namespace std;



void hbkmgt(){



  cout<<"hello in my simple converter by youssef alaa (ME) mb/kb/b/tb/gb"<<endl;


  
}


void bkmgt(){


  int choice;
  int onet=1024;
  double rt=pow(1024, 2);
  double rth=pow(1024, 3);
  double rfou=pow(1024, 4);
  double b;
  double k;
  double m;
  double g;
  double t;
  string wh="enter your choice (1 : convert byte to kelobyte) (2 : convert byte to megabyte) (3 : convert byte to gigabyte) (4 : convert byte to terabyte) (5 : convert kelobyte to byte) (6 : convert kelobyte to megabyte) (7 : convert kelobyte to gigabyte) (8 : convert kelobyte to terabyte) (9 : convert megabyte to byte) (10 : convert megabyte to kelobyte) (11 : convert megabyte to gigabyte) (12 : convert megabyte to terabyte) (13 : convert gigabyte to byte ) (14 : convert gigabyte to kelobyte) (15 : convert gigabyte to megabyte) (16 : convert gigabyte to terabyte) (17 : convert terabyte to byte) (18 : convert terabyte to kelobyte) (19 : convert terabyte to megabyte) (20 : convert terabyte to gigabyte) (21 : to gave you love) (22 : exit)";

  string btk="enter value of byte to convert it to kelobyte (kb)";
  
  string btm="enter value of byte to convert it to megabyte (mb)";

  string btg="enter value of byte to convert it to Gigabyte (GB)";

  string btt="enter value of byte to convert it to Terabyte (Tb)";

  string ktb="enter value of kelobyte to convert it to byte (B)";

  string ktm="enter value of kelobyte to convert it to megabyte (mb)";

  string ktg="enter value of kelobyte to convert it to Gigabyte (GB)";

  string ktt="enter value of kelobyte to convert it to terabyte (Tb)";

  string mtb="enter value of megabyte to convert it to byte (B)";

  string mtk="enter value of megabyte to convert it to kelobyte (kb)";

  string mtg="enter value of megabyte to convert it to Gigabyte (GB)";

  string mtt="enter value of megabyte to convert it to terabyte (Tb)";

  string gtb="enter value of Gigabyte to convert it to byte (B)";

  string gtk="enter value of Gigabyte to convert it to kelobyte (kb)";

  string gtm="enter value of Gigabyte to convert it to megabyte (mb)";

  string gtt="enter value of Gigabyte to convert it to terabyte (Tb)";

  string ttb="enter value of terabyte to convert it to byte (B)";

  string ttk="enter value of terabyte to convert it to kelobyte (kb)";

  string ttm="enter value of terabyte to convert it to megabyte (mb)";

  string ttg="enter value of terabyte to convert it to Gigabyte (GB)";

  string hate="I hate you";

  string r="exiting... ";

  cout<<wh<<endl;
  
  cin>>choice;



  while(true){







    switch(choice){



      case 1 :
        cout<<btk<<endl;
        cin>>b;
        cout<<b<<"b after converting to kelobyte = "<<(b/onet)<<"kb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 2 :
        cout<<btm<<endl;
        cin>>b;
        cout<<b<<"b after converting to megabyte = "<<(b/rt)<<"mb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 3 :
                cout<<btg<<endl;
        cin>>b;
        cout<<b<<"b after converting to gigabyte = "<<(b/rth)<<"GB"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 4 : 
                cout<<btt<<endl;
        cin>>b;
        cout<<b<<"b after converting to terabyte = "<<(b/rfou)<<"Tb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 5 :
                cout<<ktb<<endl;
        cin>>k;
        cout<<k<<"kb after converting to byte = "<<(k*onet)<<"B"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 6 :
        cout<<ktm<<endl;
        cin>>k;
        cout<<k<<"kb after converting to megabyte = "<<(k/onet)<<"mb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 7 : 
        cout<<ktg<<endl;
        cin>>k;
        cout<<k<<"kb after converting to Gigabyte = "<<(k/rt)<<"GB"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 8 :
        cout<<ktt<<endl;
        cin>>k;
        cout<<k<<"kb after converting to terabyte = "<<(k/rth)<<"Tb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 9 : 
        cout<<mtb<<endl;
        cin>>m;
        cout<<m<<"mb after converting to byte = "<<(m*rt)<<"B"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 10 :
        cout<<mtk<<endl;
        cin>>m;
        cout<<m<<"mb after converting to kelobyte = "<<(m*onet)<<"kb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 11 :
        cout<<mtg<<endl;
        cin>>m;
        cout<<m<<"mb after converting to Gigabyte = "<<(m/onet)<<"GB"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 12 :
        cout<<mtt<<endl;
        cin>>m;
        cout<<m<<"mb after converting to terabyte = "<<(m/rt)<<"Tb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 13 :
        cout<<gtb<<endl;
        cin>>g;
        cout<<g<<"GB after converting to byte = "<<(g*rth)<<"B"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 14 :
        cout<<gtk<<endl;
        cin>>g;
        cout<<g<<"GB after converting to kelobyte = "<<(g*rt)<<"kb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 15 :
        cout<<gtm<<endl;
        cin>>g;
        cout<<g<<"GB after converting to megabyte = "<<(g*onet)<<"mb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 16 :
        cout<<gtt<<endl;
        cin>>g;
        cout<<g<<"GB after converting to terabyte = "<<(g/onet)<<"Tb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 17 :
        cout<<ttb<<endl;
        cin>>t;
        cout<<t<<"Tb after converting to byte = "<<(t*rfou)<<"B"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 18 :
        cout<<ttk<<endl;
        cin>>t;
        cout<<t<<"Tb after converting to kelobyte = "<<(t*rth)<<"kb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 19 : 
        cout<<ttm<<endl;
        cin>>t;
        cout<<t<<"Tb after converting to megabyte = "<<(t*rt)<<"mb"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 20 :
        cout<<ttg<<endl;
        cin>>t;
        cout<<t<<"Tb after converting to Gigabyte = "<<(t*onet)<<"GB"<<endl;
        cout<<wh<<endl;
        cin>>choice;
      break;
      case 21 :
        cout<<hate<<endl;
        return;
      break;
      case 22 :
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



  hbkmgt();


  
  bkmgt();


  
  return 0;


  
}




