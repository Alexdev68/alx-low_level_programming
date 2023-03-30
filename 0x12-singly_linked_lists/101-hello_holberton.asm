	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main, _start
main:
	push rbp

	mov esi, msg	;
	mov edi, fmt	;
	mov eax, 0	;
	call printf

	pop rbp

	mov ebx, 0	;
	mov eax, 1	;
	int 0x80	;
