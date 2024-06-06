#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSort(long a[], int n){
    for(int i = 1; i < n; i++){
        long temp = a[i];
        int j = i - 1;
        while( j >= 0 && a[j] > temp ){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    printf("\nSorted numbers :\n");
    for(int i = 0; i < n; i++ ){
        printf("%ld\n",a[i]);
    }
}

int main(){
    int n;
    long a[100];
    clock_t starttime, endtime;
    double clk;
    
    printf("Enter the size:\n");
    scanf("%d",&n);
    
    srand(time(0));
    printf("\nThe Phone numbers are :\n\n");
    for(int i = 0; i < n; i++){
        a[i] = 9000000000 + rand() % 100000000;
        printf("%ld\n",a[i]);
    }
    
    starttime = clock();
    insertionSort(a, n);
    endtime = clock();
    
    clk = (double)(endtime - starttime)/ CLOCKS_PER_SEC;
    printf("\nTHE RUN TIME IS :\t%f\n",clk);
    
    return 0;
}