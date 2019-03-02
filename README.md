# CreateCdll
for create a Dll
create a Dynamic Link Library project
in that project create this two files
after that you should compile your project
you can use this command
gcc -c main.c 
notice than main.c is the file that contains your code not your header file
then for generate dll file you can also you this command
gcc -shared -o TestDll.dll -Wl,--out-implib,libtstdll.a main.o
then your dll will be generated and you can use it in your application
