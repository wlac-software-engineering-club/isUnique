#include <iostream>
#include <string>
using namespace std;

bool isUnique(string x){
 bool flag = true;
 string cmpstring = "";
 int i = 0;

 while(flag && i < x.length()){
   char pos = x[i];
   for(int j = 0; j < cmpstring.length(); j++){
     if(pos == cmpstring[j]) {
       flag = false;
       break;
     }
   }
   cmpstring = cmpstring + pos;
   i++;
 }

 return flag;
}

int main() {
 cout << boolalpha << isUnique("dapos");
 return 0;
}