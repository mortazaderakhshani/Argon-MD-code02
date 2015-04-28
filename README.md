Necessary files:
liquid_argon_md.c
stringlib.c
stribglib.h
Makefile
To compile:
make
To run:
./liquid_argon_md.x < [config file] > [timing log file]
Configuration file should contain values for the following keywords:
trajFile [trajectory file name]
logFile [energy log information file name]
temperature [temperature value (double)]
nAtoms [number of atoms (int)]
