//https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int dataTypes(string type) {

	if(type == "Integer" || type == "Float")
		return 4;
	else if(type == "Long" ||type == "Double" )
		return 8;
	else if(type == "Character")
		return 1;
}
