#include <iostream>
#define s1 2
#define s2 2

using namespace std;

void fastestWay(int a[][s1], int t[][s2], int e[], int x[], int n) {
    int f1[n], f2[n], f;

    f1[0] = e[0] + a[0][0];
    f2[1] = e[1] + a[1][0];
    
    for( int j = 1; j < n; j++){
        if(f1[j - 1] + a[0][j] <= f2[j - 1] + t[1][j - 1] + a[0][j]) f1[j] = f1[j - 1] + a[0][j];
        else f1[j] = f2[j - 1] + t[1][j - 1] + a[0][j];

        if(f2[j - 1] + a[1][j] <= f1[j - 1] + t[0][j - 1] + a[1][j]) f2[j] = f2[j - 1] + a[1][j];
        else f2[j] = f1[j - 1] + t[0][j - 1] + a[1][j];
    }
    
    if(f1[n - 1] + x[0] <= f2[n - 1] + x[1]) f = f1[n - 1] + x[0];
    else f = f2[n - 1] + x[1];
}


int main()
{
    return 0;
}
