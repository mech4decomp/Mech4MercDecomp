/*
 * FUN_004f09b7 (extent 0x4f09b7-0x4f0b47) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dc158;
extern int    g_007dc15c;
extern int    g_007dc834;
extern int    g_007dc838;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_00416990(void);

__declspec(naked) void FUN_004f09b7(void)
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
        mov    eax, dword ptr [g_007dc838]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc838], eax
        jne    L_0a16
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_0a0c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc834], esi
        jmp    L_0a16
L_0a0c:
        mov    dword ptr [g_007dc834], 0
L_0a16:
        mov    ecx, dword ptr [g_007dc834]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_0a41
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 8]
        push    ecx
        push    0
        mov    ecx, esi
        call    FUN_00416990
        pop    edi
        mov    dword ptr [esi], 0x774d80
        mov    eax, esi
        pop    esi
        ret    
L_0a41:
        pop    edi
        xor    eax, eax
        pop    esi
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
        mov    edx, dword ptr [esp + 4]
        movsx    eax, word ptr [edx]
        push    esi
        xor    esi, esi
        mov    si, word ptr [edx + 2]
        shl    eax, 0x10
        xor    edx, edx
        or    eax, esi
        div    dword ptr [ecx + 0x10]
        pop    esi
        mov    eax, edx
        ret    4
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x774d2c
        call    FUN_00416320
        test    byte ptr [esp + 8], 1
        je    L_0a8e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0a8e:
        mov    eax, esi
        pop    esi
        ret    4
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
        jne    L_0af6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_0aec
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc158], esi
        jmp    L_0af6
L_0aec:
        mov    dword ptr [g_007dc158], 0
L_0af6:
        mov    ecx, dword ptr [g_007dc158]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_0b40
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
L_0b40:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
    }
}
