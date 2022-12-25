SHELL := /bin/bash
MAKEFLAGS := --silent --no-print-directory

CC=gcc
CFLAGS=-Wall -pedantic -ansi
LDFLAGS= -pthread  -lpthread

all: build exec

    build: 
    gcc "cache-process.c" -o cache -lpthread

    exec:
    ./cache
