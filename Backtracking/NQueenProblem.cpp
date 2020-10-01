/*
Giải thích:
  Ta dùng quay lui để thử tất cả vị trí của n con hậu
  Hàm is_Safe sẽ kiểm tra xem nếu xung quanh các đường đi của các con hậu có con hậu khác khống chế hay không
  Với mảng x[] ta đang lưu tọa độ y của con hậu trên bàn cờ (x,y)
  Khi các con hậu nằm trên cùng 1 đường chéo, ta dễ dàng thấy được chúng tạo thành một hình vuông từ đó sẽ khiến cho bài toán con hậu trở nên dễ hơn 
*/

void Print(int x[],int n)
{
    for(int i=0; i < n; i++)
    {
        cout << "(" <<i+1<< "," <<x[i]<<")" << "; ";
    }
    cout << endl;
}

bool is_Safe(int x[],int x1,int y1)
{
    for(int i=0;i<x1;i++)
    {
        if((x[i] == y1) || (abs(i-x1) == abs(x[i]-y1)))
        {
            return false;
        }
    }
    return true;
}

void Try(int x[],int n,int i)
{
    for(int j=1;j<=n;j++)
    {
        if(is_Safe(x,i,j))
        {
            x[i] = j;
            if(i==(n-1)) Print(x,n);
            Try(x,n,i+1);
        }
    }
}
