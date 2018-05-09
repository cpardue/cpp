/*
structs SORTING!!
 
struct deskItem {
	string name;
	int quantity;
	float weightPounds;
*/

#include<iostream>
using namespace std;

struct stapler{
		int stapleCount = 0; //default values
		string color = "black"; 
		string manufacturer = "swingline"; 
		int serialNumber; //default values aren't necessary, it's just a logistical thing
		}; 
// NOTE THE }; FACE

void staplerDetails(stapler s){
	cout << "this is a " << s.manufacturer << " " << s.stapleCount << " capacity stapler." << endl;
	} //this funct is just an easier template for couting info, see main 44 && 47

int main(){
	stapler mystapler;
	mystapler.manufacturer = "Swingline"; // structname.member = attribute
	mystapler.color = "red";
	mystapler.serialNumber = 123456;
	mystapler.stapleCount = 9;
	
	stapler hisstapler;
	hisstapler.manufacturer = "Swingline"; // structname.member = attribute
	hisstapler.color = "purple";
	hisstapler.serialNumber = 654324;
	hisstapler.stapleCount = 500;
	
	stapler herstapler;
	hisstapler.manufacturer = "Swingline"; // structname.member = attribute
	hisstapler.color = "purple";
	hisstapler.serialNumber = 4523;
	hisstapler.stapleCount = 253;
	
	stapler unassignedstapler;
	hisstapler.manufacturer = "Swingline"; // structname.member = attribute
	hisstapler.color = "purple";
	hisstapler.serialNumber = 13457;
	hisstapler.stapleCount = 34;
	
	stapler staplers[4] = {mystapler,hisstapler,herstapler,unassignedstapler}; //make an array for sorting of 57-65
	
	cout << "Before sorting..." << endl;
	for (int i=0; i<4; i++){ //couting serials before sort
		cout << staplers[i].color << "; ";
		cout << staplers[i].serialNumber << ", ";
		}
	
	for (int pass=0; pass<4; pass++){ //sorting algorithm start
		for (int sort=0; sort<3; sort++){ //we're just arbitrarily using "sort" instead of "i"
				if (staplers[sort].serialNumber>staplers[sort+1].serialNumber){
					stapler temp = staplers[sort+1]; //start swapping
					staplers[sort+1] = staplers[sort];
					staplers[sort] = temp; //sorting algorithm end
				}
			}
		}
	
	cout << "\n...After sorting." << endl;	
	for (int i=0; i<4; i++){ //couting serials after sort
		cout << staplers[i].color << "; ";
		cout << staplers[i].serialNumber << ", ";
		}
	cout << endl;
	
system("pause");
return 0;
}
