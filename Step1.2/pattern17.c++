// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_17

// Alpha-Hill Pattern

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        //outer for loop
        for(int i=0; i<n; i++){
            
            //3different inner for loop
            
            //spaces
            for(int j=0; j<n-i-1; j++)
                cout<<" ";
                
            //characters
            char ch = 'A';
            int breakpoint = (2*i+1)/2;
            for(int j=1; j<=2*i+1; j++){
                
                cout<<ch;
                if(j<=breakpoint) ch++;
                else ch--;
                
            }
                
                
            //spaces
            for(int j=0; j<n-i-1; j++)
                cout<<" ";
                
                
            cout<<endl;
        }
        
    }
};