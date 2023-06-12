#include<iostream>
 using namespace std;

 int main()
 {
    int a[5];

    a[0] = 5;
    a[1] = 15;
    a[2] = 25;
    
    cout<<sizeof(a)<<" bytes"<<endl;
    cout<<a[1]<<"\n";

    return 0;
 }