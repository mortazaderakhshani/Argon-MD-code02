Last login: Mon Apr 27 21:38:19 on ttys005
-bash: ulimit: open files: cannot modify limit: Invalid argument
mir:Ar-test mortaza$  ./liquid_argon_mc.x liquid_argon_mc.cfg test.log &
[1] 45495
mir:Ar-test mortaza$ jobs
[1]+  Stopped                 ./liquid_argon_mc.x liquid_argon_mc.cfg test.log
mir:Ar-test mortaza$ jobs
[1]+  Stopped                 ./liquid_argon_mc.x liquid_argon_mc.cfg test.log
mir:Ar-test mortaza$ cancel 45495
cancel: cancel-job failed: Job #45495 does not exist.
mir:Ar-test mortaza$ jobs
[1]+  Stopped                 ./liquid_argon_mc.x liquid_argon_mc.cfg test.log
mir:Ar-test mortaza$ clear











mir:Ar-test mortaza$ ls
Makefile            liquid_argon_mc.cfg liquid_argon_mc.x   stringlib.h
liquid_argon_mc.c   liquid_argon_mc.o   stringlib.c         stringlib.o
mir:Ar-test mortaza$ ls -lhtr
total 120
-rw-r--r--  1 mortaza  staff   262B Apr 21 10:04 stringlib.h
-rw-r--r--  1 mortaza  staff   2.7K Apr 21 10:04 stringlib.c
-rw-r--r--  1 mortaza  staff   103B Apr 21 10:04 liquid_argon_mc.cfg
-rw-r--r--  1 mortaza  staff   267B Apr 21 10:04 Makefile
-rw-r--r--  1 mortaza  staff   6.1K Apr 27 21:26 liquid_argon_mc.c
-rw-r--r--  1 mortaza  staff   5.1K Apr 27 21:29 stringlib.o
-rw-r--r--  1 mortaza  staff   5.0K Apr 27 21:29 liquid_argon_mc.o
-rwxr-xr-x  1 mortaza  staff    17K Apr 27 21:29 liquid_argon_mc.x
mir:Ar-test mortaza$ mv liquid_argon_mc.x 
usage: mv [-f | -i | -n] [-v] source target
       mv [-f | -i | -n] [-v] source ... directory
