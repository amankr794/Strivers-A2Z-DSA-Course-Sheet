// https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_12

// Number Crown Pattern

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        int space = 2*(n-1);
        
        //outer for loop
        for(int i=1; i<=n; i++){
            
            //inner for loop
            
            //print numbers
            for(int j=1; j<=i; j++)
                cout<<j<<" ";
                
            //print space
            for(int j=1; j<=space; j++)
                cout<<"  ";
                
            //print numbers
            for(int j=i; j>=1; j--)
                cout<<j<<" ";
                
            cout<<endl;
            space -= 2 ;
        }
    
    }
};