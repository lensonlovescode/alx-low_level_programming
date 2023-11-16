section .data
    hello db 'Hello, Holberton', 0   ; null-terminated string
    format db 'Hello, Holberton', 0xA, 0   ; format specifier with newline character

section .text
    extern printf

    global main

main:
    push rbp                      ; establish stack frame
    mov rdi, format               ; first argument: format specifier
    call printf                   ; call printf
    pop rbp                       ; restore stack frame
    mov eax, 0                    ; return 0
    ret

