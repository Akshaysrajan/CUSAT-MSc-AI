//Program to perform set operations; union, intersection and difference.

#include<stdio.h>


void printSet(int set[], int size) {
    printf("{ ");
    for(int i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("}\n");
}

void  setUnion(int set1[], int size1, int set2[], int size2, int result[], int *resultSize){
    int k = 0;

    for (size_t i = 0; i < size1; i++)
    {
        result[k++] = set1[i]; //in each itereation the array size of result will increment by 1;
    }


    for (size_t i = 0; i < size2; i++)
    {
        int found = 0;
        for (size_t j = 0; j < size1; j++)
        {
            if (set2[i]== set1[j])
            {
                found = 1;
                break;
            } 
        }
        if(!found){
            result[k++] = set2[i];
        }     
    }
    *resultSize = k;
        
}

void setInteresection(int set1[], int size1, int set2[], int size2,int result[], int *resultSize){
    int k = 0 ;

    for (size_t i = 0; i < size1; i++)
    {
        for (size_t j = 0; j < size2; j++)
        {
            if (set1[i] == set2[j] )
            {
                result[k++] = set1[i];
                break;
            }
        }
        
    }
    *resultSize = k;
}

void setDifference(int set1[], int size1, int set2[], int size2, int result[], int *resultSize) {
    int k = 0;

    for(int i = 0; i < size1; i++) {
        int found = 0;
        for(int j = 0; j < size2; j++) {
            if(set1[i] == set2[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            result[k++] = set1[i];
        }
    }

    *resultSize = k;
}


int main(){

    int set1[] = {1,2,3,4,5};
    int set2[] = {4,7,2,8,6};
    int size1 = 5;
    int size2 = 5;

    int unionResult[10];
    int unionSize;
    int intersectionResult[5];
    int intersectionSize;
    int differenceResult[5];
    int differenceSize;



    setUnion(set1, size1, set2, size2, unionResult, &unionSize);
    printf("Union: ");
    printSet(unionResult, unionSize);

    setInteresection(set1, size1, set2, size2, intersectionResult, &intersectionSize);
    printf("Intersection: ");
    printSet(intersectionResult, intersectionSize);
    
    setDifference(set1, size1, set2, size2, differenceResult, &differenceSize);
    printf("Difference (set1 - set2): ");
    printSet(differenceResult, differenceSize);
    return 0;
}