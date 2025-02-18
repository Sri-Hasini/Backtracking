//https://takeuforward.org/recursion/print-1-to-n-using-recursion/
#include <bits/stdc++.h>
using namespace std;
void fun(int i , int n) {
    //backtracking
    if (i < 1) return;
    fun(i - 1, n);
    cout << i << " ";
}
int main() {
    int n;
    cin >> n;
    fun(n, n);
}
