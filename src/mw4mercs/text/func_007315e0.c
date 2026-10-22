/*
 * FUN_007315e0 (extent 0x7315e0-0x731640) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b318;
extern int    g_00896c88;
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_007314f0(void);
extern void __cdecl FUN_00731640(void);

__declspec(naked) void FUN_007315e0(void)
{
    __asm {
        push    0x7a60a4
        push    0x8e
        call    FUN_00731640
        test    eax, eax
        jne    L_15f8
        mov    ax, 8
        ret    
L_15f8:
        push    eax
        call    dword ptr [g_0076b318]
        add    esp, 4
        test    ax, ax
        jne    L_160c
        mov    eax, 8
L_160c:
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_00731640
        test    eax, eax
        jne    L_1631
        mov    ecx, dword ptr [g_00896c88]
        push    esi
        push    ecx
        call    FUN_0072d830
L_1631:
        mov    edx, dword ptr [esp + 8]
        push    eax
        push    edx
        call    FUN_007314f0
        pop    esi
        ret    0xc
    }
}
