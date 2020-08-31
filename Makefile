#==========================================================
# C++ Compile and link
#==========================================================
PROGNAME := sample
INCDIR := include
SRCDIR := src
OUTDIR := build
TARGET := $(OUTDIR)/$(PROGNAME)
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(addprefix $(OUTDIR)/, $(patsubst %.cpp,%.o,$(SRCS)))

CC = c++
CFLAGS = -Wall -O2 -I $(INCDIR)

.PHONY: all run clean

all : $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OUTDIR)/%.o: %.cpp
	@if [ ! -e `dirname $@` ]; then mkdir -p `dirname $@`; fi
	$(CC) $(CFLAGS) -o $@  -c $<

run :
	./$(OUTDIR)/$(PROGNAME)

clean :
	rm -rf $(OUTDIR)/*