mir:Ar-test mortaza$ rm liquid_argon_mc.x
mir:Ar-test mortaza$ rm stringlib.o
mir:Ar-test mortaza$ rm liquid_argon_mc.o
mir:Ar-test mortaza$ ls
Makefile            liquid_argon_mc.cfg stringlib.h
liquid_argon_mc.c   stringlib.c
mir:Ar-test mortaza$ vi Makefile 
mir:Ar-test mortaza$ ls -lhtr
total 56
-rw-r--r--  1 mortaza  staff   262B Apr 21 10:04 stringlib.h
-rw-r--r--  1 mortaza  staff   2.7K Apr 21 10:04 stringlib.c
-rw-r--r--  1 mortaza  staff   103B Apr 21 10:04 liquid_argon_mc.cfg
-rw-r--r--  1 mortaza  staff   6.1K Apr 27 21:26 liquid_argon_mc.c
-rw-r--r--  1 mortaza  staff   267B Apr 27 21:43 Makefile~
-rw-r--r--  1 mortaza  staff   267B Apr 27 21:44 Makefile
mir:Ar-test mortaza$ rm Makefile~
mir:Ar-test mortaza$ ls
Makefile            liquid_argon_mc.cfg stringlib.h
liquid_argon_mc.c   stringlib.c
mir:Ar-test mortaza$ ls -lhtr
total 48
-rw-r--r--  1 mortaza  staff   262B Apr 21 10:04 stringlib.h
-rw-r--r--  1 mortaza  staff   2.7K Apr 21 10:04 stringlib.c
-rw-r--r--  1 mortaza  staff   103B Apr 21 10:04 liquid_argon_mc.cfg
-rw-r--r--  1 mortaza  staff   6.1K Apr 27 21:26 liquid_argon_mc.c
-rw-r--r--  1 mortaza  staff   267B Apr 27 21:44 Makefile
mir:Ar-test mortaza$ vi liquid_argon_mc.cfg 
mir:Ar-test mortaza$ make
make: *** No rule to make target `liquid_argon_md.c', needed by `mc'.  Stop.
mir:Ar-test mortaza$ Make
make: *** No rule to make target `liquid_argon_md.c', needed by `mc'.  Stop.
mir:Ar-test mortaza$ mv liquid_argon_mc.c liquid_argon_md.c
mir:Ar-test mortaza$ make
gcc -c  liquid_argon_md.c stringlib.c -O3 -ftree-vectorize 
gcc liquid_argon_md.o stringlib.o -O3 -ftree-vectorize -o liquid_argon_md.x
mir:Ar-test mortaza$ ls
Makefile             liquid_argon_md.c    stringlib.c
liquid_argon_mc.cfg  liquid_argon_md.o    stringlib.h
liquid_argon_mc.cfg~ liquid_argon_md.x    stringlib.o
mir:Ar-test mortaza$ ./liquid_argon_md.x < liquid_argon_md.cfg > test.log
-bash: liquid_argon_md.cfg: No such file or directory
mir:Ar-test mortaza$ ls -lhtr
total 128
-rw-r--r--  1 mortaza  staff   262B Apr 21 10:04 stringlib.h
-rw-r--r--  1 mortaza  staff   2.7K Apr 21 10:04 stringlib.c
-rw-r--r--  1 mortaza  staff   103B Apr 21 10:04 liquid_argon_mc.cfg~
-rw-r--r--  1 mortaza  staff   6.1K Apr 27 21:26 liquid_argon_md.c
-rw-r--r--  1 mortaza  staff   267B Apr 27 21:44 Makefile
-rw-r--r--  1 mortaza  staff   101B Apr 27 21:46 liquid_argon_mc.cfg
-rw-r--r--  1 mortaza  staff   5.1K Apr 27 21:46 stringlib.o
-rwxr-xr-x  1 mortaza  staff    17K Apr 27 21:46 liquid_argon_md.x
-rw-r--r--  1 mortaza  staff   5.0K Apr 27 21:46 liquid_argon_md.o
mir:Ar-test mortaza$ mv liquid_argon_mc.cfg liquid_argon_md.cfg
mir:Ar-test mortaza$ ./liquid_argon_md.x < liquid_argon_md.cfg > test.log
mir:Ar-test mortaza$ ls -lhtr
total 136
-rw-r--r--  1 mortaza  staff   262B Apr 21 10:04 stringlib.h
-rw-r--r--  1 mortaza  staff   2.7K Apr 21 10:04 stringlib.c
-rw-r--r--  1 mortaza  staff   103B Apr 21 10:04 liquid_argon_mc.cfg~
-rw-r--r--  1 mortaza  staff   6.1K Apr 27 21:26 liquid_argon_md.c
-rw-r--r--  1 mortaza  staff   267B Apr 27 21:44 Makefile
-rw-r--r--  1 mortaza  staff   101B Apr 27 21:46 liquid_argon_md.cfg
-rw-r--r--  1 mortaza  staff   5.1K Apr 27 21:46 stringlib.o
-rwxr-xr-x  1 mortaza  staff    17K Apr 27 21:46 liquid_argon_md.x
-rw-r--r--  1 mortaza  staff   5.0K Apr 27 21:46 liquid_argon_md.o
-rw-r--r--  1 mortaza  staff   216B Apr 27 21:47 test.log
mir:Ar-test mortaza$ vi test.log
mir:Ar-test mortaza$ cd ..
mir:Documents mortaza$ cd Ar-test-02
mir:Ar-test-02 mortaza$ ls
Makefile             liquid_argon_md.o    stringlib.o
liquid_argon_mc.cfg~ liquid_argon_md.x    test.log
liquid_argon_md.c    stringlib.c
liquid_argon_md.cfg  stringlib.h
mir:Ar-test-02 mortaza$ ls -lhtr
total 136
-rw-r--r--  1 mortaza  staff   262B Apr 21 10:04 stringlib.h
-rw-r--r--  1 mortaza  staff   2.7K Apr 21 10:04 stringlib.c
-rw-r--r--  1 mortaza  staff   103B Apr 21 10:04 liquid_argon_mc.cfg~
-rw-r--r--  1 mortaza  staff   6.1K Apr 27 21:26 liquid_argon_md.c
-rw-r--r--  1 mortaza  staff   267B Apr 27 21:44 Makefile
-rw-r--r--  1 mortaza  staff   101B Apr 27 21:46 liquid_argon_md.cfg
-rw-r--r--  1 mortaza  staff   5.1K Apr 27 21:46 stringlib.o
-rwxr-xr-x  1 mortaza  staff    17K Apr 27 21:46 liquid_argon_md.x
-rw-r--r--  1 mortaza  staff   5.0K Apr 27 21:46 liquid_argon_md.o
-rw-r--r--  1 mortaza  staff   216B Apr 27 21:47 test.log
mir:Ar-test-02 mortaza$ rm test.log liquid_argon_md.o 
mir:Ar-test-02 mortaza$ ls -lhtr
total 112
-rw-r--r--  1 mortaza  staff   262B Apr 21 10:04 stringlib.h
-rw-r--r--  1 mortaza  staff   2.7K Apr 21 10:04 stringlib.c
-rw-r--r--  1 mortaza  staff   103B Apr 21 10:04 liquid_argon_mc.cfg~
-rw-r--r--  1 mortaza  staff   6.1K Apr 27 21:26 liquid_argon_md.c
-rw-r--r--  1 mortaza  staff   267B Apr 27 21:44 Makefile
-rw-r--r--  1 mortaza  staff   101B Apr 27 21:46 liquid_argon_md.cfg
-rw-r--r--  1 mortaza  staff   5.1K Apr 27 21:46 stringlib.o
-rwxr-xr-x  1 mortaza  staff    17K Apr 27 21:46 liquid_argon_md.x
mir:Ar-test-02 mortaza$ rm stringlib.o liquid_argon_mc.cfg~ 
mir:Ar-test-02 mortaza$ rm stringlib.o
rm: stringlib.o: No such file or directory
mir:Ar-test-02 mortaza$ ls
Makefile            liquid_argon_md.cfg stringlib.c
liquid_argon_md.c   liquid_argon_md.x   stringlib.h
mir:Ar-test-02 mortaza$ rm liquid_argon_md.x
mir:Ar-test-02 mortaza$ ls -lhtr
total 48
-rw-r--r--  1 mortaza  staff   262B Apr 21 10:04 stringlib.h
-rw-r--r--  1 mortaza  staff   2.7K Apr 21 10:04 stringlib.c
-rw-r--r--  1 mortaza  staff   6.1K Apr 27 21:26 liquid_argon_md.c
-rw-r--r--  1 mortaza  staff   267B Apr 27 21:44 Makefile
-rw-r--r--  1 mortaza  staff   101B Apr 27 21:46 liquid_argon_md.cfg
mir:Ar-test-02 mortaza$ vi liquid_argon_md.c
mir:Ar-test-02 mortaza$ make
gcc -c  liquid_argon_md.c stringlib.c -O3 -ftree-vectorize 
liquid_argon_md.c: In function 'read_cfg_file':
liquid_argon_md.c:216:25: error: 'energy' undeclared (first use in this function)
  printf("Energy: %d\n",*energy);
                         ^
