#include <iostream>
#include <array>
using namespace std;

struct mhs{
	string name;
	int studnum;
}; mhs mhs [100];

int binarySearch(int score[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    if (score[mid] == x)
      return mid;

    if (score[mid] > x)
      return binarySearch(score, x, low, mid - 1);

    return binarySearch(score, x, mid + 1, high);
  }
  return -1;
}

 int main(void)
 {
 	int m;
 	int scr;
 	int score [5] = {70, 80, 85, 90, 95};
 	for (int i=0; i < m; i++){
 	cout << "Nim  	: "; cin >> mhs[i].studnum; cin.ignore();
 	cout << "Name 	: "; getline(cin,mhs[i].name);
 	cout << "Score 	: "; cin >> scr;
 	int n = sizeof(score) / sizeof(score[0]);
 	int result = binarySearch(score, scr, 0, n-1);
 	if (result == -1)
 		printf("your score is not valid");
 	else
 		printf("your score is at %d rank", result);
 	break;
 }
 	return 0;
 }
 