data segment
    a db 5 dup(?)
    prompt db "Enter the numbers: $"
    b db "Sum of even number: $" 
    n db 02h
    cr equ 0dh 
data ends
code segment
assume cs:code,ds:data
start:
    mov ax,data
    mov ds,ax  

    mov dx, offset prompt
    mov ah,09h
    int 21h

    mov cx, 5
    mov si, 0
input_loop:
    mov ah, 01h
    int 21h
    sub al, 30h
    mov a[si], al
    inc si
    loop input_loop

    mov cx,5
    mov si,0 
    mov bl,0
sum_loop:
    cmp si,cx
    je end_loop
    mov al,a[si]
    mov ah,0
    div n
    cmp ah,0
    je add_even
    inc si
    jmp sum_loop
add_even:
    add bl,a[si]
    inc si
    jmp sum_loop
end_loop:
    mov dx,offset b
    mov ah,09h
    int 21h
    add bl,30h
    mov dl,bl
    mov ah,02h
    int 21h

    mov ah,4ch
    int 21h
    code ends
end start
end
