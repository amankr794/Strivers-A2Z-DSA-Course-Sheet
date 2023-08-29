// Pattern – 3: Right-Angled Number Pyramid

// https://practice.geeksforgeeks.org/problems/triangle-number/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_3

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        //outer for 
        
        for(int i=0; i<n; i++){
            
            //inner for loop
            
            for(int j=0; j<=i; j++){
                
                cout<<(j+1)<<" ";
            }
            
            cout<<endl;
        }
    }
};