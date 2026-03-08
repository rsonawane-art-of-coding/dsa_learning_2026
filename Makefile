TARGET:application

application.o:applications/application.c
	gcc -g -c -I applications/ applications/application.c -o applications/application.o

dll.o:dll.c
	gcc -g -c -I data_structure/dll data_structure/dll/dll.c -o data_structure/dll/dll.o

application:application.o libdll.a
	gcc -g applications/application.o -o application -L ./data_structure/dll/ -ldll

libdll.a:data_structure/dll/dll.o
	ar rs data_structure/dll/libdll.a data_structure/dll/dll.o

clean:
	rm data_structure/dll/dll.o
	rm data_structure/dll/libdll.a
	rm applications/application.o
	rm application




