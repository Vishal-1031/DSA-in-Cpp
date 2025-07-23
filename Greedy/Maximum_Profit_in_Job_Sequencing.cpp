int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit, int size) {
        vector<vector<int>> v;
        for(int i = 0; i < size ; i++){
            v[i].push_back(startTime[i]);
            v[i].push_back(endTime[i]);
            v[i].push_back(profit[i]);
        }
        for(int i =0; i < size; i++){
            cout << "{ " ;
            for(int j = 0 ; j < 3; j++){
                cout  << v[i][j] << ", " ;
            }
            cout << "}   " ;
        }
}

sort(jobs.begin(), jobs.ends(), [](Job& a, Jobs& b){
    return a.profit > b.profit;
});
[](Jobs& a, Jobs& b, [](Job& a, Job& b){
    return a.profit > b.profit;
});