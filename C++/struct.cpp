#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
int age,standard;
string fname,lname;
};

int main() {
    Student st;
    
    cin >> st.age >> st.fname >> st.lname >> st.standard;
    cout << st.age << " " << st.fname << " " << st.lname << " " << st.standard;
    
    return 0;
}
