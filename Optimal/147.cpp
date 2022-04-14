#include <iostream>
using namespace std;
int max(int x1=-2147483648,int x2=-2147483648,int x3=-2147483648,int x4=-2147483648,int x5=-2147483648,int x6=-2147483648,
		int x7=-2147483648,int x8=-2147483648,int x9=-2147483648,int x10=-2147483648,int x11=-2147483648,int x12=-2147483648)
{   int arr1[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12};
	int max1 = x1;
	for(int i =1; i < 12; i++)
    {
        if(arr1[i]== -2147483648)
            break;
        else
            if (arr1[i] > max1)
			max1 = arr1[i];
    }

	return max1;
}
int min(int x1=2147483647,int x2=2147483647,int x3=2147483647,int x4=2147483647,int x5=2147483647,int x6=2147483647,
		int x7=2147483647,int x8=2147483647,int x9=2147483647,int x10=2147483647,int x11=2147483647,int x12=2147483647)
{   int arr1[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12};
	int min1 = x1;
	for(int i =1; i < 12; i++)
    {
if (arr1[i] == 2147483647)
    break;
     else if (arr1[i]< min1)
			min1 = arr1[i];
    }

	return min1;
}
int main() {
	cout << "max(-99,-98,-44)=" << max(-99,-98,-44) << endl;
	cout << "min(3.4,4.02,6.32,7,8,3.1,3.001)=" << min(3.4,4.02,6.32,7,8,3.1,3.001) << endl;
	return 0;
}
