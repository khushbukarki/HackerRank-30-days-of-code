#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i2;
    double d2;
    string s2;

    // Read and save an integer, double, and string
    cin >> i2;
    cin >> d2;
    cin.ignore(); // clear newline left in the buffer
    getline(cin, s2);

    // Print results
    cout << i + i2 << endl;
    printf("%.1f\n", d + d2);
    cout << s + s2 << endl;
  
    return 0;
}
