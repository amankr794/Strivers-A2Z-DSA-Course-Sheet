// Symmetric-Void Pattern

// https://practice.geeksforgeeks.org/problems/double-triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_19

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        /* 1st Half*/
        
        
        int inispace = 0;
        
        //outer for loop
        for(int i=0;i<n;i++){
            
            //stars
            for(int j=1; j<=n-i; j++)
                cout<<"*";
            
            //spaces
            for(int j=0; j<inispace; j++)
                cout<<" ";
                
            //stars
            for(int j=1; j<=n-i; j++)
                cout<<"*";
                
            
            inispace += 2;
            cout<<endl;
        }
        
        
        /* 2nd Half*/
        
        
         inispace = 2*n-2;
         
         //outer for loop
        for(int i=1;i<=n;i++){
            
            //stars
            for(int j=1; j<=i; j++)
                cout<<"*";
            
            //spaces
            for(int j=0; j<inispace; j++)
                cout<<" ";
                
            //stars
            for(int j=1; j<=i; j++)
                cout<<"*";
                
            
            inispace -= 2;
            cout<<endl;
        }
        
    }
};