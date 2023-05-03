#include <iostream>
#include <algorithm>
#include <vector>
#include "..\inoutlib\inout.h"
using namespace std;
int a;

int main() {
    vector<int> vec;
    read(vec);
    sort(vec.begin(), vec.end());
    print(vec);
    cout << endl << "Enter any symbol to close console" << endl;
    cin >> a;
    return 0;
}