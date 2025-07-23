#include<iostream>
#include<string>
using namespace std;
    string removeDuplicates(string s) {
        string temp = "";
        int i = 0;
        
        while (i < s.length()) {
            if (temp.empty() || s[i] != temp.back()) {
                temp.push_back(s[i]);
            } else {
                temp.pop_back();
            }
            i++;
        }
        
        return temp;
    }
    

int main()
{
    string name="";
    cin>> name;
    cout<< removeDuplicates(name);
    
}