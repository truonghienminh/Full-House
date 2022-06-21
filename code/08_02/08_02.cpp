#include <iostream>
#include <string>
using namespace std;

int WordCount(string str, int length){
    int word = (str[0] != ' ');
    for (int i = 0; i < length - 1; i++){
        if (str[i] == ' ' && str[i + 1] != ' ')
            word++;
    }
    return word;
}

int main(){
    string s;
    getline(cin, s);
    cout << WordCount(s, s.length());
    return 0;
}
