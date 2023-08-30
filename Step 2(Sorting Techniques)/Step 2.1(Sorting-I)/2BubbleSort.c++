// https://www.codingninjas.com/studio/problems/bubble-sort_624380?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void bubbleSort(int arr[], int n) 
{
    //write your code here
    for(int i=0; i<n-1; i++){

        for(int j=0; j<(n-1)-i; j++){

            if(arr[j]>arr[j+1]){
                
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
