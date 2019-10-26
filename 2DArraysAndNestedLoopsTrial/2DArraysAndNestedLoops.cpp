#include <iostream>

using namespace std;

int main() {

	int numGrid[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	/* sizeof是查看数据类型的byte大小，int型数据为4 byte。*/
	cout << sizeof(numGrid) << endl;		/*整个2D数组的byte大小*/		
	cout << sizeof(numGrid[0]) << endl;		/*一行的byte大小*/
	cout << sizeof(numGrid[0][0]) << endl;	/*一个元素的byte大小*/

	int row = sizeof(numGrid) / sizeof(numGrid[0]);
	int col = sizeof(numGrid[0]) / sizeof(numGrid[0][0]);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << numGrid[i][j] << endl;
		}
	}



	return 0;
}