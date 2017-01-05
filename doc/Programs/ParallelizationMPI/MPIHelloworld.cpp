//    First C++ example of MPI Hello world
using namespace std;
#include <mpi.h>
#include <iostream>
  
int main (int nargs, char* args[])
{
  int numprocs, my_rank;
  //   MPI initializations
  MPI_Init (&nargs, &args);
  MPI_Comm_size (MPI_COMM_WORLD, &numprocs);
  MPI_Comm_rank (MPI_COMM_WORLD, &my_rank);
  cout << "Hello world, I have  rank " << my_rank << " out of " << numprocs << endl;
  //  End MPI
  MPI_Finalize ();
  return 0;
}
