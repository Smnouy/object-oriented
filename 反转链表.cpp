#include<iostream>
using namespace std;
struct b
{
	int address;
	int data;
	int nex;
} a[100000],b[100000];

int main()
{
	int dz,n,k,i,add;
	cin >> dz >> n >> k ;
	int ck=k;
	for(i=0;i<n;i++)
	{
		cin>>add;
		a[add].address=add;
		cin >> a[add].data >> a[add].nex;
	}
	int j=0;
	while(dz!=-1)   //重新排序的链表
	{
		b[j].address=a[dz].address;
		b[j].data=a[dz].data;
		b[j].nex=a[dz].nex;
		dz=a[dz].nex;
		j++;
	}
	/*for(j=0;j<n;j++)
	{
		if(j!=n-1) printf("%05d %d %05d\n",b[j].address,b[j].data,b[j].nex);
		else printf("%05d %d -1",b[j].address,b[j].data);
	}*/
  int temp = 0, t = k - 1;
    while( t < j )
    {
        while( t > temp )
        {
            b[t].nex = b[t - 1].address;
            printf( "%05d %d ", b[t].address, b[t].data );
            if( b[t].nex != -1 )
                printf( "%05d\n", b[t].nex );
            else
                printf( "-1\n" );
            t--;
        }
        if( temp + 2 * k - 1 < j )
            b[temp].nex = b[temp + 2 * k - 1].address;
        else if( temp + k == j )
            b[temp].nex = -1;
        else
            b[temp].nex = b[temp + k].address;
        printf( "%05d %d ", b[temp].address, b[temp].data );

        if( b[temp].nex != -1 )
            printf( "%05d\n", b[temp].nex );
        else
            printf( "%d\n", b[temp].nex );
        temp += k;
        t = temp + k - 1;
    }

    while( temp < j )
    {
        printf( "%05d %d ", b[temp].address, b[temp].data );
        if( b[temp].nex != -1 )
            printf( "%05d\n", b[temp].nex );
        else
            printf( "-1\n" );
        temp++;
    }
	return 0;
}
