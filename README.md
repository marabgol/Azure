# Azure


source  /opt/intel/compilers_and_libraries_2018/linux/bin/compilervars.sh intel64
source  /opt/intel/compilers_and_libraries_2018/linux/mpi/intel64/bin/mpivars.sh 

mpircc hello.c -o hello.exe

export I_MPI_FABRICS=shm:dapl
export I_MPI_DAPL_PROVIDER=ofa-v2-ib0
export I_MPI_DYNAMIC_CONNECTION=0 

source /opt/intel/compilers_and_libraries_2016/linux/mpi/intel64/bin/mpivars.sh


or

source /opt/intel/compilers_and_libraries_2016/linux/mpi/intel64/bin/mpivars.sh
export I_MPI_FABRICS=shm:dapl
export I_MPI_DAPL_PROVIDER=ofa-v2-ib0
export I_MPI_DYNAMIC_CONNECTION=0

mpirun -genvall -host IP1,IP2   -perhost 1 -np 2 /opt/intel/compilers_and_libraries_2016/linux/mpi/intel64/bin/IMB-MPI1 -off_cache -1 BiBand

