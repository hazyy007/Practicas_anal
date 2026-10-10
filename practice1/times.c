/**
 *
 * Descripcion: Implementation of time measurement functions
 *
 * Fichero: times.c
 * Autor: Carlos Aguirre Maeso
 * Version: 1.0
 * Fecha: 16-09-2019
 *
 */

#include "times.h"
#include "sorting.h"
#include "permutations.h"

/***************************************************/
/* Function: average_sorting_time Date:            */
/*                                                 */
/* Your documentation                              */
/***************************************************/
short average_sorting_time(pfunc_sort metodo, 
                              int n_perms,
                              int N, 
                              PTIME_AA ptime)
{
int ** perm;
double time, average_ob;
int min_ob, max_ob;
clock_t ini;
clock_t fin;
int ret, j;

perm = generate_permutations(n_perms, N);
/*Control de errores y gestion de memoria*/

ini = clock();
  /*Control de errores y gestion de memoria*/
for (j = 0; j < n_perms; j++)
{
  ret = metodo(perm[j], 0, N-1);
  if (ret < min_ob) min_ob = ret;

  else if(ret > max_ob) max_ob = ret;

  average_ob += ret/(double)n_perms;
}

fin = clock();
ptime->N = N
ptime->n_elems = n
ptime->
ptime->
ptime->
ptime->
}

/***************************************************/
/* Function: generate_sorting_times Date:          */
/*                                                 */
/* Your documentation                              */
/***************************************************/
short generate_sorting_times(pfunc_sort method, char* file, 
                                int num_min, int num_max, 
                                int incr, int n_perms)
{
  PTIME_AA times;
  int j;
  int num;
  
  


  for(j=num_min; j < num_max; j++){
    average_sorting_time(method, n_perms)
  }
}

/***************************************************/
/* Function: save_time_table Date:                 */
/*                                                 */
/* Your documentation                              */
/***************************************************/
short save_time_table(char* file, PTIME_AA ptime, int n_times)
{
  FILE *fp;
  int j;

  fp = fopen(file, "w");
  if(!fp){
    return ERR;
  }

  fprintf(fp, "%ld %i %d %d %d\n", time[j].N,time[j].time, );

  fclose(fp);

  return OK;

}


