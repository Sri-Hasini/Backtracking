//https://takeuforward.org/data-structure/sum-of-first-n-natural-numbers/
//https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  int cnt = 1, sum = 0;
    int sumOfSeries(int n) {
        if (cnt > n) return 0;
        sum = (cnt*cnt*cnt);
        cnt++;
        return sum + sumOfSeries(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
