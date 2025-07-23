#include<iostream>
using namespace std;
bool checkpalindrome(char name[], int n)
{
    int s=0;
    int e = n-1;
    while(s<=e){
    if(name[s]!=name[e]){
    return 0;
    }
    else{
        s++;
        e--;
    }
    }
    return 1;
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
    count++;
    }
    return count;
}
int main()
{
    char name[20];
    cin>> name ;
    cout << name <<endl;
    int length= getlength(name);
    cout<< length << endl;
    if (checkpalindrome(name,length)){
    cout<< "is palindrom";
    }
    else{
    cout << "not palindrome";
    }
}