data segment
    a db 13,10,"Enter your string: $"
    b db 13,10,"Enter character: $" 
    d db 13,10,"Frequency : $"
    c db 13,10, 20dup("$")
    cr equ 0dh
    data ends
code segment
    assume cs:code,ds:data
    start:
    mov ax,data
    mov ds,ax
    mov dx,offset a
    mov ah,09h
    int 21h
    lea di,c
    read:
    mov ah,01h
    int 21h
    mov [di],al
    cmp [di],cr
    je next
    inc di
    jmp read
    next:
    mov [di],"$"
    mov dx,offset b
    mov ah,09h
    int 21h
    mov ah,01h
    int 21h
    mov bl,al
    lea si,c 
    mov cx,0000h
    check:
    cmp si,di
    je end
    cmp [si],bl
    je count
    inc si
    jmp check
    count:
    inc cx
    inc si
    jmp check
    end:
    mov dx,offset d
    mov ah,09h
    int 21h
    add cx,'0'
    mov dx,cx
    mov ah,02h
    int 21h
    mov ah,4ch
    int 21h
    code ends
end start
end