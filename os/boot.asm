[org 0x7c00]

start:
 mov ax, 0x0000
 mov ds, ax
 call main
 call data
 call input
 call selesai
 
%include "karnel.asm"

times 510-($-$$) db 0
dw 0xAA55
