#include <iostream>
#include <vector>
#include<stdlib.h>
#include<ctime>
#include<algorithm>
using namespace std;
bool sort1(int aa, int b){
	return(aa > b);
}
int main()

{
	vector<int> vector1;
	int value;
	srand(time(NULL));

cout << "Please enter some integers (enter 0 to end):\n";


		for (int i = 0; i < 20; i++){
		
			vector1.push_back(rand() % 1000 + 1);
		}
	


	cout << "vector stores " << int(vector1.size()) << " numbers.\n";
	sort(vector1.begin(), vector1.end(), sort1);
	for (std::vector<int>::iterator it = vector1.begin(); it != vector1.end(); ++it)
		std::cout << ' ' << *it;
	
	return 0;
}