/**
 * Bubble SOrt:- 
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
if they are in the wrong order.
Worst and Average Case Time Complexity: O(n*n). The worst case occurs when an array is reverse sorted.
Best Case Time Complexity: O(n). The best case occurs when an array is already sorted.
Auxiliary Space: O(1)
Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.
 */

//here we have sorted an array using bubble sort algorithm both in recursive and iterative way.

public class bubbleSort {

    //recursive bubble sort
    void bubblesort(int[] arr, int n){

        //base case
        if(n==1){
            return;
        }

        for(int i = 0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                //swap
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        bubblesort(arr, n-1);
    }
    public static void main(String[] args){
        int arr[] = {7,2,9,6,8,3,5,1,};
        int n = arr.length;
        bubbleSort ob = new bubbleSort();
        ob.bubblesort(arr, n);
         //print 
         System.out.print("Sorted array by recursion = ");
         for(int i = 0;i<n;i++){
             System.out.print(arr[i]+" ");
         }
         System.out.println();

        // Iterative bubble sort
        for(int i  = 0; i< n-1;i++){
            for(int j = 0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    //swap
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }

            }
        }

        //print 
        System.out.print("Sorted array = ");
        for(int i = 0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}


//this code is contributed by sneha-2510
