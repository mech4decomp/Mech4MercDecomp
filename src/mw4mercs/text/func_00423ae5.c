/*
 * FUN_00423ae5 (extent 0x423ae5-0x423b1e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00423ae5(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        /* jump table entries (literal patched addresses) */
        __emit 0xCF  // 0x004235CF
        __emit 0x35
        __emit 0x42
        __emit 0x00
        __emit 0xCF  // 0x004235CF
        __emit 0x35
        __emit 0x42
        __emit 0x00
        __emit 0xE5  // 0x004235E5
        __emit 0x35
        __emit 0x42
        __emit 0x00
        __emit 0xFA  // 0x004235FA
        __emit 0x35
        __emit 0x42
        __emit 0x00
        /* 8 alignment NOPs */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov    eax, ecx
        mov    dword ptr [eax], 0
        mov    dword ptr [eax + 4], 0
        ret    
        mov    eax, dword ptr [ecx]
        test    eax, eax
        je    L_3b1d
        push    eax
        call    FUN_004084e0
        pop    ecx
L_3b1d:
        ret    
    }
}
