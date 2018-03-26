void BubbleSort(int arr[],int n){
     int i,j,tmp;
     for(i=n-1;i>0;i--){
          for(j=0;j<i;j++){
             if(arr[j]<=arr[j-1]{
               tmp =arr[j];
               arr[j]=arr[j-1];
               arr[j-1]=arr[j];
              }
           }
     }
}



void SelectSort(int arr[],int n){
      int i,j,tmp,minindex;
     for(i=0;i<n-1;i++){
          minindex=i;
          for(j=i+1;j<n;j++){
              if(arr[minindex]>a[j]){
                   minindex=j;
              }
          }
          if(minindex!=i){
             tmp  =arr[minindex];
               arr[minindex]=arr[j];
               arr[j]=tmp;
          }
     }
}
                
                
                
                
void insertSort(int arr[],int n){
     int j,i,tmp;
     for(i=1;i<n;i++){
        tmp=a[i];
          j=i;
          while(j&&arr[j-1]>tmp){
          arr[j]=a[j-1];
               j--;
          }
     a[j]=tmp;
     }
}

     
#include <stdio.h>
int main()
 {    int n,arr[100],i;
        while(scanf{"%d",&n)!=EOF){
              for(i=0;i<n;i++){
                   scanf("%d",&a[i]);
              }
 }
     
     
     
     
     
     
     
     
     
     
     
     
