section .data
    text db "Hello, Holberton",10,0
section .text
    global main
 
main:
    mov rax, 1
    mov rdi, 1
    mov rsi, text
    mov rdx, 17
    syscall

    mov rax, 60
    mov rdi, 0
    syscall
 