liquid_argon_md.c:216:25: note: each undeclared identifier is reported only once for each function it appears in
make: *** [mc] Error 1
mir:Ar-test-02 mortaza$ vi liquid_argon_md.c
mir:Ar-test-02 mortaza$ make
gcc -c  liquid_argon_md.c stringlib.c -O3 -ftree-vectorize 
liquid_argon_md.c: In function 'main':
liquid_argon_md.c:38:9: error: redeclaration of 'energy' with no linkage
  double energy;   // energy of the system
         ^
liquid_argon_md.c:27:9: note: previous declaration of 'energy' was here
  double energy;   //Lennard-Jonse Energy
         ^
liquid_argon_md.c: In function 'read_cfg_file':
liquid_argon_md.c:217:25: error: 'energy' undeclared (first use in this function)
  printf("Energy: %d\n",*energy);
                         ^
liquid_argon_md.c:217:25: note: each undeclared identifier is reported only once for each function it appears in
make: *** [mc] Error 1
mir:Ar-test-02 mortaza$ vi liquid_argon_md.c
mir:Ar-test-02 mortaza$ make
gcc -c  liquid_argon_md.c stringlib.c -O3 -ftree-vectorize 
liquid_argon_md.c: In function 'read_cfg_file':
liquid_argon_md.c:216:25: error: 'energy' undeclared (first use in this function)
  printf("Energy: %d\n",*energy);
                         ^
