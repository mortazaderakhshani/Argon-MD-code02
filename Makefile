CXX = g++
CC = gcc
LAPACK = /Users/mortaza/lib
OPTS = -O3 -ftree-vectorize

mc: liquid_argon_md.c stringlib.c stringlib.h
	$(CC) -c  liquid_argon_md.c stringlib.c $(OPTS) 
	$(CC) liquid_argon_md.o stringlib.o $(OPTS) -o liquid_argon_md.x
#	cp sasa_force.x ../3app

