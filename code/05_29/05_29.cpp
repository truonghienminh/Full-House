#include <iostream>
#include <string>
using namespace std;

struct number{
    int val;
    int fre;
};

bool check(int n){
    while (n >= 10){
        int r = n % 10;
        if (r < (n/10)%10)
            return false;
        n /= 10;
    }
    return true;
}

int find(number a[], int n, int x){
    for (int i = 0; i < n; i++){
        if (a[i].val == x)
            return i;
    }
    return -1;
}

int cmp(const void *a, const void *b){
    number *x = (number *)a;
    number *y = (number *)b;
    return y->fre - x->fre;
}

int main(){
    number a[100000];
    int n = 0;
    int x;
    while ((cin >> x)){
        if (check(x)){
            int idx = find(a, n, x);
            if (idx != -1)
                a[idx].fre++;
            else{
                a[n].val = x;
                a[n].fre = 1;
                n++;
            }
        }
    }
    qsort(a, n, sizeof(number), cmp);
    for (int i = 0; i < n; i++){
        cout << a[i].val << " " << a[i].fre << endl;
    }
    return 0;
}