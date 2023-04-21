
// #include<stdio.h>
// int main(){
        
//         int n;
//         scanf("%d",&n);
//         int arr[n];
//         long long int sum=0;
//         for(int i = 0 ; i<n ; i++){
//              scanf("%d",&arr[i]);
//         }
//           for(int i = 0 ; i<n ; i++){
//             sum=sum+arr[i];            
//         }
//         if (sum>0)
//         {
//             printf("%lld",sum);
//         }else{
//         printf("%lld\n",sum*-1);
//         }

//         return 0;
// }

//system no -2

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    long long int sum=0;
    long long int x;
    for(int i = 0 ; i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i = 0 ; i<n;i++){

        sum=sum+ar[i];  
        x = abs(sum);    
    }
     printf("%lld",x);
     return 0;

}