#include <iostream>
#include <string>
using namespace std;

int main() 
{
 string a,b;
 cin>>a;
 cin>>b;
 int l1=a.size();
 int l2=b.size();
 cout<<l1<<" "<<l2<<endl;
 cout<<a<<b<<endl;

 char c;
 c=a[0];
 a[0]=b[0];
 b[0]=c;
 cout<<a<<" "<<b;
  
    return 0;
}
