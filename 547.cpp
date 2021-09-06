#include<iostream>
using namespace std;
//this program is for making array of arrays together applicable to 98 version of C++ or later
int main()
{
// declaring 9 pointers
int a1[] = {1};
int a2[] = {1,2};
int a3[] = {1,2,3};
int a4[] = {1,2,3,4};
int a5[] = {1,2,3,4,5};
int a6[] = {1,2,3,4,5,6};
int a7[] = {1,2,3,4,5,6,7};
int a8[] = {1,2,3,4,5,6,7,8};
int *a[] = {a1,a2,a3,a4,a5,a6,a7,a8}; // array of pointers each one is array of integers change int of all to any type.
for(int i =0; i < 8; i++)
{
    cout << endl;
    for(int j = 0; j <= i; j++)
        cout << a[i][j];
}
for(int i =0; i < 8; i++) // pinter arithmetic for multi dimensional array
{
    cout << endl;
    for(int j = 0; j <= i; j++)
        cout << *(*(a+i)+j);
}


return 0;

}
