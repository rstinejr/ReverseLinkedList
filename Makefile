##############
# Project-specific part of Make script.
# Template build commands are in Makefile.inc.
#
# Targets:
#     all   - build $(PGM)
#     run   - build and run $(PGM)
#     test  - build and run unit tests.
#     clean - delete all generated files.
#
INCS = include
MY_CFLAGS = -c -g -O0 -Wall -I$(INCS)
MY_LDFLAGS = -lrt

PGM  = reverse

.PHONY:	run

include Makefile.inc
		
run:	$(PGM)
	./$(PGM)
