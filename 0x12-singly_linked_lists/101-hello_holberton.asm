
	global main
	extern printf
main:
	mov  edi, fmt
	xor  eax, eax
	call printf
	mov ebx, 0
	ret
fmt: db `Hello, Holberton\n`, 0
