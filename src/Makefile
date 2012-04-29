BASEDIR=$(CURDIR)/../

BUILD_OBJECTS = \
	base.o \
	led.o \
	button.o


include ../Makefile.incl

# Tell make where the object files are for proper resolution of suffix rules
vpath %.o $(OBJ_DIR)

.cpp.o:
	$(CXX) -c $(ALL_CXXFLAGS) -o $(OBJ_DIR)/$(@) $(<)

.c.o:
	$(CC) -c $(ALL_CFLAGS) -o $(OBJ_DIR)/$(@) $(<)

.C.o:
	$(CC) -c $(ALL_CFLAGS) -o $(OBJ_DIR)/$(@) $(<)

MODULE = src

all::   $(BUILD_OBJECTS)
