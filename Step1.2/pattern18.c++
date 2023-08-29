// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662286302/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_18

// Alpha-Triangle Pattern

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        //outer for loop
        for(int i=0; i<n; i++){
            
            //inner for loop
            
            // for(char ch='A'+n-1; ch>='A'+(n-1)-i; ch--)
            //     cout<<ch<<" ";
            
            
            char ch = 'A'+n-1;
            
            for(int j=0; j<=i; j++){

                cout<<ch<<" ";
                ch--;
            }
                
            cout<<endl;

        }
    }
};