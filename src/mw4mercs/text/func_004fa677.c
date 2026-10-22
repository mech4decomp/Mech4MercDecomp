/*
 * FUN_004fa677 (extent 0x4fa677-0x4fa883) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007dc130;
extern int    g_007dc8c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_004fa6d0(void);
extern void __cdecl FUN_004faed0(void);
extern void __cdecl FUN_004fafc0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00767430(void);

__declspec(naked) void FUN_004fa677(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dc130]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x210
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a6c2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007dc8c8]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004fa6d0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_a6c2:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        sub    esp, 0x60
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x78]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x7c]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov    ecx, esi
        call    FUN_004d9940
        lea    ebx, [edi + 0x60]
        push    ebx
        lea    ecx, [esi + 0x1e0]
        mov    dword ptr [esi], 0x775da0
        call    FUN_00767430
        lea    ebp, [edi + 0x78]
        push    ebp
        lea    ecx, [esi + 0x1f8]
        call    FUN_00767430
        fld    dword ptr [edi + 0x50]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a7f3
        mov    eax, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [eax + 0x14]
        sub    eax, 4
        je    L_a7dd
        dec    eax
        jne    L_a7f3
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [eax + 0x2c]
        mov    edx, dword ptr [eax + 0x30]
        mov    dword ptr [esi + 0x1c8], ecx
        mov    ecx, dword ptr [eax + 0x34]
        mov    dword ptr [esi + 0x1cc], edx
        mov    edx, dword ptr [eax + 0x38]
        mov    dword ptr [esi + 0x1d0], ecx
        mov    ecx, dword ptr [eax + 0x3c]
        mov    dword ptr [esi + 0x1d4], edx
        mov    edx, dword ptr [eax + 0x40]
        mov    eax, dword ptr [esi + 0xd8]
        add    eax, 0x80
        mov    dword ptr [esi + 0x1d8], ecx
        push    eax
        lea    ecx, [esp + 0x44]
        mov    dword ptr [esi + 0x1dc], edx
        call    FUN_004206b0
        lea    ecx, [esp + 0x40]
        push    ecx
        lea    edx, [esi + 0x1b0]
        push    edx
        lea    ecx, [esi + 0x180]
        call    FUN_0041c680
        lea    eax, [esp + 0x40]
        push    eax
        lea    ecx, [esi + 0x1bc]
        push    ecx
        lea    ecx, [esi + 0x18c]
        call    FUN_0041c680
        push    0
        call    FUN_00707e70
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_004fafc0
        jmp    L_a80b
L_a7dd:
        push    0
        call    FUN_00707e70
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_004faed0
        jmp    L_a80b
L_a7f3:
        push    ebx
        lea    ecx, [esi + 0x198]
        call    FUN_00767430
        push    ebp
        lea    ecx, [esi + 0x1b0]
        call    FUN_00767430
L_a80b:
        lea    edx, [esi + 0xf4]
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_004206b0
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esi + 0x198]
        push    ecx
        lea    ecx, [esi + 0x168]
        call    FUN_0041c680
        lea    edx, [esp + 0x10]
        push    edx
        lea    eax, [esi + 0x1a4]
        push    eax
        lea    ecx, [esi + 0x174]
        call    FUN_0041c680
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [esi + 0x1b0]
        push    edx
        lea    ecx, [esi + 0x180]
        call    FUN_0041c680
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esi + 0x1bc]
        push    ecx
        lea    ecx, [esi + 0x18c]
        call    FUN_0041c680
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x60
        ret    0x10
    }
}
