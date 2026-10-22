/*
 * FUN_004f96af (extent 0x4f96af-0x4f97b5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dc8ac;
extern int    g_007dc8b0;
extern int    g_007dc8b4;
extern int    g_007dc8b8;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);

__declspec(naked) void FUN_004f96af(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [g_007dc8b0]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc8b0], eax
        jne    L_9706
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_96fc
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc8ac], esi
        jmp    L_9706
L_96fc:
        mov    dword ptr [g_007dc8ac], 0
L_9706:
        mov    ecx, dword ptr [g_007dc8ac]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_974c
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    eax, dword ptr [esp + 0x10]
        mov    dl, byte ptr [eax]
        mov    ax, word ptr [eax + 2]
        mov    byte ptr [esi + 0x18], 0
        mov    word ptr [esi + 0x1a], 0
        mov    dword ptr [esi], 0x775b20
        mov    word ptr [esi + 0x1a], ax
        pop    edi
        mov    byte ptr [esi + 0x18], dl
        mov    eax, esi
        pop    esi
        ret    8
L_974c:
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
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_97af
        mov    ecx, dword ptr [g_007dc8b8]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007dc8b4]
        jne    L_97af
        push    edi
        mov    edi, dword ptr [g_007dc8b8]
        test    edi, edi
        je    L_979e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_979e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007dc8b8], 0
        pop    esi
        ret    4
L_97af:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
