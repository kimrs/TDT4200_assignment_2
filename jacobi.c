#include <stdio.h>
#include <mpi.h>
#include "global.h"

// Indexing macro for local pres arrays
#define LP(row,col) ((row)+border)*(local_width + 2*border) + ((col) + border)


void distribute_diverg()
{
	//Blocking  sends to all processors
//	for(int i = 0; i < size; i++)
//		MPI_Send(diverg, sizeof(diverg), MPI_FLOAT, i, 0, cart_comm);

	/*MPI_Scatterv(
		diverg, 	//Send buffer
		1, 		//sendCounts
		-1, 		//displacements
		MPI_FLOAT, 	//Sendtype
		pres, 		//receive buffer 	out
		1,		//receive count
		MPI_FLOAT, 	//receivetype
		0, 		//root
		cart_comm); 	//communicator
*/
/*		for(int i = 0; i < subdomainWidth; i++)
	{
		for(int j = 0; j < subdomainHeight; j++)	
			diverg_to_send[i][j] = diverg[i * subdomainWidth * (coords[0] + 1)]
					[j * subdomainHeight * (coords[1] + 1)];
	}

	if(rank == 3)
	for(int i = 0; i < subdomainWidth; i++){
		for(int j = 0; j < subdomainHeight; j++)
			printf("%d, %d\n", diverg_to_send[i][j]);
		printf("\n");
	}
*/

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
// Distribute the diverg (bs) from rank 0 to all the processes
MPI_Request req[size];

	//Deler ut en bit av omrÃdet til hver process
	if(rank == 0)
		distribute_diverg();
	MPI_Irecv(&local_diverg, 
			sizeof(diverg), 
			MPI_FLOAT, 
			0, //fra prosessor 0
			0,
			cart_comm,
			req + rank);
	
	MPI_Waitall(size, req, MPI_STATUSES_IGNORE);
	printf("Local_diverg: %d\n", local_diverg);

    // Jacobi iterations
    for (int k=0; k<iter; k++) {	
	
    }
	if(rank == 0)
		gather_pres();

}
