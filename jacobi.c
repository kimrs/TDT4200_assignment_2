#include <stdio.h>
#include <mpi.h>
#include "global.h"

// Indexing macro for local pres arrays
#define LP(row,col) ((row)+border)*(local_width + 2*border) + ((col) + border)


// Distribute the diverg (bs) from rank 0 to all the processes
void distribute_diverg(){

}

// Gather the results of the computation at rank 0
void gather_pres(){

}

// Excahnge borders between processes during computation
void exchange_borders(){

}

// One jacobi iteration
void jacobi_iteration(){
	
}

// Solve linear system with jacobi method
void jacobi (int iter) {
	if(rank ==2)
		info();	
    // Jacobi iterations
    for (int k=0; k<iter; k++) {	
	jacobi_iteration();
    }

}

void info(){
	printf("0 1 \n2 3 \n4 5 \n6 7\n\n");
	printf("Rank: %d\n", rank);
	printf("Coordinates: %d, %d\n\n", coords[0], coords[1]);
	printf("Neighbours: \n");
	printf(" %2d \n%2d %2d\n %2d", north, west, east, south);
	printf("\n");  
}
