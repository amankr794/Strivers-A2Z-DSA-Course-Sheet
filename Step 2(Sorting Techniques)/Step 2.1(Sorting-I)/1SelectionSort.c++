//  https://www.codingninjas.com/studio/problems/selection-sort_624469?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
 
 void selectionSort(vector<int>&arr) {
    // Write your code here.

    for(int i=0; i<arr.size()-1; i++){

         for(int j=i+1; j<arr.size(); j++){

             if(arr[j]<arr[i]){
                 
                 int temp = arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
              
             }
         }
    }

}
