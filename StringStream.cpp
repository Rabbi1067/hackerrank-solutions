#include <bits/stdc++.h>
using namespace std;
int main() {
   string str;
 cin >> str; 
    stringstream ss(str);
    vector<int> numbers;
    int num;
    char ch;
    
    while (ss >> num) {  
        numbers.push_back(num);
        ss >> ch;  
    }
    for (int n : numbers) {
        cout << n << endl; 
    }
    return 0;
}
