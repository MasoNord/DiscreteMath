// For different realisation of program we'll use different methods of including
// If you use tags you need to rewrite into this
// #include "functions.h" 
#include "C:\Users\trotf\University\Discrete math\header\functions.h"

void GetValues(std::vector<int>& array, std::string info);
void ReWrite(std::vector<int>& ReArray, std::string NewInfo);

int main()
{
	std::vector<int> A; // first array
	std::vector<int> B; // second array
	std::vector<int> U; // universal set
	
	int answer = 1;

	std::cout << "Enter -0 for ending your input\n";

	GetValues(A, "Enter numbers for A array: ");
	GetValues(B, "Enter numbers for B array: ");
	GetValues(U, "Enter numbers for U array: ");

	std::cout << "\n------------------------------------------------\n";

	std::cout << "0 - exit from the programm\n1 - first task\n"
		<< "2 - second task\n3 - third task\n4 - fourth task\n"
		<< "5 - rewrite A\n6 - rewrite B\n7 - rewrite U";
	
	std::cout << "\n------------------------------------------------\n";

	while (answer != 0)
	{
		std::cout << "\nYour choice: ";
		std::cin >> answer;

		switch (answer)
		{
		case 0:
			break;
		case 1:
			First(A, B);
			break;
		case 2:
			Second(A);
			break;
		case 3:
			Third(A, B);
			break;
		case 4:
			Fourth(A, B, U);
			break;
		case 5:
			ReWrite(A, "Enter new numbers for A: ");
			break;
		case 6:
			ReWrite(B, "Enter new numbers for B: ");
			break;
		case 7:
			ReWrite(U, "Enter new numbers for U: ");
			break;
		default:
			std::cerr << "Oops! You've entered incorrect number, try again\n";
			break;
		}
	}

	system("pause");

	return 0;
}

void GetValues(std::vector<int>& array, std::string info)
{
	int c = 1;

	std::cout << info << " ";

	while (std::cin && c != -0)
	{
		std::cin >> c;
		if (c != 0)
			array.push_back(c);
		else
			break;
	}
}

void ReWrite(std::vector<int>& ReArray, std::string NewInfo)
{
	ReArray.clear();

	GetValues(ReArray, NewInfo);
}