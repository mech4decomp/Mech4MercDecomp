/*
 * FUN_1000b480 (65 B) - __cdecl. Formats param_3/param_4 into a
 * 256-wide-char local buffer via swprintf, then calls
 * FUN_1000b4d0(param_1, param_2, buffer).
 *
 * __cdecl, 4 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1000b480 (65 B, __cdecl) - Formats the 64-bit value (param_3:param_4)
 * into a 256-wide-char local buffer via the swprintf IAT fn-ptr (0x10021138)
 * with L"%I64u" @ 0x10026258, then calls FUN_1000b4d0(param_1, param_2, buffer).
 * CFLAGS: /O2
 */

extern void *g_10021138;   /* swprintf IAT @ 0x10021138 */
extern void __cdecl FUN_1000b4d0(void *, void *, void *);

__declspec(naked) void __cdecl FUN_1000b480(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        sub     esp, 0x200
        __emit 0x8D  /* __emit: MSVC6 drops the 00 disp on lea edx,[esp] (encodes 8D 14 24) */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    eax
        push    ecx
        push    0x10026258
        push    edx
        call    dword ptr [g_10021138]
        mov     ecx, dword ptr [esp + 0x218]
        mov     edx, dword ptr [esp + 0x214]
        lea     eax, [esp + 0x10]
        push    eax
        push    ecx
        push    edx
        call    FUN_1000b4d0
        add     esp, 0x21c
        ret
    }
}
