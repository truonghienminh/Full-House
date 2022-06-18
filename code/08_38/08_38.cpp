#include <iostream>
#include <iomanip>
using namespace std;

char de101[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
char de102[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

double solve_101(char arr[]){
    double count = 0;
    for (int i = 0; i < 15; i++){
        if (arr[i] == de101[i])
            count++;
    }
    return (count/15)*10;
}

double solve_102(char arr[]){
    double count = 0;
    for (int i = 0; i < 15; i++){
        if (arr[i] == de102[i])
            count++;
    }
    return (count/15)*10;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int code;
        cin >> code;
        char arr[15];
        for (int i = 0; i < 15; i++){
            cin >> arr[i];
        }
        if (code == 101)
            cout << fixed << setprecision(2) << solve_101(arr) << endl;
        else
            cout << fixed << setprecision(2) << solve_102(arr) << endl;
    }
    return 0;
}
