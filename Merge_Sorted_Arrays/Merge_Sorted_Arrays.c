#include <stdio.h>
void merge(int a1[], int n1, int a2[], int n2, int res[]) {
    int i = 0, j = 0, k = 0;
     while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) res[k++] = a1[i++];
        else res[k++] = a2[j++];
    }
    while (i < n1) res[k++] = a1[i++];
    while (j < n2) res[k++] = a2[j++];
}
int main() {
    int a1[] = {1, 3, 5}, a2[] = {2, 4, 6};
    int res[6];
    merge(a1, 3, a2, 3, res);
    
    for(int i=0; i<6; i++) printf("%d ", res[i]);
    return 0;
}