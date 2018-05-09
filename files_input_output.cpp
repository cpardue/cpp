/*
FILE INPUT
*/

	
	ifstream myInputFile;
	string inputFilename = "./input.txt"; // Local reference to our input file
	string inputText; // Our variable for the text we get from the file
	myInputFile.open(inputFilename); // Opens the file

	while (myInputFile.good()) { // As long as our file is ready to give us input...
		getline(myInputFile, inputText, '\n'); // Pull the text up until and including the next newline
		cout << inputText << endl; // Display that line on the screen
	}
	myInputFile.close(); 
	*/

/*
FILE OUTPUT
*/


	ofstream myOutputFile;
	string outputFilename = "./output.txt"; // Local reference to our output file
	string outputText = ""; // Our variable for what we will write to the file
	myOutputFile.open(outputFilename, ofstream::app); // Opens the file

	while (myOutputFile.good() && outputText != "stop") { // If we can write to this file...
		cout << "Enter some text:";
		cin >> outputText;
		myOutputFile << outputText << endl;
	}
	myOutputFile.close();
	
