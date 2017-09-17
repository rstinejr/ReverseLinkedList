##############
# Include file containing generic portion of 
# Makefile for straight-C projects.
#
# Targets:
#     all   - build $(PGM)
#     test  - build and run unit tests.
#     clean - delete all generated files.
#
# Variables INCS, MY_CFLAGS, MY_LDFLAGS, and target "run"
# are defined in the parent Makefile.
#
##############

SRC  = $(shell ls src/*.c)
OBJS = $(SRC:src/%.c=objs/%.o)

.PHONY:	clean test

all: $(PGM)

-include deps/*

objs/%.o:	src/%.c
	@[ -d objs ] || mkdir objs
	@[ -d deps ] || mkdir deps
	gcc $(MY_CFLAGS) -MMD -MF"$(@:objs/%.o=deps/%.d)" -o"$@" "$<"

$(PGM):	$(OBJS)
	gcc -o $@ $(OBJS) $(MY_LDFLAGS) 

test:	$(OBJS)
	make -C test test
		
clean:
	rm -rf deps objs $(PGM)
	make -C test clean
