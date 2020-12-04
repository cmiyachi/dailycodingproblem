#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> products(vector<int> n);

int main() {
    cout << "hello " << endl;
     vector<int> ns;
     for (int i = 0; i < 5; i++)
         ns.push_back(i+1);
    vector<int> rs = products(ns);
    cout << rs.size() << endl;
    for (int i = 0; i < rs.size(); i++)
        cout << rs[i] << " ";
    cout << endl;
    return 0;
};
