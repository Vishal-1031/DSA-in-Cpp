#include<iostream>
#include<unordered_map>
using namespace std;

int main (){
    // creation of the map 
    unordered_map<string,int> m ;

    // insertion 
    // method 1
    pair<string,int> p = make_pair("Scorpio", 9);
    m.insert(p);
    // method 2
    pair<string,int> p2("Thar", 8);
    m.insert(p2);
    //method 3 
    m["Fortuner"] = 10;

    // Access
    cout << m.at("Scorpio") << endl; // output -> 9
     //cout << m.at("scorpio") << endl; ----> case sensetive hai bahiyaa !!
    cout << m.at("Fortuner") << endl; // at.() throws an error if the element does not exists 
    // method 2 for access output -> 10
    cout << m["Thar"] << endl;
    // Method 2 is good to follow output -> 8

    // Now finding a particular element in the map 
    // method 1 use cout() function 
    cout << m.count("Scorpio") << endl; // Count function ke aadhar pe ham bata sakte hai ki koi particular key exisist krti hai ki nhi the answer would be 1 since it is present
    cout << m.count("Alto") << endl; // the answer would be 0 since it is not present

    // method 2 
        if(m.find("Fortuner") != m.end()){// agr fortuner ko find krte krte aap map ke end pe nhi pahuche iska mtlb ki 
            cout << "Fortuner found"<< endl;
        }
        else{
            cout<< "Fortuner not found " << endl;
        }


}