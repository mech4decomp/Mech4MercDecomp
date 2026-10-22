/*
 * FUN_0059a47e (extent 0x59a47e-0x59a567) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1fec;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004dd340(void);
extern void __cdecl FUN_0059af40(void);
extern void __cdecl FUN_005e6940(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0059a47e(void)
{
    __asm {
        nop    
        nop    
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x14]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        cmp    esi, eax
        je    L_a521
        cmp    eax, 8
        jne    L_a4ac
        cmp    esi, 6
        je    L_a4a2
        cmp    esi, 7
        jne    L_a4ac
L_a4a2:
        pop    esi
        mov    eax, 8
        pop    ebx
        ret    8
L_a4ac:
        cmp    esi, 6
        jne    L_a4e0
        cmp    eax, 1
        jne    L_a514
        push    edi
        mov    edi, dword ptr [ebx + 0x18]
        push    0
        call    FUN_00707e70
        fst    qword ptr [edi + 0x230]
        mov    ecx, dword ptr [esp + 0x14]
        fstp    qword ptr [edi + 0x228]
        pop    edi
        push    ecx
        push    esi
        mov    ecx, ebx
        call    FUN_005e6940
        pop    esi
        pop    ebx
        ret    8
L_a4e0:
        cmp    esi, 8
        jne    L_a4ff
        mov    ecx, dword ptr [ebx + 0x18]
        call    FUN_0059af40
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov    ecx, ebx
        call    FUN_005e6940
        pop    esi
        pop    ebx
        ret    8
L_a4ff:
        cmp    esi, 9
        jne    L_a514
        push    0
        call    FUN_00707e70
        mov    eax, dword ptr [ebx + 0x18]
        fstp    qword ptr [eax + 0x238]
L_a514:
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov    ecx, ebx
        call    FUN_005e6940
L_a521:
        pop    esi
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [g_007f1fec]
        test    esi, esi
        je    L_a55b
        mov    ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_a55b:
        mov    dword ptr [g_007f1fec], 0
        pop    esi
        ret    
    }
}
