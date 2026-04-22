#include<stdio.h>
int main(){
    int row1,col1,row2,col2;
    printf("\nenter the size of first matrics row1:");
    scanf("%d",&row1);
    printf("\nenter the size of first matrics col1:");
    scanf("%d",&col1);
    printf("\nenter the size of second matrics row2:");
    scanf("%d",&row2);
    printf("\nenter the size of second matrics col2:");
    scanf("%d",&col2);
    int mat1[row1][col1];
    int mat2[row2][col2];
    int res[row1][col2];
    if(col1!=row2){
        printf("matrix multipiction not possible\n");
        return 0;
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            printf("\nmat1[%d][%d]= ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            printf("\nmat2[%d][%d]= ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            res[i][j]=0;
            for(int k=0;k<col1;k++){
                res[i][j]+=mat1[i][k]*mat2[k][j];
            }

        }
    }
    printf("resaltent matrix:");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
   
}