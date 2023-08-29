// https:practice.geeksforgeeks.org/problems/triangle-number-1661489840/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_6

// Pattern – 6: Inverted Numbered Right Pyramid

class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    
	    for(int i=0;i<n;i++){
	        
	        for(int j=0;j<(n-i);j++){
	            
	            cout<<j+1<<" ";
	        }
	        
	        cout<<endl;
	    }
	}
};