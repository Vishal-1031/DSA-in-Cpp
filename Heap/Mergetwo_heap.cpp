
void heapify(vector<int>& arr, int n, int i){
    int largest = i ;
    int leftChild = 2*i + 1;
    int rightChild = 2*i + 2;
    
    if (leftChild < n && arr[largest] < arr[leftChild]){
        largest = leftChild;
    }
        
        if (rightChild < n && arr[largest] < arr[rightChild]){
        largest = rightChild;
    }
      if(largest != i){
          swap(arr[largest], arr[i]);
          heapify(arr,n,largest);
      }  
    }
class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        
        vector<int> ans;
        for(auto k : a)
        ans.push_back(k);
        
        for(auto l:b)
        ans.push_back(l);
        
        
        int size = ans.size();
        for(int x = size/2 - 1  ; x >=0 ; x--){
            heapify(ans, size, x);
        }
        
        return ans;
        
    }
};


