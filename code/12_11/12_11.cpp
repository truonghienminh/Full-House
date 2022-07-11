#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> numbers(n);
    vector<int> pos(n);
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
        numbers[i]--;
        pos[numbers[i]] = i;
    }
    int passes = 1;
    for (int i = 1; i < n; i++){
        if (pos[i] < pos[i-1])
            passes++;
    }
    cout << passes;
    return 0;
}