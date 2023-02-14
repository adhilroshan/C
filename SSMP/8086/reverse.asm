data segment 
   a db 13,10,"Enter a string: $"
   b db 13,10,"Reverse: $"
   c db 13,10, 20 dup ("$")
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
    je print
    inc di
    jmp read
    print:  
    mov [di],"$"
    mov dx,offset b
    mov ah,09h
    int 21h
    dec di
    lea si,c 
    mov dl,10
    mov ah,02h
    int 21h  
    mov dl,13
    mov ah,02h
    int 21h
    p2:
    mov dl,[di]
    mov ah,02h
    int 21h
    cmp di,si
    je end
    dec di
    jmp p2
    end:
    mov ah,4ch
    int 21h
    code ends
end start
end