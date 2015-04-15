#!/bin/bash

#SBATCH -N 1

srun ../5/openmp_helloworld.x 8
