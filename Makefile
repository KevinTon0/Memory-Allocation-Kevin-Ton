# Author(s): Kevin Ton
# Edoras_username: cssc0846
# REDID(s): 817314271
# Class: CS480, Summer 2022
# Project #1: POSIX Threads
# Filename: Makefile

sim: main.cpp reqgen.h reqgen.cpp memall.h memall.cpp
	g++ $(CFLAGS) $? $(LDFLAGS) -o $@

clean:
	rm -f *.o core sim $(EXEC)

