#!/bin/bash

#SBATCH -N 4

#SBATCH --ntasks-per-node 1

#SBATCH -o hostname.out

srun hostname
