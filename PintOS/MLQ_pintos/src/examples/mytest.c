#include <stdio.h>
#include <syscall.h>
#include "threads/init.h"
#include "devices/timer.h"
#include "threads/malloc.h"
#include <lib/kernel/list.h>
//#include "threads/synch.h"
//#include "threads/thread.h"

int
main (int argc, char **argv)
{
  int i;
  printf("\n HEEEEREEEE");
  for (i = 0; i < argc; i++){
    printf ("%s ", argv[i]);
  }
  printf ("\n");

  return EXIT_SUCCESS;
}
