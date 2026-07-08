//MENU DRIVEN ARRAY OPERATIONS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
    {
        int A[10],B[10],C[20],m,k;
        int n,i,x,p,ch;
        printf("Enter the no. of elements:");
        scanf("%d",&n);
        printf("Enter the elements:");
        for(i=0;i<n;i++)
            {
                scanf("%d",&A[i]);
            }
        while(1)
        {
            printf("\nMENU\n======\n1.INSERT\n2.DISPLAY\n3.DELETE\n4.MERGE\n5.EXIT");
            printf("\nEnter the choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    printf("Enter the position:");
                    scanf("%d",&p);
                    printf("Enter the element:");
                    scanf("%d",&x);
                    for(i=n;i>=p;i--)
                        A[i]=A[i-1];
                    A[p-1]=x;
                    n=n+1;
                    break;
                case 2:
                    printf("Array: ");
                    for(i=0;i<n;i++)
                    {
                        printf("%d\t",A[i]);
                    }
                    break;
                case 3:
                    printf("Enter posititon:");
                    scanf("%d",&p);
                    if(n==1)
                        n=0;
                    else
                        {
                            for(i=p-1;i<n-1;i++)
                            {
                                A[i]=A[i+1];
                            }
                                n=n-1;
                        }	
                    break;
                case 4:
                    printf("Enter the size of 2nd array:");
                    scanf("%d",&m);
                    printf("Enter the element:");
                    for(i=0;i<m;i++)
                        scanf("%d",&B[i]);
                    k=0;
                    for(i=0;i<n;i++)
                    {
                        C[k]=A[i];
                        k++;
                    }	
                    for(i=0;i<m;i++)
                    {
                        C[k]=B[i];
                        k++;
                    }
                    printf("The merged Array is: ");
                    for(i=0;i<m+n;i++)
                    printf("%d\t",C[i]);
                    break;
                case 5: exit (0);	
            }
        }
    }
    