// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661492263/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_7

// Pattern – 7: Star Pyramid

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        //outer for loop
        for(int i=0;i<n;i++){
            
                //space
                int space = 1;
                while(space <= n-(i+1)){
                    cout<<" ";
                    space++;
                }
                
                //stars
                int star=1;
                while(star<=2*i+1){
                    cout<<"*";
                    star++;
                }
                
            cout<<endl;
            
        }
        
    }
};