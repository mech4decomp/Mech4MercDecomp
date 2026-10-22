/*
 * FUN_10002000 (63 B) - __thiscall. Formats a message via _snwprintf
 * (IAT) into a buffer at +0x18, then appends it via FUN_100016b0.
 *
 * __thiscall (ECX = this), RET 0x4 (1 float param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10002000 (63 B) -- __thiscall, RET 4 (1 float param).
 * Formats "%.*g" via _snwprintf (IAT) into buf[+0x18] with precision
 */

extern void __cdecl FUN_100016b0(void);
extern void *g_snwprintf;   /* IAT slot 0x10021100 (_snwprintf) */

__declspec(naked) int __cdecl FUN_10002000(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        jnz     L2010
        mov     eax, 7
L2010:
        fld     dword ptr [esp + 0xc]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    eax
        push    0x10024078
        lea     esi, [edi + 0x18]
        push    0x40
        push    esi
        call    dword ptr [g_snwprintf]
        add     esp, 0x18
        shl     eax, 1
        push    eax
        push    esi
        mov     ecx, edi
        call    FUN_100016b0
        pop     edi
        pop     esi
        ret     4
    }
}
