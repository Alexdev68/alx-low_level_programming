      global  main
	extern  printf
main:
	mov  edi, format
	xor  eax, eax
	call printf
	mov ebx, 0
	ret
format: db `Hello, Holberton\n`, 0
