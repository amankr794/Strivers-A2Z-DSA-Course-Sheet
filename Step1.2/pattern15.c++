// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285196/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_15

// Reverse Letter Triangle Pattern

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i=0; i<n; i++){

            
            for(char ch = 'A'; ch<'A'+n-i; ch++){
                
                cout<<ch;
            }
            
            cout<<endl;
        }
    }
};