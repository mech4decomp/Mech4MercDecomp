/*
 * FUN_1000b450 (48 B) - __cdecl. Formats param_3 into a 32-wide-char
 * local buffer via swprintf, then calls FUN_1000b4d0(param_1, param_2,
 * buffer).
 *
 * __cdecl, 3 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * buffer via the swprintf IAT fn-ptr (0x10021138), then calls
 * CFLAGS: /O2
 */

extern void *g_10021138;   /* swprintf IAT @ 0x10021138 */
extern void __cdecl FUN_1000b4d0(void *, void *, void *);

__declspec(naked) void __cdecl FUN_1000b450(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x40
        __emit 0x8D  /* __emit: MSVC6 drops the 00 disp on lea ecx,[esp] (encodes 8D 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        push    eax
        push    0x10026250
        push    ecx
        call    dword ptr [g_10021138]
        mov     eax, dword ptr [esp + 0x54]
        mov     ecx, dword ptr [esp + 0x50]
        lea     edx, [esp + 0xc]
        push    edx
        push    eax
        push    ecx
        call    FUN_1000b4d0
        add     esp, 0x58
        ret
    }
}
