/*
 * FUN_00500f07 (extent 0x500f07-0x5010ae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87d8;
extern int    g_007b87dc;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dd160;
extern int    g_007dd164;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415d40(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416e50(void);

__declspec(naked) void FUN_00500f07(void)
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
        jne    L_0f66
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_0f5c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cf50
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87d8], esi
        jmp    L_0f66
L_0f5c:
        mov    dword ptr [g_007b87d8], 0
L_0f66:
        mov    ecx, dword ptr [g_007b87d8]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_0f9f
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
L_0f9f:
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
        jne    L_1006
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_0ffc
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cf50
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dd160], esi
        jmp    L_1006
L_0ffc:
        mov    dword ptr [g_007dd160], 0
L_1006:
        mov    ecx, dword ptr [g_007dd160]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_1049
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
L_1049:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        push    esi
        push    0x14
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1081
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax], 0x776304
        pop    esi
        ret    
L_1081:
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
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00416e50
        test    byte ptr [esp + 8], 1
        je    L_10a8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_10a8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
