#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
int arr[size];
printf("Enter \n%d elements :\n",size);
for(int i=0;i<size;i++){
    printf("Elements \n%d: ",i+1);
    scanf("\n%d",&arr[i]);
}
printf("Array elements are :");
for (int i=0;i<size;i++){
    printf("\n%8d",arr[i]);//8d is format specifier

}
return 0;
}