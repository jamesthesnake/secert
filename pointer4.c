
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int *pointerInt;
typedef int Array[5];
typedef pointerInt  IntPointer[5];


Initialzation (Array array, IntPointer pointerarray){


  int i =0;
         for (i=0; i<5; i++){
    srand(getpid()-i);
    array[i]= rand();
   
    pointerarray[i]=&array[i];
  }
}


void  printarray(Array array){


  int i;
  for ( i=0; i<5; i++){
    printf("%d :  %d\n",  i, array[i]);


  }

}

void printArrayPointer( IntPointer  pointerarray){
  int i;
  for ( i=0; i<5; i++){
    printf("%d :  %d\n",  i, *pointerarray[i]);


  }
}
void sortArray ( Array  array){
  
  int i;
  int j; 
  int flip;

  for(i=0;i<5;i++){
    for(j=0;j<4;j++){
      if(array[j]>array[j+1]){
	flip=array[j];
	array[j  ]=array[j+1];
        array[j+1]=flip;
      }
    

    }

  }
 
}

void sortPointerArray ( IntPointer array){




  int i;
  int j;
        pointerInt flip;


  for( i=0; i <5; i++){
    for( j=0; j <4; j++){
      if( *array[j]> *array[j+1]){
      flip= array[j];
     array[j]=array[j+1];
	array[j+1]=flip;
    
      }
    }
  }
}



int main (void){
  Array  array;
  IntPointer  pointerarray;

  printf("---- Initialized array of integers ----\n");
  Initialzation(array,pointerarray);
  printarray(array);
  
  printf("---- Sorted array of pointers ----\n") ; 
 
  sortPointerArray(pointerarray);
 
 
 printArrayPointer(pointerarray);
 printf("---- Sorted array of integers ----\n");
 
 sortArray(array);

 printarray(array);
 printf("---- Array of pointers ----\n");
 
 printArrayPointer(pointerarray);
 
 
  return(EXIT_SUCCESS) ;
}









