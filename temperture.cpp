#include <iostream>
#include <string>
using namespace std;
//ask the user if they want to convert from celsius to fahrenheit or from fahrenheit to celsius. then proceeds to select the appropriate one, ask for the users start temp
//and then do the conversion.
//lastly, it should display the start temp and the converted temp in an easy to read format ("Celsius temperature was ___ and it converted to ___ degrees fahrenheit")
//the forumlas for these conversions is: 

//Celsius: (F - 32) * 5/9 = C
//Fahrenheit: (C * 9/5) + 32 = F

//variables
float oriTemp;
float finalTemp;

string userChoice;


int main(){
   
        cout << "Press C to convert F to C, press F to convert C to F" << endl;
        cin >> userChoice;
    
        cout << "Enter the temperature you would like to convert to " << userChoice << endl;
        cin >> oriTemp;
        if (userChoice == "F"){
            finalTemp = (oriTemp * 9 / 5) + 32;
            cout << "Celsius temperature was " << oriTemp;
            cout << " and it converted to " << finalTemp << endl;
        }else{
        
            finalTemp = (oriTemp - 32) * 5 / 9;
            cout << "Fahrenheit temperature was " << oriTemp;
            cout << " and it converted to " << finalTemp << endl;
        }
            
    return 0;
}