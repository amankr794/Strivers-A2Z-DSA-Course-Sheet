// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718455/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_11

// Binary Number Triangle Pattern

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        int start;
        
        //outer for loop
        for(int i=0; i<n; i++){
            
            if(i%2 == 0) start = 1;
            else start = 0;
            
            //inner for loop
            for(int j=0; j<=i ; j++){
                
                cout<<start<<" ";
                start = 1 - start; 
            }
            
            cout<<endl;
        }
    }
};