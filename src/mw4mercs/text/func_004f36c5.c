/*
 * FUN_004f36c5 (extent 0x4f36c5-0x4f37b5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc690;
extern int    g_007dc88c;
extern int    g_007dc8cc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004f2000(void);
extern void __cdecl FUN_004f2060(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_004f36c5(void)
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        push    esi
        push    edi
        lea    edi, [ecx + 0x18]
        lea    esi, [eax + 0x18]
        push    edi
        mov    ecx, esi
        call    FUN_004f2000
        test    al, al
        je    L_36f3
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
L_36f3:
        push    edi
        mov    ecx, esi
        call    FUN_004f2060
        neg    al
        pop    edi
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        lea    esi, [eax + 0x18]
        push    esi
        mov    ecx, edi
        call    FUN_004f2000
        test    al, al
        je    L_3730
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
L_3730:
        push    esi
        mov    ecx, edi
        call    FUN_004f2060
        neg    al
        pop    edi
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
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
        nop    
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_37aa
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x5070b0
        push    0x4f37f0
        push    0
        push    0
        push    edx
        push    0x77511c
        push    0x1d5
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007dc88c], eax
        ret    
L_37aa:
        mov    dword ptr [g_007dc88c], 0
        ret    
    }
}
