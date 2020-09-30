/*
Ví dụ về chỉnh hợp không lặp:
3A2:
12 13 21 23 31 32
*/

void ChinhHopKhongLapChapK(int x[],bool y[],int n,int k,int i)
{
    for(int j = 0; j<n; j++)
    {
        if(!y[j])
        {
            x[i] = j+1;
            if(i==(k-1)){
                Print(x,k);
            }else{
                y[j] = true;
                Try(x,y,n,k,i+1);
                y[j] = false;
            }
        }
    }
}
