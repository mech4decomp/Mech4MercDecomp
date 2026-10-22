/*
 * FUN_00547a19 (extent 0x547a19-0x547ad5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007ddd68;
extern int    g_007ddd6c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416bf0(void);

__declspec(naked) void FUN_00547a19(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_7a47
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x77b17c
        mov    eax, esi
        pop    esi
        ret    
L_7a47:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_7a7b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x77b304
        pop    esi
        ret    
L_7a7b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_7acf
        mov    ecx, dword ptr [g_007ddd6c]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007ddd68]
        jne    L_7acf
        push    edi
        mov    edi, dword ptr [g_007ddd6c]
        test    edi, edi
        je    L_7abe
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_7abe:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007ddd6c], 0
        pop    esi
        ret    4
L_7acf:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
