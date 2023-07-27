global   main
	extern	printf

main: 
	mov	ed, format
	xor	eax, eax
	call	printf
	mov	eax, 0
	ret
format: db 'Hello, Holberton\',0
