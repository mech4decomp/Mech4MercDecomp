/*
 * FUN_004211e0 (62 B) — __cdecl (plain RET). Bit-IO / huffman-ish helper:
 * computes a ratio of two float deltas, shifts a value right by a
 * computed count, converts to int, multiplies, and calls FUN_0075db4a.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_004211e0(void)
{
    __asm {
        sub     esp, 0x8
        fld     dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x10]
        mov     ecx, 0x20
        fld     dword ptr [esp + 0x14]
        sub     ecx, eax
        fsub    dword ptr [esp + 0x10]
        or      eax, 0xFFFFFFFF
        shr     eax, cl
        fdivp   st(1), st(0)
        mov     dword ptr [esp + 0x4], 0x0
        /* __emit: MSVC6 encodes mov [esp],eax as 89 04 24 (drops the 00 disp byte); ref needs 89 44 24 00 */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        /* __emit: MSVC6 encodes fimul [esp] as DA 0C 24 (drops the 00 disp byte); ref needs DA 4C 24 00 */
        __emit 0xDA
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0075db4a
        add     esp, 0x8
        ret
    }
}
