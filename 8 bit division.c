LDA 8501
MOV B,A
LDA 8500
MVI C,00
LOOP: CMP B
JC LOOP1
SUB B
INR C
JMP LOOP
STA 8503

DCR C
MOV A,C
LOOP1: STA 8502
RST 1


INPUT:
8500  06H
8501  02H
OUTPUT:
8502  03H(Quotient)
8503  00H(Reminder)
