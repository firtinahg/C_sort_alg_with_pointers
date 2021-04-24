#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int* selection_sort(int selection_sort_elems[] , int );


int main(int argc, char *argv[]) {
	
int selection_sort_alg_elems[] = {25 , 15 , 16 , 26 , 49 , 1542 , 63 , 15 , 26 , 25 , 74 , 96 , 154};
int size_of_sel_alg_elems = sizeof selection_sort_alg_elems / sizeof(selection_sort_alg_elems[0]);

int *p ;
p =  selection_sort(selection_sort_alg_elems , size_of_sel_alg_elems);
int i = 0 ;
for(i ; i < size_of_sel_alg_elems ; i++){
	printf("%d. value= %d\n" , i , *p);
	*p++;
}
	return 0;

}

int* selection_sort(int selection_sort_elems[] , int size_of_sel_alg_elems){

int i;

for(i=0 ; i< size_of_sel_alg_elems ; i++){
	
int k ;
for(k = i+1 ; k < size_of_sel_alg_elems; k++){
	if(selection_sort_elems[k] >selection_sort_elems[i]){
		int temp = selection_sort_elems[i];
		selection_sort_elems[i] = selection_sort_elems[k];
		selection_sort_elems[k] = temp;
	}	
}
}
	
  return selection_sort_elems;
} 




