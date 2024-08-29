#include <iostream>
#include <string>
using namespace std;

bool isNumeric(string beginSocial) {
   for (int i = 0; i < beginSocial.length(); i++)
      if (isdigit(beginSocial[i]) == false)
         return false; 
      return true;
}

int main(){
    string beginSocial;
    string endSocial;
    
    cout << "Please enter 9 digit social security number: " << endl;
    cin >> beginSocial;


    if (beginSocial.length() == 9){
        if (isNumeric(beginSocial) == true){
            cout << "Your social security number is: " << beginSocial.insert(5, "-").insert(3, "-");
        }
        else
        {
        cout << "character error" << endl; 
        }
    }
    else
    {
        if(beginSocial.length() != 9)
        {
            cout << "length error" << endl;
        }
    }
        
    return 0;
}

    
    