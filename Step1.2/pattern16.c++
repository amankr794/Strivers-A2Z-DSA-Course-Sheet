// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285334/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_16

// Alpha-Ramp Pattern

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i=0; i<n; i++){
            
            char ch = 'A' + i;
            
            for(int j=0; j<=i; j++){
                
                cout<<ch;
            }
            
            cout<<endl;
        }
    }
};