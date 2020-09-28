#include <iostream>

using namespace std;

void Print(int x[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << x[i];
    }
    cout << endl;
}

void BinaryString(int x[],int n,int j)
{
    for(int i=0;i<=1;i++)
    {
        x[j] = i;
        if(j==(n-1))
        {
            Print(x,n);
        }else{
            BinaryString(x,n,j+1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int x[n];
    BinaryString(x,n,0);
    return 0;
}
