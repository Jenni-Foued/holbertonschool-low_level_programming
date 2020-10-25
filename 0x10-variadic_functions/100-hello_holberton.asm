section .text

	global _start

section .data

	msg db  'Hello, Holberton',0xa
	len equ $ - msg

section .text

_start:

    mov edx,len
    mov ecx,msg
    mov ebx,1
    mov eax,4
    int 0x80

    mov ebx,0
    mov eax,1
    int 0x80
