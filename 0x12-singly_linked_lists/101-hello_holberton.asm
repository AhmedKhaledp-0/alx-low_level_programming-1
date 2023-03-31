	SECTION .text
	extern printf
	global main

	SECTION .data
msg:	db  'Hello, Holberton', 0
fmt:	db "%s", 10, 0

main:
	mov  esi, msg
	mov  edi, fmt
	mov  eax, 0
	call printf

	mov  ebx, 0
	mov  eax, 0
	ret
