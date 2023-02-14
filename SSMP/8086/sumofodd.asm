data segment
    a db 5 dup (?)
    prompt db "Enter the numbers: $"
    b db "Sum of odd numbers: $"
    n db 02h
    cr equ 0dh
data ends

code segment
assume cs:code,ds:data
start:
    mov ax,data
    mov ds,ax

    ; print prompt to console
    mov dx, offset prompt
    mov ah, 09h
    int 21h

    ; read input values for array a
    mov cx, 5
    mov si, 0
input_loop:
    mov ah, 01h
    int 21h
    sub al, 30h
    mov a[si], al
    inc si
    loop input_loop

    ; process the array to find the sum of odd numbers
    mov cx, 5
    mov si, 0
    mov bl, 0
sum_loop:
    cmp si, cx
    je end_loop
    mov al, a[si]
    mov ah, 0
    div n
    cmp ah, 0
    jne add_odd
    inc si
    jmp sum_loop
add_odd:
    add bl, a[si]
    inc si
    jmp sum_loop
end_loop:
    ; print the sum of odd numbers
    mov dx, offset b
    mov ah, 09h
    int 21h
    add bl, 30h
    mov dl, bl
    mov ah, 02h
    int 21h

    ; exit program
    mov ah, 4ch
    int 21h
code ends
end start
