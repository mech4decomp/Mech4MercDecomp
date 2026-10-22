/*
 * FUN_0066ad00 (extent 0x66ad00-0x66ae25) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_0080da80;
extern int    g_0080da84;
extern int    g_0080da88;
extern int    g_0080da8c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416bf0(void);

__declspec(naked) void FUN_0066ad00(void)
{
    __asm {
        mov    eax, dword ptr [g_0080da84]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_0080da84], eax
        jne    L_ad56
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_ad4c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x20
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_0080da80], esi
        jmp    L_ad56
L_ad4c:
        mov    dword ptr [g_0080da80], 0
L_ad56:
        mov    ecx, dword ptr [g_0080da80]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_ad99
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        or    eax, 0xffffffff
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x1c], eax
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [esi], 0x796b68
        mov    dword ptr [esi + 0x1c], eax
        pop    edi
        mov    dword ptr [esi + 0x18], edx
        mov    eax, esi
        pop    esi
        ret    8
L_ad99:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_adc7
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x796b28
        mov    eax, esi
        pop    esi
        ret    
L_adc7:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_ae1f
        mov    ecx, dword ptr [g_0080da8c]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_0080da88]
        jne    L_ae1f
        push    edi
        mov    edi, dword ptr [g_0080da8c]
        test    edi, edi
        je    L_ae0e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_ae0e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_0080da8c], 0
        pop    esi
        ret    4
L_ae1f:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
