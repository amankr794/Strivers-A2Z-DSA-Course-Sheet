https://practice.geeksforgeeks.org/problems/right-triangle/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_2

// Pattern-2: Right-Angled Triangle Pattern

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        //outer for loop
        
        for(int i=0;i<n;i++){
            
            //inner for loop
            
            for(int j=0;j<=i;j++){
                
                cout<<"* ";
            }
            
            cout<<endl;
        }
    }
};