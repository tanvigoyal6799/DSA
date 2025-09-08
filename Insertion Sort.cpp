class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for (int i = 1; i < n; i++) {
        int plus = arr[i]; 
        int j = i - 1;

        
        while (j >= 0 && arr[j] > plus) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = plus;
    }
         }
};
