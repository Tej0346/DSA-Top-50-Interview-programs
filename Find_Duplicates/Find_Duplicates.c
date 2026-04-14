#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,3,2,5,6};
    int n = 8;
    int count[100] = {0};
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
      if (count[arr[i]] == 2){
        printf(" %d", arr[i]);
      }
    }
    return 0;
}