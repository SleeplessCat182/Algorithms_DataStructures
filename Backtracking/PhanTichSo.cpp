#include <iostream>
#include <string>
#define MAX 30

using namespace std;

void Print(int x[],int i,int n)
{
    cout << n << "=";
    for(int j=1;j<i;j++)
    {
        cout <<x[j] << "+";
    }
    cout << x[i];
    cout << endl;
}

void Try(int x[],int t[],int i,int n)
{
    for(int j = x[i-1];j<=((n-t[i-1])/2);j++)
    {
        x[i] = j;
        t[i] = t[i-1] + j;
        Try(x,t,i+1,n);
    }
    x[i] = n - t[i-1];
    Print(x,i,n);

}

int main()
{
    int n;
    cin >> n;
    int x[MAX];
    int t[MAX];
    x[0] = 1;
    t[0] = 0;
    Try(x,t,1,n);
    return 0;
}
