/**************** 1> Number of digits ******************/
// https://www.codingninjas.com/studio/problems/number-of-digits_9173?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTab=0

// #include<bits/stdc++.h>
// int count(int n){
//     //write your code here

//     //using extraction concept
//     // int cnt = 0;

//     // while(n){

//     //     // int lastDigit = n%10;

//     //      n/=10;
//     //      cnt = cnt + 1;
//     // }

//     // return cnt;


//     //using logarithmic concept
//     int cnt = log10(n)+1;
//     return cnt;
// }


/****************** 2> Count Digits *********************/
// https://www.codingninjas.com/studio/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int countDigits(int n){
	// Write your code here.	
	
	int temp = n, count=0;
	while(temp){

		int digit = temp%10;

		if(digit>=1 && n%digit == 0)
			count++;
		
		temp/=10;
	}

	return count;
}
