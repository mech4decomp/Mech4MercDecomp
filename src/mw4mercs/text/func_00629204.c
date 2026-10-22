/*
 * FUN_00629204 (extent 0x629204-0x629292) - gen via tools/gen_bigfunc.py.
 * This slice is a 24-entry jump table (belonging to a prior function at
 * ~0x6290B4) + 12 nops + a small helper function + 2 nops + the start of the
 * next function (0x629290).
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00629290(void);

__declspec(naked) void FUN_00629204(void)
{
    __asm {
        /* __emit: in-function jump-table DATA (24 dword entries, relocated
           addresses of a prior function at ~0x6290B4). Inline asm has no `dd`;
           emit the literal patched address bytes (one byte per __emit). */
        __emit 0xB4
        __emit 0x90
        __emit 0x62
        __emit 0x00
        __emit 0xC2
        __emit 0x90
        __emit 0x62
        __emit 0x00
        __emit 0xD0
        __emit 0x90
        __emit 0x62
        __emit 0x00
        __emit 0xDE
        __emit 0x90
        __emit 0x62
        __emit 0x00
        __emit 0xEC
        __emit 0x90
        __emit 0x62
        __emit 0x00
        __emit 0xFA
        __emit 0x90
        __emit 0x62
        __emit 0x00
        __emit 0x08
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x16
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x24
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x32
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x40
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x4E
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x5C
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x6A
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x78
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x86
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0x94
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0xA2
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0xB0
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0xBE
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0xCC
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0xDA
        __emit 0x91
        __emit 0x62
        __emit 0x00
        __emit 0xE8
        __emit 0x91
        __emit 0x62
        __emit 0x00
__emit 0xF6
__emit 0x91
__emit 0x62
__emit 0x00
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00629290
        test    eax, eax
        je    L_ret0
        cmp    byte ptr [eax + 4], 1
        jne    L_ret0
        mov    al, 1
        ret    4
L_ret0:
        xor    al, al
        ret    4
        nop
        nop
        /* __emit: start of next function 0x629290 (push ebp; mov ebp,esp) */
        __emit 0x55
        __emit 0x8B
    }
}
