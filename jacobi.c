#include <stdio.h>
#include <mpi.h>
#include "global.h"

// Indexing macro for local pres arrays
#define LP(row,col) ((row)+border)*(local_width + 2*border) + ((col) + border)


// Distribute the diverg (bs) from rank 0 to all the processes
void distribute_diverg(){
	printf("SIZE: ", size);
}

// Gather the results of the computation at rank 0
void gather_pres(){

}

// Excahnge borders between processes during computation
void exchange_borders(){

}

// One jacobi iteration
void jacobi_iteration(){
	printf("north: %d south: %d east: %d west: %d \n", north, south, east, west);
	
}

// Solve linear system with jacobi method
void jacobi (int iter) {
	
    // Jacobi iterations
    for (int k=0; k<iter; k++) {	
	jacobi_iteration();
    }

}
