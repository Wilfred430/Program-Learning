all:main
main:main.o func.o 
  g++ main.o func.o -o main
main.o:main.cpp func.h
  g++ -c main.cpp
func.o:func.cpp func.h
  g++ -c func.cpp
clean:
  rm -rf *.o main