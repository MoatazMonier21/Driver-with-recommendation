#include<iostream>
using namespace std;

struct info {// define a structure has the age and licence data
	int age;
	bool hasDrivingLicense;
	bool hasRecommendation;
};
info readData() {
	info inf1;
	cout << "Enter Your age" << endl;
	cin >> inf1.age;
	cout << "Do you have a driving license" << endl;
	cin >> inf1.hasDrivingLicense;
	cout << "Do you have a recommendation" << endl;
	cin >> inf1.hasRecommendation;
	return inf1;
} // read that data and save it into a structure variable
bool isAccepted(info inf1) {
	if (inf1.hasRecommendation = 1)
		return true;
	else
		return(inf1.age > 21 && inf1.hasDrivingLicense);
}//check if this data could be accepted or not
void printResults(info inf1){
	if (isAccepted(inf1))
		cout << "Accepted" << endl;
	else
		cout << "Not Accepted" << endl;
}
int main() {
	printResults(readData());

	return 0;
}