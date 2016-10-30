INCLUDE_PATH =  -I"$$ROS_LOCATION/include/" -I"/home/marco/catkin_group_ws/src/t_men/roboscoop/roboscoop_lib/_cpp" -I"$$CATKIN_WORKSPACE/devel/include/" -I"$$ROBOLAB_ASEBA_PATH/asebaros/srv_gen/cpp/include/" -I"$$ROBOLAB_ASEBA_PATH/asebaros/msg_gen/cpp/include/"
SHELL = /bin/sh
CC = gcc
CPP = g++
CFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64 -DEIF_THREADS -DEIF_LINUXTHREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/home/marco/Eiffel_15.08/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64 -DEIF_THREADS -DEIF_LINUXTHREADS  -DWORKBENCH -I"/home/marco/Eiffel_15.08/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = -m elf_x86_64
CCLDFLAGS = -m64  
LDSHAREDFLAGS =  -m elf_x86_64 -shared -o
EIFLIB = "/home/marco/Eiffel_15.08/studio/spec/linux-x86-64/lib/libmtwkbench.a"
EIFTEMPLATES = /home/marco/Eiffel_15.08/studio/config/linux-x86-64/templates
LIBS = -lm -lpthread
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/home/marco/Eiffel_15.08/studio/spec/linux-x86-64/bin/x2c"
SHAREDLINK = ld
SHAREDLIBS = -lm
SHARED_SUFFIX = .so
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = driver.so 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C23_c.o 

OLDOBJECTS =  sp734.o sp734d.o ar741.o ar741d.o ty728.o ty728d.o ty729.o ty729d.o \
	ty726.o ty726d.o ty727.o ty727d.o ty730.o ty730d.o ty735.o ty735d.o \
	tr750.o tr750d.o bo752.o bo752d.o ar753.o ar753d.o fi751.o fi751d.o \
	dy756.o dy756d.o co746.o co746d.o dy757.o dy757d.o it739.o it739d.o \
	bo743.o bo743d.o it738.o it738d.o re742.o re742d.o rt732.o rt732d.o \
	rt733.o rt733d.o li744.o li744d.o cu745.o cu745d.o in737.o in737d.o \
	ba748.o ba748d.o se754.o se754d.o ac747.o ac747d.o rt731.o rt731d.o \
	re736.o re736d.o co749.o co749d.o na740.o na740d.o bi755.o bi755d.o \
	ch758.o ch758d.o 

all: Cobj23.o

Cobj23.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj23.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