liquid_argon_md.c:216:25: note: each undeclared identifier is reported only once for each function it appears in
make: *** [mc] Error 1
mir:Ar-test-02 mortaza$ vi liquid_argon_md.c
mir:Ar-test-02 mortaza$ make
gcc -c  liquid_argon_md.c stringlib.c -O3 -ftree-vectorize 
liquid_argon_md.c: In function 'main':
liquid_argon_md.c:48:66: error: 'nIter' undeclared (first use in this function)
  read_cfg_file(&nAtoms, &temp, &box, trajFileName, logFileName, &nIter, &deltaWrite, &deltaX);
                                                                  ^
liquid_argon_md.c:48:66: note: each undeclared identifier is reported only once for each function it appears in
liquid_argon_md.c:48:87: error: 'deltaX' undeclared (first use in this function)
  read_cfg_file(&nAtoms, &temp, &box, trajFileName, logFileName, &nIter, &deltaWrite, &deltaX);
                                                                                       ^
liquid_argon_md.c:54:2: error: 'atomEnergy' undeclared (first use in this function)
  atomEnergy = (double**) calloc(nAtoms,sizeof(double*));
  ^
liquid_argon_md.c:55:2: error: 'newEnergy' undeclared (first use in this function)
  newEnergy = (double*) malloc(nAtoms*sizeof(double));
  ^
liquid_argon_md.c: In function 'lennard_jones':
liquid_argon_md.c:113:12: error: 'logOut' undeclared (first use in this function)
    fprintf(logOut,"Energy: %d\n", energy);
            ^
liquid_argon_md.c: In function 'read_cfg_file':
liquid_argon_md.c:208:25: error: 'energy' undeclared (first use in this function)
  printf("Energy: %d\n",*energy);
                         ^
make: *** [mc] Error 1
mir:Ar-test-02 mortaza$ vi liquid_argon_md.c
mir:Ar-test-02 mortaza$ make
gcc -c  liquid_argon_md.c stringlib.c -O3 -ftree-vectorize 
liquid_argon_md.c: In function 'main':
liquid_argon_md.c:48:66: error: 'nIter' undeclared (first use in this function)
  read_cfg_file(&nAtoms, &temp, &box, trajFileName, logFileName, &nIter, &deltaWrite, &deltaX);
                                                                  ^
liquid_argon_md.c:48:66: note: each undeclared identifier is reported only once for each function it appears in
liquid_argon_md.c:48:87: error: 'deltaX' undeclared (first use in this function)
  read_cfg_file(&nAtoms, &temp, &box, trajFileName, logFileName, &nIter, &deltaWrite, &deltaX);
                                                                                       ^
liquid_argon_md.c:54:2: error: 'atomEnergy' undeclared (first use in this function)
  atomEnergy = (double**) calloc(nAtoms,sizeof(double*));
  ^
liquid_argon_md.c:55:2: error: 'newEnergy' undeclared (first use in this function)
  newEnergy = (double*) malloc(nAtoms*sizeof(double));
  ^
liquid_argon_md.c: In function 'lennard_jones':
liquid_argon_md.c:113:12: warning: passing argument 1 of 'fprintf' from incompatible pointer type
    fprintf("Energy: %d\n", energy);
            ^
In file included from liquid_argon_md.c:1:0:
/usr/include/stdio.h:244:6: note: expected 'struct FILE *' but argument is of type 'char *'
 int  fprintf(FILE * __restrict, const char * __restrict, ...) __printflike(2, 3);
      ^
liquid_argon_md.c:113:4: error: incompatible type for argument 2 of 'fprintf'
    fprintf("Energy: %d\n", energy);
    ^
In file included from liquid_argon_md.c:1:0:
/usr/include/stdio.h:244:6: note: expected 'const char *' but argument is of type 'double'
 int  fprintf(FILE * __restrict, const char * __restrict, ...) __printflike(2, 3);
      ^
liquid_argon_md.c: In function 'read_cfg_file':
liquid_argon_md.c:208:25: error: 'energy' undeclared (first use in this function)
  printf("Energy: %d\n",*energy);
                         ^
make: *** [mc] Error 1
mir:Ar-test-02 mortaza$ vi liquid_argon_md.c
mir:Ar-test-02 mortaza$ make
gcc -c  liquid_argon_md.c stringlib.c -O3 -ftree-vectorize 
liquid_argon_md.c: In function 'lennard_jones':
liquid_argon_md.c:119:12: error: 'logOut' undeclared (first use in this function)
    fprintf(logOut,"Energy: %d\n", energy);
            ^
