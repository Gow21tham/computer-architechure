MOV SI,1200H
LODSW
MOV BX,AX
LODSW
ADD BX,AX
MOV DI,1300H
MOV [DI],BX
HLT


INPUT:
1200  13H            1201  13H
1202  14H            1203   14H

OUTPUT:
1300  27H
1301  27H
