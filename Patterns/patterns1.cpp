#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1; //for row
    while(i<=n){
        int j=1; //for column
        while(j<=n)
        {
        cout << "*";
        j++;
    }
    cout << endl;
    i++; 
}
}
