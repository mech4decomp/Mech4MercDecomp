/*
 * FUN_004d6b24 (extent 0x4d6b24-0x4d6ce5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dc148;
extern int    g_007dc14c;
extern int    g_007dc158;
extern int    g_007dc15c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);

__declspec(naked) void FUN_004d6b24(void)
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
        nop    
        mov    eax, dword ptr [g_007dc15c]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc15c], eax
        jne    L_6b86
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_6b7c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc158], esi
        jmp    L_6b86
L_6b7c:
        mov    dword ptr [g_007dc158], 0
L_6b86:
        mov    ecx, dword ptr [g_007dc158]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_6bd0
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    eax, dword ptr [esp + 0x10]
        mov    dx, word ptr [eax]
        mov    ax, word ptr [eax + 2]
        mov    word ptr [esi + 0x18], 0xffff
        mov    word ptr [esi + 0x1a], 0
        mov    dword ptr [esi], 0x772e98
        mov    word ptr [esi + 0x1a], ax
        pop    edi
        mov    word ptr [esi + 0x18], dx
        mov    eax, esi
        pop    esi
        ret    8
L_6bd0:
        pop    edi
        xor    eax, eax
        pop    esi
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
        mov    eax, dword ptr [g_007dc15c]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc15c], eax
        jne    L_6c36
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_6c2c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc158], esi
        jmp    L_6c36
L_6c2c:
        mov    dword ptr [g_007dc158], 0
L_6c36:
        mov    ecx, dword ptr [g_007dc158]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_6c80
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    eax, dword ptr [esp + 0x10]
        mov    dx, word ptr [eax]
        mov    ax, word ptr [eax + 2]
        mov    word ptr [esi + 0x18], 0xffff
        mov    word ptr [esi + 0x1a], 0
        mov    dword ptr [esi], 0x772e98
        mov    word ptr [esi + 0x1a], ax
        pop    edi
        mov    word ptr [esi + 0x18], dx
        mov    eax, esi
        pop    esi
        ret    8
L_6c80:
        pop    edi
        xor    eax, eax
        pop    esi
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
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_6cdf
        mov    ecx, dword ptr [g_007dc148]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007dc14c]
        jne    L_6cdf
        push    edi
        mov    edi, dword ptr [g_007dc148]
        test    edi, edi
        je    L_6cce
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6cce:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007dc148], 0
        pop    esi
        ret    4
L_6cdf:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
