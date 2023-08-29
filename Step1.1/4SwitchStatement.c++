// https://www.codingninjas.com/studio/problems/switch-case-statement_8357244?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

double areaSwitchCase(int ch, vector<double> a) {
	
	// switch(ch){
	// 	case 1:
	// 		return M_PI * a[0] * a[0];
	// 	case 2:
	// 		return (float)a[0] * a[1];

	// }


	double area = 0.0;
	switch(ch){
		case 1: area = M_PI*a[0]*a[0];
		break;
		case 2: area = a[0]*a[1];
		break;
	}
	return area;
}
