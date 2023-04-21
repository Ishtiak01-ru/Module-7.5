#include<stdio.h>

int main(){
    int n;
  
    scanf("%d",&n);
    int ar[n];
   
    for(int i = 0 ; i<n;i++){
        scanf("%d ",&ar[i]);
    }
    int y;
    scanf("%d",&y);
    int ans = -1;

    for(int i = 0 ; i<n;i++){
       if (y==ar[i]){
         ans = i;
        break;
       }
    }
     printf("%d\n",ans);
     return 0;

}