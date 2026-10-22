/*
 * FUN_005e200d (extent 0x5e200d-0x5e20b4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007f2538;
extern int    g_007f2548;
extern int    g_007f255c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005e200d(void)
{
    __asm {
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
        je    L_203b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x7888fc
        pop    esi
        ret    
L_203b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_20a8
        mov    eax, dword ptr [g_007f255c]
        mov    ecx, dword ptr [g_007f2548]
        push    0x502c60
        push    0x5028b0
        push    0x675a60
        push    0
        push    0x675a40
        push    eax
        push    0x674b00
        push    0x5e20f0
        push    0
        push    0
        push    ecx
        push    0x788a28
        push    0x477
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5ef970
        mov    dword ptr [g_007f2538], esi
        pop    esi
        ret    
L_20a8:
        mov    dword ptr [g_007f2538], 0
        pop    esi
        ret    
    }
}
