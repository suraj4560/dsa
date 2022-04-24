//12 hour format to 24 hour format 
#include<iostream>
#include<string>
using namespace std;
string timeconversion(string s){
    string two=s.substr(0,2);
    int value =stoi(two);
    if (s[8]=='P' && two !="12"){
        value =value +12;
        two=to_string(value);
        return two+s.substr(2,6);
    }
    if (s[8]=='A' && two!="12"){
        return s.substr(0,8);
    }
    if (s[8]=='A'&& two =="12"){
        two ="00";
        return two + s.substr(2,6);
    }
    return s.substr(0,8);
    
}
int main(){
    string s="12:45:54PM";
    string ans=timeconversion(s);
    cout<<ans;
    
return 0;
}
