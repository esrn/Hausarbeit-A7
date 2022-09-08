application_staticlib: staticlib
	gcc main.c -lrechteckgenerator_staticlib -o main.elf -lm

staticlib:
	gcc rechteckgenerator_staticlib.c -c
	ar -crs librechteckgenerator_staticlib.a rechteckgenerator_staticlib.o
	sudo cp rechteckgenerator_staticlib.h /usr/include
	sudo cp librechteckgenerator_staticlib.a /usr/lib
