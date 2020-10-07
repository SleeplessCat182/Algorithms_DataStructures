#include <iostream>
#include <string>
#define MAX 30

using namespace std;
/*
void QueenCheck(int a[][],bool b[][],int n)
{
    int maximumValue = a[0][0];
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(b[i][j] == false)
            {
                if(a[i][j] > maximumValue)
                {
                    b[i][j] = true;
                    maximumValue = a[i][j];
                }
                if(b[i][j] == false)
                {
                    for(int k=1; k<n; k++)
                    {
                        if(a[k][j] < maximumValue)
                        {
                            b[k][j] = true;
                        }
                    }
                }
            }
        }
        maximumValue = a[i][0];
    }
}

void Input(int a[][],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Output(int a[][],bool b[][],int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i][j] == false)
            {
                count++;
            }
        }
    }
    cout << count;
}
*/

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
