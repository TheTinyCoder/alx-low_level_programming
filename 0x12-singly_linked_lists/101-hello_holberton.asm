; 64-bit program that prints Hello, Holberton
; Compiled with: 
; 'nasm -f elf64 101-hello_holberton.asm && 
; gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello'
; Declare some external functions
;
        extern	printf		; the C function, to be called

        SECTION .data		; Data section, initialized variables

	msg db "Hello, Holberton", 0
	fmt db "%s", 10, 0 	; The printf format, "\n",'0'


        SECTION .text           ; Code section.

        global main		; the standard gcc entry point
main:				; the program label for the entry point
        push    rbp		; set up stack frame
        mov     rdi, fmt

	mov	rsi, msg	; put msg from store into register
        call    printf		; Call C function

        pop     rbp		; take down stack frame ("leave" op)

	mov	rax,0		;  normal, no error, return value
	ret			; return