liquid_argon_md.c:119:12: note: each undeclared identifier is reported only once for each function it appears in
liquid_argon_md.c: In function 'read_cfg_file':
liquid_argon_md.c:214:25: error: 'energy' undeclared (first use in this function)
  printf("Energy: %d\n",*energy);
                         ^
make: *** [mc] Error 1
mir:Ar-test-02 mortaza$ vi liquid_argon_md.c
mir:Ar-test-02 mortaza$ make
gcc -c  liquid_argon_md.c stringlib.c -O3 -ftree-vectorize 
liquid_argon_md.c: In function 'read_cfg_file':
liquid_argon_md.c:214:25: error: 'energy' undeclared (first use in this function)
  printf("Energy: %d\n",*energy);
                         ^
liquid_argon_md.c:214:25: note: each undeclared identifier is reported only once for each function it appears in
make: *** [mc] Error 1
mir:Ar-test-02 mortaza$ vi liquid_argon_md.c
mir:Ar-test-02 mortaza$ make
gcc -c  liquid_argon_md.c stringlib.c -O3 -ftree-vectorize 
gcc liquid_argon_md.o stringlib.o -O3 -ftree-vectorize -o liquid_argon_md.x
mir:Ar-test-02 mortaza$ ls
Makefile            liquid_argon_md.c   liquid_argon_md.cfg liquid_argon_md.c~  liquid_argon_md.o   liquid_argon_md.x   stringlib.c         stringlib.h         stringlib.o
mir:Ar-test-02 mortaza$ iv liquid_argon_md.c
-bash: iv: command not found
mir:Ar-test-02 mortaza$ vi liquid_argon_md.c

                }
        }
}

void read_cfg_file(int *nAtoms, double *temp, double *box, char *trajFileName, char *logFileName, int *nIter, int *deltaWrite, double *deltaX) {

        char buffer[1024];
        char tempBuffer[1024];
        char check[15];
        char *firstWord;
        double *rCut;

        while (fgets(buffer,1024,stdin) != NULL) {

                strncpy(tempBuffer,buffer,1024);
        firstWord=string_firstword(tempBuffer);
//              printf ("First word = %s\n",firstWord);
                if (strncmp(firstWord,"nAtoms",6)==0) {
                        *nAtoms = atoi(string_secondword(buffer));
                } else if (strncmp(firstWord,"nIter",5)==0) {
                        *nIter = atoi(string_secondword(buffer));
                } else if (strncmp(firstWord,"deltaWrite",10)==0) {
                        *deltaWrite = atoi(string_secondword(buffer));
                } else if (strncmp(firstWord,"temperature",11)==0) {
                        *temp = atof(string_secondword(buffer));
//              } else if (strncmp(firstWord,"rcut",4)==0) {
//                      *rCut = atof(string_secondword(buffer));
//              } else if (strncmp(firstWord,"box",3)==0) {
//                      *box = atof(string_secondword(buffer));
                } else if (strncmp(firstWord,"deltaX",6)==0) {
                        *deltaX = atof(string_secondword(buffer));
                } else if (strncmp(firstWord,"trajFile",8)==0) {
                        strcpy(trajFileName,string_secondword(buffer));
                } else if (strncmp(firstWord,"logFile",7)==0) {
                        strcpy(logFileName,string_secondword(buffer));
                }


        }

        // Print log file info
        printf("Trajectory file: %s\n",trajFileName);
        printf("log file: %s\n",logFileName);
        printf("nAtoms: %d\n",*nAtoms);
        printf("Temperature: %f\n",*temp);
        printf("nIter: %d\n",*nIter);
        printf("deltaWrite: %d\n",*deltaWrite);
//      printf("box dimension: %f\n", *box);
//      printf("cutoff: %f\n",*rCut);


}


void write_xyz_step(double **coord, int nAtoms, int iter, double box, FILE *xyzOut) {

        int i, j, k;
        int atom;

        fprintf(xyzOut,"%d\n",nAtoms);
        fprintf(xyzOut,"Step %d box %8.3f %8.3f %8.3f\n",iter, box, box, box);
        for (atom=0;atom<nAtoms;atom++) {

                fprintf(xyzOut,"Ar %12.6f%12.6f%12.6f\n",coord[atom][0],coord[atom][1],coord[atom][2]);

        }


}

"liquid_argon_md.c" 237L, 6372C                                                                                                                                                                                                        214,2-9       Bot
