/*
bubble sorting with pointers
*/
#include<iostream>
#include<random>
#include<ctime>
using namespace std;


//instead of 'void bubbleSort(int array[]);' which copies array[],
//we point directly to array location itself.
void bubbleSort(int * array, int length);


int main()
{
	int myArray[10];
	
	srand(time(NULL)); //this sets up our rand.  set rand, funct time, current null.
	
	cout << "\nmyArray first run seeded with rand, " << endl;
	for (int i=0; i<10; i++){
		myArray[i] = rand()%21; //rand from 0 through 20
		cout << myArray[i] << ", ";
		}
			
	cout << "\nmyArray second run seeded with rand, " << endl;
	for (int i=0; i<10; i++){
		myArray[i] = rand()%21; //rand from 0 through 20
		cout << myArray[i] << ", ";
		}
	
	bubbleSort(myArray, 10);
	cout << "\nmyArray's second run, \ngiven after bubbleSort(myArray, 10) call, \nand with 'myArray[i] = rand()%21 removed" << endl;
	for (int i=0; i<10; i++){
		cout << myArray[i] << ", ";
		}
	cout << "\n";	
		

	
		
cout << endl;	
system("pause");
return 0;
}

//you can cut/paste this into a source, or just call from #include<thislibrary'sname.c>
void bubbleSort(int * array, int length){
	int temp = 0;
	for (int pass=0; pass<length; pass++){//outer loop
		for (int swap=0; swap<length-1; swap++){//inner loop
			if (array[swap]>array[swap+1]){
				temp = array[swap];
				array[swap] = array[swap+1];
				array[swap+1]=temp; //end of inner loop
				}
			}
		}
	}
	
	

		
