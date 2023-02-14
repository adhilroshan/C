data segment
    a db 13,10,"Enter your string: $"
    b db 13,10,"Enter your character to be replaced: $"
    c db 13,10,"Character to replace: $" 
    e db 13,10,"Output: $"
    d db 13,10, 20dup("$")
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
    lea di,d
    read:
    mov ah,01h
    int 21h
    cmp al,cr
    je next
    mov [di],al
    inc di
    jmp read
    next: 
    inc di
    mov [di],"$"
    mov dx,offset b
    mov ah,09h
    int 21h
    mov ah,01h
    int 21h
    mov bx,ax
    mov dx,offset c
    mov ah,09h     
    int 21h
    mov ah,01h
    int 21h
    mov cl,al
    lea si,d
replace:
    cmp si,di
    je end
    cmp [si],bl
    je pr
    inc si
    jmp replace
pr:
    mov [si],cl
    inc si
    jmp replace
end:
    mov dx,offset e
    mov ah,09h
    int 21h
    mov dx,offset d
    mov ah,09h
    int 21h
    mov ah,4ch
    int 21h
code ends
end start
end
