/* func_0063b370.c - ABL interpreter region: vector reallocation / gather routine */

extern void __cdecl FUN_00580760(void);
extern void __cdecl FUN_0063af40(void);
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00415230(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_005809b0(void);
extern void __cdecl FUN_004084e0(void *);
extern int *g_007dab44;
extern int g_007dab40;
extern int *g_007dd268;
extern int g_007f268c;

__declspec(naked) int func_0063b370(void)
{
    __asm {
        sub  esp, 0x20
        mov  eax, dword ptr [g_007dab44]
        mov  ecx, dword ptr [eax]
        xor  ecx, dword ptr [g_007dab40]
        mov  edx, dword ptr [ecx + 0x18]
        push ebx
        push esi
        lea  eax, [ecx + 0x18]
        push edi
        xor  edi, edi
        xor  edx, 0x85739531
        mov  dword ptr [esp + 0x10], edi
        jz   L_626
        mov  eax, dword ptr [eax]
        xor  eax, 0x85739531
        jz   L_626
        mov  eax, dword ptr [eax + 0x178]
        test eax, eax
        jz   L_626
        mov  ecx, dword ptr [eax + 0x384]
        test ecx, ecx
        jz   L_626
        cmp  byte ptr [esp + 0x34], 0x1
        jnz  L_3fe
        mov  edx, dword ptr [esp + 0x30]
        mov  ecx, dword ptr [eax + 0x384]
        mov  eax, dword ptr [edx + 0x4]
        cmp  eax, dword ptr [edx + 0x8]
        mov  dword ptr [esp + 0x34], ecx
        jz   L_3ef
        test eax, eax
        jz   L_3e7
        mov  dword ptr [eax], ecx
L_3e7:
        add  eax, 0x4
        mov  dword ptr [edx + 0x4], eax
        jmp  L_3fe
L_3ef:
        push 0x1
        lea  ecx, [esp + 0x38]
        push ecx
        push eax
        mov  ecx, edx
        call FUN_00580760
L_3fe:
        mov  eax, dword ptr [g_007dd268]
        test eax, eax
        jz   L_422
        cmp  dword ptr [eax + 0x40ee0], 0x2
        jnz  L_422
        mov  dword ptr [esp + 0xc], 0x3b6
        mov  dword ptr [esp + 0x1c], 0x3b7
        jmp  L_432
L_422:
        mov  dword ptr [esp + 0xc], 0x1
        mov  dword ptr [esp + 0x1c], 0x3
L_432:
        mov  ebx, dword ptr [esp + 0xc]
        cmp  ebx, dword ptr [esp + 0x1c]
        mov  esi, ebx
        mov  dword ptr [esp + 0x18], esi
        jge  L_626
        push ebp
L_447:
        push esi
        call FUN_0063af40
        add  esp, 0x4
        test eax, eax
        jle  L_60b
        mov  edx, dword ptr [g_007dab44]
        mov  eax, dword ptr [edx]
        xor  eax, dword ptr [g_007dab40]
        mov  ecx, dword ptr [eax + 0x20]
        push esi
        xor  ecx, 0x85739531
        call FUN_00600940
        mov  ecx, eax
        call FUN_0064e5a0
        xor  edi, edi
        cmp  esi, ebx
        mov  ebp, eax
        mov  dword ptr [esp + 0x28], ebp
        mov  dword ptr [esp + 0x38], edi
        jnz  L_498
        mov  dword ptr [esp + 0x38], 0x1
        mov  edi, dword ptr [esp + 0x38]
L_498:
        mov  ecx, ebp
        call FUN_0064e100
        mov  ecx, dword ptr [eax + 0x4]
        sub  ecx, dword ptr [eax]
        sar  ecx, 0x2
        cmp  edi, ecx
        jnc  L_607
L_4af:
        mov  ecx, ebp
        call FUN_0064e100
        mov  edx, dword ptr [g_007dab44]
        mov  ecx, dword ptr [edx]
        mov  ebx, dword ptr [g_007dab40]
        mov  eax, dword ptr [eax]
        mov  eax, dword ptr [eax + edi*0x4]
        xor  ecx, ebx
        mov  ecx, dword ptr [ecx + 0x10]
        push eax
        xor  ecx, 0x85739531
        call FUN_004fcb30
        mov  ebx, eax
        test ebx, ebx
        jz   L_5e3
        mov  eax, dword ptr [g_007f268c]
        mov  ecx, dword ptr [ebx + 0x4]
        push eax
        call FUN_00415230
        cmp  al, 0x1
        jnz  L_5e3
        mov  ecx, dword ptr [esp + 0x34]
        mov  esi, dword ptr [ecx + 0x4]
        mov  eax, ecx
        cmp  esi, dword ptr [eax + 0x8]
        jz   L_519
        test esi, esi
        jz   L_50e
        mov  dword ptr [esi], ebx
L_50e:
        add  esi, 0x4
        mov  dword ptr [eax + 0x4], esi
        jmp  L_5d5
L_519:
        mov  ebp, dword ptr [eax]
        mov  eax, esi
        sub  eax, ebp
        sar  eax, 0x2
        cmp  eax, 0x1
        mov  dword ptr [esp + 0x18], 0x1
        mov  dword ptr [esp + 0x24], eax
        lea  ecx, [esp + 0x18]
        jc   L_53b
        lea  ecx, [esp + 0x24]
L_53b:
        mov  ecx, dword ptr [ecx]
        add  ecx, eax
        mov  dword ptr [esp + 0x24], ecx
        jz   L_55b
        /* __emit: no-base SIB form lea edx,[ecx*4+0] (8D 14 8D 00000000) not encodable natively */
        __emit 0x8D
        __emit 0x14
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push edx
        call FUN_004084d0
        add  esp, 0x4
        mov  dword ptr [esp + 0x18], eax
        jmp  L_563
L_55b:
        mov  dword ptr [esp + 0x18], 0x0
L_563:
        cmp  ebp, esi
        mov  edi, dword ptr [esp + 0x18]
        jz   L_57f
L_56b:
        push ebp
        push edi
        call FUN_005809b0
        add  ebp, 0x4
        add  esp, 0x8
        add  edi, 0x4
        cmp  ebp, esi
        jnz  L_56b
L_57f:
        test edi, edi
        jz   L_585
        mov  dword ptr [edi], ebx
L_585:
        add  edi, 0x4
        cmp  esi, esi
        jz   L_5a3
        mov  eax, esi
        sub  eax, edi
L_590:
        test edi, edi
        jz   L_599
        mov  ecx, dword ptr [eax + edi*0x1]
        mov  dword ptr [edi], ecx
L_599:
        add  edi, 0x4
        lea  edx, [eax + edi*0x1]
        cmp  edx, esi
        jnz  L_590
L_5a3:
        mov  esi, dword ptr [esp + 0x34]
        mov  eax, dword ptr [esi]
        test eax, eax
        mov  dword ptr [esp + 0x2c], eax
        jz   L_5ba
        push eax
        call FUN_004084e0
        add  esp, 0x4
L_5ba:
        mov  eax, dword ptr [esp + 0x18]
        mov  ecx, dword ptr [esp + 0x24]
        mov  ebp, dword ptr [esp + 0x28]
        lea  edx, [eax + ecx*0x4]
        mov  dword ptr [esi + 0x4], edi
        mov  edi, dword ptr [esp + 0x38]
        mov  dword ptr [esi], eax
        mov  dword ptr [esi + 0x8], edx
L_5d5:
        mov  eax, dword ptr [esp + 0x10]
        cmp  dword ptr [esp + 0x1c], eax
        jnz  L_5e3
        inc  dword ptr [esp + 0x14]
L_5e3:
        inc  edi
        mov  ecx, ebp
        mov  dword ptr [esp + 0x38], edi
        call FUN_0064e100
        mov  ecx, dword ptr [eax + 0x4]
        sub  ecx, dword ptr [eax]
        sar  ecx, 0x2
        cmp  edi, ecx
        jc   L_4af
        mov  esi, dword ptr [esp + 0x1c]
        mov  ebx, dword ptr [esp + 0x10]
L_607:
        mov  edi, dword ptr [esp + 0x14]
L_60b:
        mov  eax, dword ptr [esp + 0x20]
        inc  esi
        cmp  esi, eax
        mov  dword ptr [esp + 0x1c], esi
        jl   L_447
        pop  ebp
        mov  eax, edi
        pop  edi
        pop  esi
        pop  ebx
        add  esp, 0x20
        ret
L_626:
        mov  eax, edi
        pop  edi
        pop  esi
        pop  ebx
        add  esp, 0x20
        ret
    }
}
