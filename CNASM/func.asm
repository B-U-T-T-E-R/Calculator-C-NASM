section .text

global calc

calc:
    mov r9, rdx
    
    mov rax, rcx
    add rax, r9
    mov [r8], rax

    mov rax, rcx
    sub rax, r9
    mov [r8+8], rax

    mov rax, rcx
    imul rax, r9
    mov [r8+16], rax

    mov rax, rcx
    cqo
    idiv r9
    mov [r8+24], rdx
    
    ret