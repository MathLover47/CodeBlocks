#include<iostream>
using namespace std;
int *returnFunction();


int main()
{

    int othermethod(int,int) = returnFunction();
    cout << othermethod(13,15) << endl;
    return 0;
}
int *returnFunction()
{
    int Max(int x,int y)
    {
        if(x>y)
            return x;
        else return y;
    }
    return Max;
};
