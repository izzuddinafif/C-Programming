// Izzuddin Ahmad Afif 19-10-21.
#include <stdio.h>

int main()
{
	int y=1;

	do
	{
		int ar[]={0}, x, i=1, j=1, n=1, neg=0;
		printf("desimal yang akan dikonversi: ");
		scanf("%d", &x);
		
		if(x<0)
		{
			neg=1;
			x*=-1; //unsigned
		}
		

		while(x!=0)	//mengubah dari desimel ke biner
		{
			if(x==1)
			{
				ar[i]=1;
				break; 
			}
			ar[i]=x%2;
			x/=2;
			++i;
		}
		printf("%d\n", i);
		if(neg==1)	//diproses hanya untuk desimal negatif
		{
			for(j;j<=i;j++)	//mengubah 0 ke 1 vice versa
			{
				if(ar[j]==1)
					ar[j]=0;
				else
					ar[j]=1;
			}

			if(ar[i]=1)
				{		
					ar[i+1]=1;
					ar[i]=0;
					++i;
				}
			
			for(j=1;j<=i;++j)	//+1 setelah dibalik
			{
				if(j==1)
					ar[j]+=1;
				if(ar[j]==2)
				{
					ar[j+1]+=1;
					ar[j]=0; 
					if(j==i)
					{
						++i;
					}
				}
			}
		}
		printf("%d\n", i);
		n=i;
		for(n;n>=1;--n)
			printf("%d", ar[n]);
		puts("\n");
	}while(y!=0);
}