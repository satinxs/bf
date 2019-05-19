CC=gcc
CARGS=-o bf -Wall
CARGS_RELEASE=-O3
SRC=$(wildcard *.c)

default: 
	$(CC) $(SRC) $(CARGS) $(CARGS_RELEASE)

tcc:
	tcc $(SRC) -o bf.exe

strip:
	strip --strip-all bf.exe

upx:
	upx --ultra-brute bf.exe

minimal: tcc strip upx

debug:
	$(CC) $(SRC) -DFULL_OPTIMIZATION $(CARGS) -g -O0 -fno-omit-frame-pointer