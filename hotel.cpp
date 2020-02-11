#include <iostream>
#include <map>
#define SIZE 6

using namespace std;

int main() {
	int a[SIZE][2] = {{1, 3}, {4, 5}, {1, 7}, {10, 12}, {2, 3}, {2000, 3000}};
	map <int, int> date;
	for (int i = 0; i < SIZE; ++i) {
        date[a[i][0]]++;
        date[a[i][1]]--;
	}
	int counter = 0, maxCounter = 0;

    map<int, int>::const_iterator i;

	for(i = date.begin(); i != date.end(); ++i) {
		counter += i->second;
		if(counter > maxCounter)
            maxCounter = counter;
	}
	cout << maxCounter;
}
