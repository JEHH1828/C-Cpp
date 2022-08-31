#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main()
{
   

    cout << ("Ingresa el la hora en cualquier formato ") << endl; 
 
  
 
  
   int h, m;



    cout << ("Hora "); 
    cin>>h;
    cout << ("Minutos "); 
    cin >> m;



    if(h==0&&h!=12){
    h=12; 
    printf("%.2d:%.2d AM\n",h,m);
    }
    else if(h==12&&h!=0){
    h=12; 
    printf("%.2d:%.2d PM\n",h,m);
     }
    else if(h<12&&h!=0){
    h=h;
    m=m; 
    printf("%.2d:%.2d AM\n",h,m);
    }
    else if(h>12&&h!=0)
    { 
    h=h-12; 
    m=m; 
    printf("%.2d:%.2d PM\n",h,m);
    }



    return 0;
}
