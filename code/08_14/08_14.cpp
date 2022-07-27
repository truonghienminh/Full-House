#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    stringstream ss(s);
    vector<string> v;
    string temp;
    while (ss >> temp){
        v.push_back(temp);
    }
    int max = 0, idx;
    for (int i = 0; i < v.size(); i++){
        int count = 1;
        for (int j = i + 1; j < v.size(); j++){
            if (v[i] == v[j])
                count++;
        }
        if (count > max){
            max = count;
            idx = i;
        }
        else if (count == max){
            if (v[idx] > v[i])
                idx = i;
        }
    }
    cout << v[idx] << " " << max;
    return 0;
}