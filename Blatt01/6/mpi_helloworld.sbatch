#!/bin/bash

#SBATCH -N 2

#SBATCH -n 4

srun ../4/mpi_helloworld.x
