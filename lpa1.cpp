#include <iostream>

int currentSum = 0;
int highestSum = 0;

int maximumSum(int size, int matrix[][]) {

    for (int rectangleX = 1; rectangleX < size; rectangleSize++) {
        currentSum = sumSubRectangle(size, matrix);
        if (currentSum > highestSum) {
            highestSum = currentSum;
        }
    }
}

int sumSubRectangle(int sizeX, int sizeY, int matrix[][]){
    int arraySize = sizeof(matrix);
    for(int i = 0; i < arraySize; i++) {
        for(int j = 0; j < arraySize; j++){
            if(i < sizeX && j < sizeY){
                for(int k = i; k < sizeX; k++){
                    for (int l = j; l < sizeY; l++){
                        currentSum += matrix[k][l];
                    }
                }
            }
        }
    }   
}