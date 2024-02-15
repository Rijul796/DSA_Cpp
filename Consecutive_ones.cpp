#include <bits/stdc++.h>
using namespace std;
//same as fibonnaci
//bits placing in a given number of bits condition is that we can't place two 1s at one after another
int methods(int n)
{
    if(n==0){
        return 1; //0 bit can be placed in one way
    }
    if(n==1){
        return 2; //if n is one we can place two bits 0 and 1 at one place
    }
    return methods(n-1)+methods(n-2); 
}

int main(){
    int n;
    cout<<"Enter the numbers : ";
    cin>>n;
    cout<<methods(n);
}


/*
#include<iostream>
using namespace std;

int print_tiles(int n)
{
    if(n<=3)
    {
        return 1;
    }

    return print_tiles(n-1) + print_tiles(n-4);
}

int main()
{
    int n;
    cout<<"Enter the number of tiles : ";
    cin>>n;

    cout<<"Number of arrangements : "<< print_tiles(n);

    return 0;
}*/
