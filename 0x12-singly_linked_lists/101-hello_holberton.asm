; Disassembly of file: 101-hello_holberton.o
; Thu Aug 17 22:51:17 2023
; Type: ELF64
; Syntax: NASM
; Instruction set: 8086, x64

default rel

global main: function

extern puts                                             ; near


SECTION .text   align=1 exec                            ; section number 1, code

main:   ; Function begin
        push    rbp                                     ; 0000 _ 55
        mov     rbp, rsp                                ; 0001 _ 48: 89. E5
        lea     rax, [rel ?_001]                        ; 0004 _ 48: 8D. 05, 00000000(rel)
        mov     rdi, rax                                ; 000B _ 48: 89. C7
        call    puts                                    ; 000E _ E8, 00000000(PLT r)
        mov     eax, 0                                  ; 0013 _ B8, 00000000
        pop     rbp                                     ; 0018 _ 5D
        ret                                             ; 0019 _ C3
; main End of function


SECTION .data   align=1 noexec                          ; section number 2, data


SECTION .bss    align=1 noexec                          ; section number 3, bss


SECTION .rodata align=1 noexec                          ; section number 4, const

?_001:                                                  ; byte
        db 48H, 65H, 6CH, 6CH, 6FH, 2CH, 20H, 48H       ; 0000 _ Hello, H
        db 6FH, 6CH, 62H, 65H, 72H, 74H, 6FH, 6EH       ; 0008 _ olberton
        db 00H                                          ; 0010 _ .


SECTION .note.gnu.property align=8 noexec               ; section number 5, const

        db 04H, 00H, 00H, 00H, 20H, 00H, 00H, 00H       ; 0000 _ .... ...
        db 05H, 00H, 00H, 00H, 47H, 4EH, 55H, 00H       ; 0008 _ ....GNU.
        db 02H, 00H, 01H, 0C0H, 04H, 00H, 00H, 00H      ; 0010 _ ........
        db 00H, 00H, 00H, 00H, 00H, 00H, 00H, 00H       ; 0018 _ ........
        db 01H, 00H, 01H, 0C0H, 04H, 00H, 00H, 00H      ; 0020 _ ........
        db 01H, 00H, 00H, 00H, 00H, 00H, 00H, 00H       ; 0028 _ ........


