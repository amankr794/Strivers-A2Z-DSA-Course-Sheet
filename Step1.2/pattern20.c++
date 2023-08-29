// Symmetric-Butterfly Pattern

// https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662287416/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_20

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        int space = 2*n-2;
        
        //outer loop for printing row
        for(int i=1;i<=2*n-1;i++){
            
           // stars for first half
          int star = i;
          
          // stars for the second half.
          if(i>n) star = 2*n - i;
            
            //inner loop
            
            //for printing stars
            for(int j=1; j<=star; j++)
                cout<<"*";
                
            //for printing spaces
            for(int j=1; j<=space; j++)
                cout<<" ";
            
            //for printing stars
             for(int j=1; j<=star; j++)
                cout<<"*";
                
                
        cout<<endl;
        if(i<n) space -= 2;
        else space +=2;
        
        
        }
        
       
        
    }
};