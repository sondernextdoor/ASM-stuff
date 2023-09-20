#include <iostream>
#include <Windows.h>

extern "C" int add_stub( int number, int number_ );
extern "C" void* mem_cpy_stub( void* destination, void* source, unsigned long size );


/*
PUBLIC add_stub

.code
     
add_stub PROC

    mov rax, rcx
    add rax, rdx
    ret

add_stub ENDP
     
END
*/


int main()
{
	int i = 3; 
	int j = 7;

	mem_cpy_stub(&i, &j, 4);

	std::cout << i;
	getchar();
}