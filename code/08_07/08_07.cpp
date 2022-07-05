#include <iostream>
#include <string>
using namespace std;

void chuanchu(string h){
    if (((int)h[0]) >= 97 && (((int)h[0]) <= 122)) //chữ thường
        cout << char((int)h[0] - 32); //chuyển thành chữ in hoa
    else
        cout << h[0];
    for (int i = 1; i < h.length(); i++){
        if (((int)h[i - 1] == 32) && (((int)h[i]) >= 97) && (((int)h[i]) <= 122)) //ký tự phía trước là khoảng cách
        {
            cout << char((int)h[i] - 32);//ký tự này in hoa
        }
        else{
            if (((int)h[i] <= 90) && ((int)h[i] >= 65) && ((int)h[i - 1] != 32) && ((int)h[i] != 32)) //ký tự là chữ in hoa và phía trước ko có khoảng cách
                cout << (char)(int)(h[i] + 32); //chuyển thành in thường
            else
                cout << h[i];
        }
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string h;
    for (int i = 0; i < n; i++){
        getline(cin, h);
        chuanchu(h);
    }
    return 0;
}
