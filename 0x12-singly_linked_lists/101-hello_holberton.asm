	section .text
	global main, _start
	extern printf
main:
	mov  edi, fmt
	xor  eax, eax
	call printf
	mov ebx, 0
	ret
fmt: db `Hello, Holberton\n`, 0
