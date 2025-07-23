#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "10";
    string p = "20";
    string t = s+p;
    cout << t<< endl<< "Printing the 2nd index value of t"<< endl;
    cout << t[2]<< endl;;
    cout <<"The size of 10+20 is "<< endl;
    cout<< t.size()<< endl;
    t.push_back('V');// add s at last
    cout << t<< endl;;
    t.pop_back();
    cout << t<< endl;
    // Sorting of a String 
    string v= "Vishal";// sort by ascii values 
    string f= "My Name Is Vishal";
    cout<< "The strings will be sorted according to the ascii values"<< endl;
    sort(v.begin(),v.end());
    sort(f.begin(),f.end());
    cout << v<< endl;
    cout<< f << endl;
    cout << "Moving on to inputing strings"<< endl;
    /*string str;
    cin>> str;// if you input space,enter or tab then input will be terminated
    cout<< str<< endl;
    string str2;
    getline(cin,str2);// can enter sentences 
    cout<< str2<< endl;*/
    cout<< "Use of \\ in string"<< endl;
    string str3= "Vishal is a \"smart\" boy" ;// \ is used to ignore the next character and print as written 
    cout<< str3<< endl;
    // Comparision between two strings
    //the compare() operator gives zero for same, >0 if str4>str5 and <0 is str4<str5.
    string str4 ="Vishal";
    string str5 = "Vishal";
    string str6 = "Vishalchaubey";
    string z= "My Name Is Vishal";
    cout << "The comparision between str4 and str5 \n"<< str4.compare(str5)<< endl;
    cout << "The comparision between str4 and str6 \n"<< str6.compare(str4)<< endl;
    cout << "The comparision between z and str5 \n"<< z.compare(str5)<< endl;// here the answer is less than 0 since unicode of characters are checked char by char 
    cout<<"Another method is to use \"==\" operator" << endl;
    if(str4==str5)
    cout<< "yes";
        else
    cout<<"no"; 
cout << endl; 
cout << "Finding a character or string \n";
int index = str4.find('al');// Directly gives the position of the character 
// if you type a word then it will give the starting index of the first letter in your substring which is in the word
cout << index << endl;
cout<< "Substring generating function \n" ;
cout<< str4.substr(2,5) << endl;// this function generats a new string from a string you have to provide the start and end parameters from where to where you have to cut the string 
cout <<"Inser() function\n ";
//The insert() function not only allows us to add a string but also allows us to add it at the specified position. It is also a member function of the std::string class
string v1 ="My name is Vishal Chaubey";
cout <<v1.insert(18,"Kumar ") << endl;
cout << "Use of replace() function" << endl;
cout << v1.replace(11,6,"Vivek") << endl;
// in replace() function 1st parameter is the index from where we have to start replacing 
// 2nd para is the length of the string we have to replace 
// 3rd is the string which we have to replace   
cout << "The string v1 is \n"<< v1 << endl;
// we can use size() or length() both are same 
cout << "The size of the string v1 is " << v1.size() << endl;

cout << "Erase() function "<< endl;
// The erase() function is a member function of std::string class that is used to remove a character or a part of the string.
/*str1.erase(start, end);
Parameters

start: Starting position.
end: Length of the string to be deleted */
string h = "HOD Chutiya nahi hai !!";
cout <<h.erase(12,5)<< endl;

return 0;
}