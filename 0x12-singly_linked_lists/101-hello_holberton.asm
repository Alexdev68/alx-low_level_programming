	SECTION .text
	extern printf
	global main, _start
main:
	mov edi, fmt	;
	xor eax, eax	;
	mov eax, 0	;
	call printf
	mov ebx, 0	;
	ret
fmt: db `Hello, Holberton\n`, 0
