#include<stdio.h> 
   
int main() 
{ int i,j,n,k;
printf("enter n");scanf("%d",&n);
     k=n/2+1;
     for (i=1;i<=k;i++) 
        {for(j=k-i;j>0;j--)
          { printf(" ");
          }
          for (j=i;j<2*i-1;j++)
            { printf("%d",j);
            }
            for (j=2*i-1;j>i-1;j--)
            { printf("%d",j);
            }
        
        printf("\n");
    }
    
    for(i=k-1;i>=1;i--) 
    { for(j=k-i;j>0;j--)
         { printf(" ");
         }
        for(j=i;j<2*i-1;j++)
           { printf("%d",j);
           }
          for(j=2*i-1;j>i-1;j--)
            { printf("%d",j);
            }
        printf("\n");
    }
} 
