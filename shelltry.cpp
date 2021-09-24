#include <iostream>
#include <string.>
using namespace std;


int main()
{
	string judul[10] = {"Mank","Parasite","Fight Club","Train to Busan","John Wick",
	"Shazam","Batman","Avengers: Endgame","Gundala","Zootopia",};
  	int length=10;
  	string temp;
  	int coba;

  	for (coba = 1; coba < length; ++coba)
  	{
    	//the new value to be inserted into a temporary location 
    	temp = judul[coba];
    	// k is the index of the number to the left of the coba.
    	int k;

    	for (k = coba-1; k >= 0 && judul[k] > temp; k--)
    	{
      	judul[k+1] = judul[k];
    	}
    	judul[k+1] = temp;
  	}

  	for(coba=0; coba < length; coba++) 
  		cout<< judul[coba] <<" ";
  		cout<<endl;

  return 0;
}

