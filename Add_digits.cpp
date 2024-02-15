#include<bits/stdc++.h>
using namespace std;
    int addDigits(int num) {
         while(num > 9) {
            int sum = 0;
            while(num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<addDigits(num);
    return 0;
}