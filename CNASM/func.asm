section .text

global Addition
global Subtraction
global Product
global Division

Addition:
    addsd xmm0, xmm1
    ret

Subtraction:
    subsd xmm0, xmm1
    ret

Product:
    mulsd xmm0, xmm1
    ret

Division:
    divsd xmm0, xmm1
    ret