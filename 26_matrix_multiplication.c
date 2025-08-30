//Matrix multiplication using user defined function

#include<stdio.h>
void product(int matrix1[][20], int a, int b, int matrix2[][20], int c, int d);
int main()
{
           int m1[20][20], m2[20][20];
           int i, j, k, m, n, p, q;
           printf("Enter First Matrix size: ");
           scanf("%d %d", &m, &n);
           printf("Enter Second Matrix size: ");
           scanf("%d %d", &p, &q);
           if(n==p)
           {
           printf("Enter the elements of First Matrix: ");
           for (i = 1; i <= m; i++)
           {
           for (j = 1; j <= n; j++) 
           {
           scanf("%d", &m1[i][j]);
           }
           }
           printf("Enter the elements of Second Matrix: ");
           for (i = 1; i <= p; i++)
           {
           for (j = 1; j <= q; j++) 
           {
           scanf("%d", &m2[i][j]);
           }
           }
           printf("The First Matrix is:\n");
           for (i = 1; i <= m; i++) 
           {
           for (j = 1; j <= n; j++) 
           {
           printf("\t %d ", m1[i][j]);
           }
           printf("\n");
           }
           printf("The Second Matrix is:\n");
           for (i = 1; i <= p; i++) 
           {
           for (j = 1; j <= q; j++) 
           {
           printf("\t%d ", m2[i][j]);
           } 
           printf("\n");
           }
           product(m1, m, n, m2, p, q);
           }
           else
           printf("The Two Matrices are not compatible to find Product!!");
           return(0);
}
void product(int matrix1[][20], int a, int b, int matrix2[][20], int c, int d)
{
           int products[20][20];
           int i, j, k;
           for(i=1; i<=a; i++) 
           {
           for(j=1; j<=d; j++)
           {
           products[i][j]=0;
           }
           }
           for (i = 1; i <= a; i++) 
           {
           for (j = 1; j <= d; j++) 
           {
           for (k = 1; k <= b; k++) 
           {
           products[i][j]=products[i][j]+matrix1[i][k]*matrix2[k][j];
           }
           }
           }
           printf("The Product of Two Matrices is:\n");
           for (i = 1; i <= a; i++) 
           {
           for (j = 1; j <= d; j++)
           {
           printf("\t%d", products[i][j]);
           }
           printf("\n");
           }
}