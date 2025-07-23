#include<iostream>
#include<string>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else {
        return ('a'+ch-'A');
    }
}
int main(){
    string st ="BabbAB";
    string st1 = "";
    for(int i=0;i<st.length();i++)
    {
        st1=st1+toLowerCase(st[i]);
    }
    int s = 0;
    int c=0;
    int e = st1.length()-1;
    while(s < e){
        if(st1[s]==st1[e]){
        s++;
        e--;
        }
        else {
         c++;
        cout<< "The string is not Palindrom\n";
        break;
        }
        }
    if(c==0)
    cout << "The word is palindrom" << endl;
}