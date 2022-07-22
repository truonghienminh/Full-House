#include <iostream>
#include <cstring>
using namespace std;

int ktra(char c[]){
    for (int i = 0; i < strlen(c); i++){
        if (!isupper(c[i]))
            return 0;
    }
    return 1;
}

int main(){
    char c[1001];
    gets(c);
    char *token = strtok(c, " ");
    while (token != NULL){
        if (ktra(token) == 1)
            cout << token << " ";
        token = strtok(NULL, " ");
    }
    return 0;
}