#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h> 
#include <ctime>

using namespace std;

//functions
void bubblesortLottery(int lotteryRand[]);
void bubblesortGuess(int playerNums[]);

int main()
{

int lotteryRand[5];
int playerNums[5];
char reply;
bool done = false;



while (!done){


for (int i = 0; i < 5; i++)
	{
		lotteryRand[i] = rand() % 40 + 1;
	}
bubblesortLottery(lotteryRand);


cout << "Enter 5 numbers between 1 and 40!" << endl;
cin >> playerNums[0] >> playerNums[1] >> playerNums[2] 
	>> playerNums[3] >> playerNums[4];
	
bubblesortGuess(playerNums);


for (int i = 0; i < 5; i++)
{
	if(playerNums[i] != lotteryRand[i])
	{
		cout << "Sorry! You did not win." << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << lotteryRand[i] << " ";
		}
		cout << endl << endl;
		break;
	}

	else if ((playerNums[0] == lotteryRand[0]) && (playerNums[1] == lotteryRand[1]) && 
				(playerNums[2] == lotteryRand[2]) && (playerNums[3] == lotteryRand[3]) && 
				(playerNums[4] == lotteryRand[4]))
	{
		cout << "You won!" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << lotteryRand[i] << " ";
		}
		cout << endl << endl;
		break;
	}
}	
	cout << "Play again? (y/n)";
	cin >> reply;
	if (reply != 'y')
		{
			done = true;
		}
} // end while
return 0;
}

void bubblesortLottery(int lotteryRand[])
{
	int iteration;
	int i;
	for(iteration = 1; iteration < 5; iteration++)
	{
		for(i=0; i < 5 - iteration; i++)
		{
			if (lotteryRand[i] > lotteryRand[i+1])
			{
				swap(lotteryRand[i],lotteryRand[i+1]);
			}
		}
	}
}

void bubblesortGuess(int playerNums[])
{
	int iteration;
	int i;
	for(iteration = 1; iteration < 5; iteration++)
	{
		for(i=0; i < 5 - iteration; i++)
		{
			if (playerNums[i] > playerNums[i+1])
			{
				swap(playerNums[i],playerNums[i+1]);
			}
		}
	}
}

