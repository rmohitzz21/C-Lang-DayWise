// Online C compiler to run C program online
#include <stdio.h>
void bubble_sort(int n){
    
    int i,j,a[100],temp=0;
    printf("\n Enter Element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before Sort\n");
    for(i=0;i<n;i++){
      printf(" %d ",a[i]);
    }
    
    for(i=0;i<n-1;i++){
       for(j=0;j<n-i-1;j++){
         if(a[j] > a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp; 
             }
        }
    }
    
    printf("\n After Sort:\n");
    for(i=0;i<n;i++){
        printf(" %d " , a[i]);
    }    
    
}


int main() {
    // Write C code here
    int size;
    printf("Enter Size :");
    scanf("%d",&size);
    bubble_sort(size);
    
  

    return 0;
}