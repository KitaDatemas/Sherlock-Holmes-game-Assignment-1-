#include <bits/stdc++.h>
using namespace std;

int main(int nargs, char **args){
    vector<int> v{4, 1, 3, 5, 2, 3, 1, 7};
    for (auto i = v.begin(); [](){return i[0] > 4;} && i != v.end(); i++){
        cout << i[0] << " is not greater than 4\n";
    }
    return 0;
}