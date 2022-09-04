#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main()
{
    int n;
    long factorial = 1.0;

    cout << "Ingresa el numero para su factorial: ";
    cin >> n;

    if (n < 0){
       
        cout << "Error! Factorial of a negative number doesn't exist.";
    }

    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "El factorial de " << n << " es " << factorial; 
        
          
    }

    
 
    return 0;
}