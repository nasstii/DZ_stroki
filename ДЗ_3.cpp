#include <iostream>
#include <string>
#include <sstream>


int main() {
	/*Task 1*/
	int countA = 0;//small letter counter
	int counta = 0;//large letter counter
	std::string str1;
	std::cout << "Enter the stroke - ";
	std::getline(std::cin, str1);
	for (int i = 0; i < str1.size(); i++) { //Search for small and large letters in a word using a loop
		if (str1[i] >= 'a' && str1[i] <= 'z')
			++counta; 
		else if (str1[i] >= 'A' && str1[i]<= 'Z')
			++countA;
	}
	std::cout << "Big word - " << countA << std::endl << "Small word - " << counta << std::endl;

	/*Task 2*/
	std::string k;
	std::string line;
	int count2 = 0;//word counter
	std::cout << "Enter the stroke - ";
	std::getline(std::cin, line); //entering the desired line from the keyboard
	std::istringstream str2(line);
	while (getline(str2, k, ' ')) //counting the number of words and displaying them on the screen
	{
		std::cout << k << std::endl;
		++count2;
	}
	std::cout << "Count of words - " << count2 << std::endl;

	/*Task 3*/
	std::string s3;
	std::cout << "Enter the stroke - ";
	std::getline(std::cin, s3);//entering the desired line from the keyboard
	int ls = s3.size();//the length of the entered word
	int i3, j3 = 0;
	for (i3 = 0; i3 < 5; i3++) { //making words of random length
		int lw = rand() % (7 - 2 + +1) + 2;
		std::string w;
		while (j3 < lw)
		{
			int let = rand() % ls;
			if (s3[let] != 0) {
				w += s3[let];
				++j3;
			}
		}
		j3 = 0;
		std::cout << w << std::endl;
	}

	/*Task 4*/
	std::string str4;
	std::cout << "Enter the stroke - ";
	std::getline(std::cin, str4);//entering the desired line from the keyboard
	int i4, j4 = 0;
	std::string newstr4;//an empty line
	newstr4 += str4[0];
	int lnewstr4 = newstr4.size();//the length of the word
	for (i4 = 0; i4 < str4.size(); ++i4)
	{
		while (j4 < lnewstr4)
		{
			if ((str4[i4] == newstr4[j4]) || (str4[i4] == ' ')) //checking for spaces and identical characters to delete
				break;
			if ((str4[i4] != ' ') && (str4[i4] != newstr4[j4]))
			{ 
				if (j4 == newstr4.size() - 1)
					newstr4 += str4[i4]; //if there is no character, then add it to an empty string
				j4 += 1;
			}

		}
		lnewstr4 = newstr4.size();
		j4 = 0;//reset the counter

	}
	std::cout << newstr4 << std::endl;
	/*Task 5*/
	std::cout << "Task 5" << std::endl;
	const int MAX_STRINGS = 100; // Maximum number of lines

		std::string strings[MAX_STRINGS];
		int count = 0; // Number of lines entered

		// Entering strings and saving them in an array
		std::cout << "Enter the lines (to end the input, enter an empty line):\n";
		std::string input;
		while (count < MAX_STRINGS && std::getline(std::cin, input) && !input.empty()) {
			strings[count] = input;
			count++;
		}

		// Search for the longest string
		int longest = 0;
		for (int i = 1; i < count; ++i) {
			if (strings[i].size() > strings[longest].size()) {
				longest = i;
			}
		}

		std::cout << "The numbers of the longest lines:\n";
		for (int i = 0; i < count; ++i) {
			if (strings[i].size() == strings[longest].size()) {
				std::cout << i + 1 << std::endl;
			}
		}

		/*TAsk 6*/
		std::cout << "Task 6" << std::endl;


		std::string str6;
		std::cout << "Enter the stroke - ";
		std::getline(std::cin, str6);
		
		
		std::string newstr6;
		int n = 0;
		
		for (int i6 = 0; i6 < str6.size(); ++i6)
		{
			if (str6[i6] != ' ')
				newstr6 += str6[i6];

		}
		std::cout << newstr6 << std::endl;
		int i6 = 0;
		int l6 = newstr6.size();
		for (i6 = 0; i6 < l6; ++i6) {
			if (newstr6[i6] != newstr6[l6 - i6 - 1])
				break;
			else
				n += 1;
		}
		if (n == l6)
			std::cout << "Your string is a palindrome"<<std::endl;
		else 
			std::cout << "Your string is not a palindrome" << std::endl;
		

		/*TAsk 7*/
		std::cout << "Task 7" << std::endl;
		std::string str7;
		std::cout << "Enter the stroke - ";
		std::getline(std::cin, str7);
		std::string ministr;
		std::cout << "Enter the line you want to replace - ";
		std::getline(std::cin, ministr);
		std::string ministr2;
		std::cout << "Which line should be replaced with (" << ministr.size() << " characters) - ";
		std::getline(std::cin, ministr2);
		int n7 = 0;
		int i7 = 0;
		int j7 = 0;
		int l7 = ministr.size();
		for (i7 = 0; i7 < str7.size(); ++i7) {
			if (str7[i7] == ministr[j7] && j7!= l7) {
				++j7;
				n7 = i7;
			}
		}
		std::cout << n7 << std::endl;
		if (j7 == l7) {
			j7 = 0;
			while (j7 < l7) {
				str7[n7 - l7 +1] = ministr2[j7];
				++n7;
				++j7;
			}
		}
		std::cout << str7 << std::endl;

		/*Task 8*/
		std::cout << "Task 8" << std::endl;
		std::string str8;
		std::cout << "Enter the stroke - ";
		std::getline(std::cin, str8);
		int l8 = 0;
		std::string s;
		std::string s1;
		std::istringstream st(str8);
		while (getline(st, s, ' '))
			{
				std::cout << s << std::endl;
				if (l8 <= s.size()) {
					l8 = s.size();
					s1 = s;

				}
				
			}
		std::cout << "The longest word - "<< s1 << " " << s1.size() << std::endl;


		return 0;
	}

