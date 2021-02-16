#include<iostream>
#include<fstream>

char file1_Name[] = "Test_01.txt";
char file2_Name[] = "Test_02.txt";

void FillFile(char*);
unsigned int ContentLenght(char*);
void MergeFiles(char*, char*);
bool FindWord(std::string, std::string);

std::string fileName = "";
std::string searchWord = "";

int main(int argc, char* argv[]) {
	//Exercise#1
	FillFile(file1_Name);
	FillFile(file2_Name);

	//Exercise#2
	MergeFiles(file1_Name, file2_Name);

	//Exercise#3
	//Iteration of arguments
	for (int i = 0; i < argc; i++) 
	{
		if(std::string(argv[i]) == "-f") fileName = std::string(argv[i+1]);
		if(std::string(argv[i]) == "-w") searchWord = std::string(argv[i + 1]);
	}

	std::cout << "File Name: " << fileName << std::endl;
	std::cout << "Searching word: " << searchWord << std::endl;
	if (fileName != "" && searchWord != "") {
		if (FindWord(fileName, searchWord)) std::cout << "Word is found" << std::endl;
		else std::cout << "Word is NOT found" << std::endl;
	}
	else {
		if (fileName == "") std::cout << "Error: parameter <fileName> not set" << std::endl;
		if (searchWord == "") std::cout << "Error: parameter <searchWord> not set" << std::endl;
	}
	
	return 0;
}


//Create and Fill the File
void FillFile(char* FileName) {
	std::ofstream fos(FileName);
	if (!fos) {
		std::cout << "Then File " << FileName << " cannot be open!!!" << std::endl;
	}
	else {
		for (int i = 1; i <= 3; i++) {
			fos << "<" << FileName << ">" << " - test record nuber " << i << std::endl;
		}
		fos.close();
	}
}

//Count numbers of char
unsigned int ContentLenght(char* FileName) {
	unsigned int LenghtCounter = 0;
	char buff;
	std::ifstream fis(FileName);
	while (!fis.eof())
	{
		buff = fis.get();
		LenghtCounter++;
	}
	fis.close();
	return LenghtCounter-1;	//Return number of char minus std::endl
}

//Merge files content
void MergeFiles(char* File1, char* File2) {
	char* MergeFileContent = new char[ContentLenght(File1) + ContentLenght(File2)];
	std::ifstream fis;
	fis.open(File1);
	fis.read(MergeFileContent, ContentLenght(File1));
	fis.close();
	fis.open(File2);
	fis.read(MergeFileContent + ContentLenght(File1), ContentLenght(File2));
	fis.close();

	std::ofstream fos("MergeFile.txt");
	fos << MergeFileContent;

	delete[] MergeFileContent;
	MergeFileContent = nullptr;
	//std::cout << "Total number of char: " << ContentLenght(File1) + ContentLenght(File2) << std::endl;
}

bool FindWord(std::string File, std::string Word) {
	std::ifstream fis("File");
	std::string buff;
	if (!fis.is_open()) {
		std::cout << "Then File " << File << " NOT found!!!" << std::endl;
	}
	else {
		while (!fis.eof()) {
			if (buff != " ") buff += fis.get();
			else {
				if (Word == buff) return true;
				std::cout << "Word: " << buff << std::endl;
			}
		}
	}
	return false;
}
