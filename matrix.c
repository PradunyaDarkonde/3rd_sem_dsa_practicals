#include<stdio.h>
void main()
{
int a[3][3],b[2][2],c[2][2],d,k,l,m,n,i,j;

printf(" enter 1 for dispaly\n enter 2 for transpose\n enter 3 for row dispaly\n enter 4 for coloum dispaly\n enter 5 for addition\n enter 6 for multiplication\n ");
scanf("%d",&d);

printf("enter the elements of first\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        if(j==2)
        printf("\n");
    }
}

switch(d){
case 1:
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
        printf("\t%d",a[i][j]);
        if(j==2)
        printf("\n");
    }
}
break;

case 2:
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("\t%d",a[j][i]);
        if(j==2)
        printf("\n");
    }
}
break;

case 3:
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",&a[i][j]);
        if(j==2)
        printf("\t\t");
    }
}
break;

case 4:
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",&a[j][i]);
        if(j==2)
        printf("\t\t");
    }
}
break;

case 5:
printf("enter the elements of second matrix");
for(int k=0;k<3;k++){
    for(int l=0;l<3;l++){
        scanf("%d",&b[k][l]);
        if(j==2)
        printf("\n");
    }
}
c[m][n]=a[i][j]+b[k][l];
for(int m=0;m<3;m++){
for(int n=0;n<3;n++){
        printf("\t%d",c[m][n]);
        if(l==2)
        printf("\n");
    }
}
break;




}



}