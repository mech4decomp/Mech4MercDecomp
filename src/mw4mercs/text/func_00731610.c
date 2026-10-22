/*
 * FUN_00731610 (extent 0x731610-0x73165e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00896c88;
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_007314f0(void);
extern void __cdecl FUN_00731640(void);

__declspec(naked) void FUN_00731610(void)
{
    __asm {
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
        mov    eax, dword ptr [g_00896c88]
        test    eax, eax
        je    L_1657
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_0072d830
        ret    8
L_1657:
        mov    eax, dword ptr [esp + 8]
        ret    8
    }
}
