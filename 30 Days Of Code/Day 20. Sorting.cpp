
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    
    int i, j, n, temp, c=0, s;
    cin>>n;
    int array[n];
    
    for (i = 0; i <n; i++) 
    {
        cin>>array[i];
    } 
    for (i = n-1; i >0; i--) 
    {
        s = 0;
    for (j = 0; j <i; j++) 
    {           
        if(array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            s++;
            c++;
        }
    }
    if (s == 0) 
    {
        break;
    }
    }   
    cout<<"Array is sorted in "<<c<<" swaps.\n";
    cout<<"First Element: "<<array[0]<<endl;
    cout<<"Last Element: "<<array[n-1]<<endl;
    return 0;
}
