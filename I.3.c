#include<stdio.h>

void main(){

int *a[100],i,no,*srchno,top,bottom,mid,j,*temp;

    clrscr();

        printf("\n Enter the number of elements\n");

        scanf("%d",&no);

        printf("\n Enter %d numbers\n",no);

for(i=0;i<no;++i)

    scanf("%d",&a[i]);

    printf("Enter the search number\n");

    scanf("%d",&srchno);

        for(i=0;i<no-1;++i)

            for(j=i+1;j<no;++j)

                if(a[i]>a[j])

                {

                    temp=a[i];

                    a[i]=a[j];

                    a[j]=temp;

                }

printf("\n Sorted array in ascending order\n");

for(i=0;i<no;++i)

    printf("%5d",a[i]);

        bottom=0;

        top=no-1;

while(top!=bottom+1)

{

    mid=(bottom+top)/2;

if (a[mid]<=srchno)

    bottom=mid;

else

    top=mid;

}

if(a[bottom]==srchno)

    printf("\n search number is present");

else

    printf("\n Search number is not present");

}
