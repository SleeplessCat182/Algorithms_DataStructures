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

void K_ElementsSet(int x[],int n,int k,int i,int j)
{
    for(j;j<(n-k+i+1);j++)
    {
        x[i] = j+1;
        if(i==(k-1))
        {
            Print(x,k);
        }else{
            K_ElementsSet(x,n,k,i+1,j+1);
        }
    }
}

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    int x[k];
    K_ElementsSet(x,n,k,0,0);
    return 0;
}
