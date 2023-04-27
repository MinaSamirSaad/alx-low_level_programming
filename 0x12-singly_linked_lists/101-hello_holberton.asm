global main
extern printf

section .data
    hello db "Hello, Holberton", 0
    nl db 10, 0

section .text
main:
    push rbp
    mov rbp, rsp

    mov rdi, hello
    xor rax, rax
    call printf

    mov rdi, nl
    xor rax, rax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
