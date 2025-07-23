#include<iostream>
#include<queue>
using namespace std;
// QUES : First non repeating elemenet 
int main (){
// note 1 : mujhe elements ka track rakhna hai ki koan sa element repeat ho raha hai aur koan sa element repeat nhi horaha hai.
string str = "aabc";
int freq[26] = {0}; // freq arr banaya hai mapping krne ke liye  
queue<int> q ;

string ans = "";

for(int i = 0;i<str.length(); i++){
    char ch = str[i];
    freq[ch - 'a']++;
    //q.push
    q.push(ch);

    while (!q.empty()){
        if(freq[q.front()- 'a'] > 1){
            q.pop();
        }
        else {
            ans.push_back(q.front()); // non repeating element
            break; // jab hame ek ans mil jata hai to hme aage ke ans ko check krne ki need nhi hoti  hai 
        }
    }
    if(q.empty()) { // queue empty hogayi yaani ki koi  qanser mila hi nahi hamlog ko 
        ans.push_back('#');
    }
}
cout << "Final Answer : " << ans << endl;
}
// TC : 