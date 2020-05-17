#include<stdio.h>
#include<stdlib.h>
void nhap(int *(*a), int n)
{
    int i = 0;
    for(;i<n;i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d",(*a+i));
    }
}
int countEven(int *(*a), int n) 
{     
	 int i = 0;
	 int dem=0;
    for(;i<n;i++)
    { if( *(*a+i)%2==0) dem=dem+1;
    }
    return dem;
    }
int tongEven(int *(*a), int n) 
{     
	 int i = 0;
	 int tong=0;
    for(;i<n;i++)
    { if( *(*a+i)%2==0) tong=tong+*(*a+i);
    }
    return tong;
    } 
void inchan(int *(*a), int n) 
{     
	 int i = 0;
    for(;i<n;i++)
    { if( *(*a+i)%2==0) printf("A[%d]=%d\t",i,*(*a+i));
    }
    } 
int main(){
    int *a;
    int n;
    printf("nhap so phan tu:");
     a = (int*)malloc(n*sizeof(int));
    scanf("%d",&n);
    nhap(&a,n);
    printf("so phan tu chan cua mang la:%d\n",countEven(&a,n));
    printf("tong so phan tu chan cua mang =%d\n",tongEven(&a,n));
    printf("cac phan tu chan :");
    inchan(&a,n);
    
    }
    
