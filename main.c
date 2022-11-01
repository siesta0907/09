#include <stdio.h>
#define ROWS 3
#define COLS 3
int main(void)
{
	int A[ROWS][COLS] = { 
	 {2, 3, 0},
	 {8, 9, 1},
	 {7, 0, 5} };
	int B[ROWS][COLS] = { 
	 {1, 0, 0},
	 {0, 1, 0},
	 {0, 0, 1} };
	
	int C[ROWS][COLS]; 
	addMatrix(A, B, C);
	printMatrix(C);
	
	return 0;
}


void addMatrx(int A[][COLS], int B[][COLS], int C[][COLS])
{
	int i,j;
	for (i =0; i<COLS; i++){
		for (j =0; j<ROWS; j++){
			C[i][j] = A[i][j]+B[i][j];
		}
	} 
}
void printMatrx(int A[][COLS])
{
	int i,j;
	for (i =0; i<COLS; i++){
		for (j =0; j<ROWS; j++){
			printf("%d",A[i][j]); 
		}
		printf("\n");
	}
	
}
