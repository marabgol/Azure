#include <stdio.h> 
#include "mpi.h" 
#include <unistd.h> 
    int main(int argc, char** argv){ 
    int my_PE_num; 
        MPI_Init(&argc, &argv); 
    int world_size; 
        MPI_Comm_size(MPI_COMM_WORLD, &world_size); 
        MPI_Comm_rank(MPI_COMM_WORLD, &my_PE_num); 
    int name_len; 
    char processor_name[MPI_MAX_PROCESSOR_NAME]; 
        MPI_Get_processor_name(processor_name, &name_len); 
    sleep(100); 
    printf("Hello from  %d. %d %s\n", my_PE_num,world_size,processor_name); 
        MPI_Finalize(); 
} 
