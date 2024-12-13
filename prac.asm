section .data
    msg db "Hello, World!", 0xA  ; Message with newline character
    len equ $ - msg             ; Message length

section .text
    global _start

_start:
    ; Write to stdout
    mov eax, 4      ; sys_write
    mov ebx, 1      ; file descriptor (stdout)
    mov ecx, msg    ; message address
    mov edx, len    ; message length
    int 0x80        ; call kernel

    ; Exit program
    mov eax, 1      ; sys_exit
    xor ebx, ebx    ; exit code 0
    int 0x80        ; call kernel

; Compile and run:
    ; nasm -f elf32 prac.asm -o prac.o (assemble)
    ; ld -m elf_i386 prac.o -o prac (link)
    ; ./prac (run)
