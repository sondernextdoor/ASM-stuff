PUBLIC mem_cpy_stub

.code
     
mem_cpy_stub PROC

    mov rax, [rdx]
    mov [rcx], rax
    mov rax, rcx
    ret

mem_cpy_stub ENDP
     
END