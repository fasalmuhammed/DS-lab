//READ A SPARCE MATRIX AND DISPLAY ITS TRIPLET REPRESENTATION
#include<stdio.h>   
int main() 
{ 
    int S[10][10],m,n,i,j,k=0,size=0;
    printf("Enter number of rows and columns ");
    scanf("%d %d",&m,&n);
    printf("Enter elements in the matrix : \n");
     for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d",&S[i][j]);
    printf("The matrix is \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf(" %d ",S[i][j]);
            if (S[i][j] != 0) 
                size++;
        }
        printf("\n");
    }
    int M[3][size]; 
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            if (S[i][j] != 0) 
            { 
                M[0][k] = i; 
                M[1][k] = j; 
                M[2][k] = S[i][j]; 
                k++; 
            } 
    printf("Triplet representation of the matrix is \n");
    for (i=0; i<size; i++) 
    { 
        for (j=0; j<3; j++) 
            printf(" %d ", M[j][i]); 

        printf("\n"); 
    } 
    return 0; 
} 
