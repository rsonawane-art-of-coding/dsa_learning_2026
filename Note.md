
# Create Static library 

**Command**
`$ar rs lib_name list_of_object_file`

**`r`** | **Insert/Replace** - Inserts the object files into the archive. Creates a new archive if it doesn't exist, or replaces existing files if already present.

**`s`** | **Symbol Index** - Creates or updates the symbol table within the archive, enabling the linker to efficiently locate functions and variables.

**Example** 

```bash
/* Create libmath.a from math functions */
ar rs libmath.a add.o subtract.o multiply.o divide.o

# Link static library

**Command**

`gcc -g <object file> -o <executable> -L <path for libraries> -ldll`


**`g`** | **Create debug symbol** - This is optional compile time flag to create debug symbols.

**`-L`** | ** Path ** - This option tell linker where to look for static libraries.

```bash
gcc -g applications/application.o -o application -L ./data_structure/dll/ -ldll
