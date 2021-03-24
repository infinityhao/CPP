// Guess the location of the ships and attack it!
#include <iostream>
#include <ctime>
using namespace std;

const int row = 10;
const int col = 10;
int maxships = 10;
int matrix[row][col];

void Clear()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = 0;
		}
	}
}
void Show()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
}
void SetShips()
{
	int s = 0;
	while (s < maxships)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (matrix[x][y] != 1)
		{
			s++;
			matrix[x][y] = 4;
		}
	}
}
int NumberofShips()
{
	int n = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (matrix[i][j] == 4)
			{
				n++;
			}
		}
	}
	return n;
}

void Attack(int x, int y)
{
	if (matrix[x][y] == 4)
	{
		cout << "Captain, you had hit the target!" << endl;
		matrix[x][y] = 7;
	}
	else
		cout << "Captain, there ain't ships at that position" << endl;
}
int main() 
{
	// srand(time(NULL)); this is too difficult!
	int x, y;
	char c = 'y';
	Clear();
	SetShips();

	while (c == 'Y' || c == 'y')
	{
		cout << endl << "Captain, please enter position x and y to attack" << endl; cin >> x >> y;
		Attack(x, y);
		cout << "The number of ships remaining: " << NumberofShips();
		cout << ". Continue? y/n" << endl; cin >> c;
	}
	Show();
	cout << "Game Over!, 4 is the remained enemy ships and 7 is the ship you sank" << endl;
	system("pause");
	return 0;
}