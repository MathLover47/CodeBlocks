#include<iostream>
using namespace std;
const int n = 14;
int *returnArray(const int );
int main()
{

    int *a;
    a = returnArray(n);
    //a = new int[4];
    for(int i=0; i < n; i++)
        cout << a[i] << endl;
    for(int j=0; j < n; j++)
        cout << *(a+j)<< " , ";
    return 0;
}
int *returnArray(const int m)
{
    int *b ;
    b = new int[m];
    for(int j=0; j < m; j++)
        *(b+j)= j;
    return &b[0]; // the address of first element in the array is the array itself b
}
