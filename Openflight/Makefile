  # Executable Name
EXENAME = flight

# Object Types
OBJS = main.o openflights.o fmap.o
#OBJS_DIR = .objs

# Compilation Flags
CXX = clang++
CXXFLAGS = $(CS225) -std=c++14 -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++14 -stdlib=libc++ -lc++abi -lm

# Define Makefile Rules
.PHONY: all test clean output_msg

all : $(EXENAME)

output_msg: ; $(CLANG_VERSION_MSG)

$(EXENAME): output_msg $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

main.o: main.cpp openflights.cpp fmap.cpp
	$(CXX) $(CXXFLAGS) main.cpp

clean:
	-rm -f *.o $(EXENAME) test