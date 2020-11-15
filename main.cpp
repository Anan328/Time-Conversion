#include <iostream>
#include <string>
using namespace std;

string t(){
    string str="12:45:54PM";
    string newT="        ";
    int h1 = (int)str[0]-'0';
    int h2 = (int)str[1]-'0';
    int hh = h1*10+h2%12;
    if(str[8]=='A'){
        if(hh==12){
            newT[0]='0';
            newT[1]='0';
            for(int i=2;i<=7;i++){
                newT[i] = str[i];
            }
        }else{
            for(int i=0;i<=7;i++){
                newT[i] = str[i];
            }
        }
    }else{
           if(hh==12){
            for(int i=0;i<=7;i++){
                newT[i] = str[i];
            }
           }else{
        hh+=12;
        string temp = to_string(hh);
        newT[0] = temp[0];
        newT[1] = temp[1];
        for(int i=2;i<=7;i++){
                newT[i] = str[i];
            }
            }
    }
    return newT;

}

int main()
{

    cout<<t();

    return 0;
}
