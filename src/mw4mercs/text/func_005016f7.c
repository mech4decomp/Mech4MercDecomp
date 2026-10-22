/*
 * FUN_005016f7 (extent 0x5016f7-0x50185e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87d8;
extern int    g_007b87dc;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dd160;
extern int    g_007dd164;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415d40(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416e50(void);

__declspec(naked) void FUN_005016f7(void)
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
        mov    eax, dword ptr [g_007b87dc]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87dc], eax
        jne    L_1756
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_174c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cf50
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87d8], esi
        jmp    L_1756
L_174c:
        mov    dword ptr [g_007b87d8], 0
L_1756:
        mov    ecx, dword ptr [g_007b87d8]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_178f
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx]
        pop    edi
        mov    dword ptr [esi], 0x76cf48
        mov    dword ptr [esi + 0x10], edx
        mov    eax, esi
        pop    esi
        ret    8
L_178f:
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
        mov    eax, dword ptr [g_007dd164]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dd164], eax
        jne    L_17f6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_17ec
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cf50
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dd160], esi
        jmp    L_17f6
L_17ec:
        mov    dword ptr [g_007dd160], 0
L_17f6:
        mov    ecx, dword ptr [g_007dd160]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_1839
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x10]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x776344
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_1839:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        push    esi
        mov    esi, ecx
        call    FUN_00416e50
        test    byte ptr [esp + 8], 1
        je    L_1858
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1858:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
