#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun(int n,int A,int B,int C)
{
    if (n==0){
        return;
    }
    fun(n-1,A,C,B); // Moving Rods From A to B using C
    cout<<"Move Rod From "<<A<<" To " <<C<<endl;
    fun(n-1,B,A,C); // Moving Rods From B to C using A

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    int A=1;
    int B=2;
    int C=3;
    
    fun(n,A,B,C);// find ways to move n rods from A to C using B

return 0;
}
