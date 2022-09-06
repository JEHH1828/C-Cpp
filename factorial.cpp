#include <iostream>
#include <string>
#include<string.h>
using namespace std;
/*
|---------------------------|
|---------1CM12-------------|
|---------------------------|
Fundamentos de programacion |
|---------------------------|
Bryan Garcia Vega-----------|
|---------------------------|
Jose Emilio Hernandez Huerta|
|---------------------------|
Denisse Gonzales Rodriguez  |
|---------------------------|
*/

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}


int main()
{
   long factorial = 1.0;
  

   string str;

  cout<<("Ingresa el numero que quieras el factorial \n");
  cin>>str;
  

/*


  bool flag = false;
  for (int i = 0; i < a.size; i++)
  {
    flag += ((a[i] - "0")<0 || (a[i] - "0")>9);
  }

*/



  int n = stoi(str);


if (isNumber(str)){
   for(int i = 1; i <= n; ++i) {
  factorial *= i;}
  cout << "El factorial de " << n << " es " << factorial;
}

else {
  cout << "Error";
} 

return 0;
}