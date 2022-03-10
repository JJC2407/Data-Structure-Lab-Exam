#include<stdio.h>
void main()
{
    int a[100],b[100],i,j,n1,n2,c[25],ch,n,l,in[20],da[20];
    int k=0,x=0;
    printf("Enter the size of set A : ");
    scanf("%d",&n1);
    int y=n1;
    printf("Enter the size of set B : ");
    scanf("%d",&n2);
    printf("Enter the elements of set A : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of set B : ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a[i]==a[j])
            {
                for(l=j;l<n1;l++)
                {
                    a[j]=a[j+1];
                }
                n1=n1-1;
            }
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(b[i]==b[j])
            {
                for(l=j;l<n2;l++)
                {
                    b[j]=b[j+1];
                }
                n2=n2-1;
            }
        }
    }
    printf("\n SET A\n--------\n");
    for(i=0;i<n1;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n SET B\n--------\n");
    for(i=0;i<n2;i++)
    {
        printf("%d\t",b[i]);
    }
    printf(" Menu \n------\n");
    printf(" 1.A UNION B\n 2.A INTERSECTION B\n 3.A DIFFERENCE B\n 4.Exit");
    printf("\n Enter your choice : ");
    scanf("%d",&ch);
    while(ch!=4)
    {
        if(ch==1)
        {
            for(i=0;i<n1;i++)
            {
                c[k]=a[i];
                k++;
            }
            for(i=0;i<n2;i++)
            {
                c[k]=b[i];
                k++;
            }
            for(i=0;i<k;i++)
            {
               for(j=i+1;j<k;j++)
               {
                   if(c[i]==c[j])
                   {
                       for(l=j;l<k;l++)
                       {
                           c[l]=c[l+1];
                       }
                       k=k-1;
                   }
               }
            }
            for(i=0;i<k;i++)
            {
                printf("%d\t",c[i]);
            }
        }
        if(ch==2)
        {
            for(i=0;i<n1;i++)
            {
                for(j=0;j<n2;j++)
                {
                    if(a[i]==b[j])
                    {
                       printf("%d\t",a[i]);
                       in[x]=a[i];
                       x++;
                    }

                }
            }
        }
        if(ch==3)
        {
            for(i=0;i<y;i++)
            {
                da[i]=a[i];
            }
            for(i=0;i<y;i++)
            {
                for(j=0;j<x;j++)
                {
                    if(da[i]==in[j])
                    {
                        for(l=i;l<y;l++)
                        {
                            da[l]=da[l+1];
                        }
                        y=y-1;
                    }
                }
            }
            for(i=0;i<y;i++)
            {
                printf("%d\t",da[i]);
            }
        }
        printf(" Menu \n------\n");
        printf(" 1.A UNION B\n 2.A INTERSECTION B\n 3.A DIFFERENCE B\n 4.Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);
    }
}
