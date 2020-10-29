section .data:
msg:		db "Hello, Holberton", 0
format_msg: db "%s", 0Ah, 0
    global main
    extern printf

section .text
main:
    mov		rdi, msg
	mov		rax, 0
	call	printf
	mov		rax, 0
	ret
