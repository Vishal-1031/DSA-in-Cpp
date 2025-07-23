#include <iostream>
#include <vector>
using namespace std;

void sortRiskLevels(vector<int>& riskLevels) {
    // Write your logic here
    int z =0, o = 0, t = 0;
    for(auto a : riskLevels){
        if(a == 0){
            z += 1;
        }
        else if(a == 1){
            o += 1;
        }
        else {
            t += 1;
        }
    }
    riskLevels.clear();
    for(int i = 0 ; i < z; i++){
        riskLevels.push_back(0);
    }
    for(int i = 0 ; i < o; i++){
        riskLevels.push_back(1);
    }
    for(int i = 0 ; i < t; i++){
        riskLevels.push_back(2);
    }
}

int main() {
    vector<int> riskLevels = {2, 0, 1, 2, 1, 0};
    sortRiskLevels(riskLevels);
    
    for (int r : riskLevels) {
        cout << r << " ";
    }
    cout << endl;
    return 0;
}
