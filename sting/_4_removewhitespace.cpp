// Remove the white space from sentence

#include<bits/stdc++.h>
using namespace std;
int main ()
    {
   string str;
    getline(cin,str);
   int i=0, len, j;
   len = str.length();
   for( i = 0; i < len; i++) {

    //we use first loop to check the string
      if (str[i] == ' ') {
         str.erase(str.begin() + i);
            i--;
         
      }
   }
   cout << str;
   return 0;
}



// #include <iostream>
// #include<string.h>
// using namespace std;
// void whitespace(string s)
// {
    
//     int n=s.length();
//     for(int i=0;i<n;i++){
//         if(s[i] ==  ' '){
//             for(int j=i;j<n;j++)
//             {
//                 s[j]='';
//                 n--;
//             }
//         }
//     }
//     for(int i=0;i<s.length();i++){
//         cout<<s[i];
//     }
// }
// int main()
// {
//     string s;
//     getline(cin,s);
//     whitespace(s);
//     return 0;
// }