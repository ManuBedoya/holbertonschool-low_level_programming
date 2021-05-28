section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, len
	syscall

	mov rax, 60
	mov rdi, 0
	syscall

	section .rodata
msg:	 db `My first emoji in assembler \U1F60E`, 10
len:	equ $-msg
