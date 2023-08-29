// https://practice.geeksforgeeks.org/problems/triangle-number-1661428795/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_4

// Pattern – 4: Right-Angled Number Pyramid – II

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<=i;j++){
                
                cout<<(i+1)<<" ";
            }
            
            cout<<endl;
        }
    }
};
