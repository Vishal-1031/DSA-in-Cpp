#include<iostream>
using namespace std;

int checkKey(string& str , int i, int& n , char& key){
    //base case 
    if(i >= n){
        return 0;
    }
    // 1 case solve kro 
    // if(str[i] ==  key)       FOR ONLY FINDING YES OR NO 
    // return true;
   // baki recursion sambhal lega 

                        // FOR THE CHARACTERS FIRST OCURRANCE INDEX
    // if(str[i]== key)         
    // return i;

                        // FOR ALL INDEXES OF THE CHRTACTERS 

    if(str[i] == key)
    cout << i << " ";                

    return checkKey(str,i+1,n,key);
}

int main(){
    string str = "love babber";
    int n = str.length();
    char key ;
    cin >> key;
    int i = 0;
    checkKey(str,i,n,key);
    

    return 0;
}