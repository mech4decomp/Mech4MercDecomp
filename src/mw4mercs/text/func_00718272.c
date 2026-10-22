/*
 * FUN_00718272 (extent 0x718272-0x7182fe) - gen via tools/gen_bigfunc.py.
 *
 * The first 90 bytes (0x718272-0x7182cb) are in-function jump-table DATA, not
 * instructions. They are emitted verbatim with __emit (inline asm has no `dd`).
 * Then 8 nops, then the real code (a linked-list append to g_008aab18).
 */
#pragma warning(disable : 4035 4793)

extern int    g_008aab18;

__declspec(naked) void FUN_00718272(void)
{
    __asm {
        /* ---- in-function jump-table DATA (90 bytes, 0x718272-0x7182cb) ---- */
        __emit 0x8B
        __emit 0xFF
        __emit 0xB8
        __emit 0x7F
        __emit 0x71
        __emit 0x00
        __emit 0x71
        __emit 0x80
        __emit 0x71
        __emit 0x00
        __emit 0x3B
        __emit 0x80
        __emit 0x71
        __emit 0x00
        __emit 0x50
        __emit 0x81
        __emit 0x71
        __emit 0x00
        __emit 0x00
        __emit 0x03
        __emit 0x01
        __emit 0x03
        __emit 0x02
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x02
        __emit 0x90
        __emit 0x3B
        __emit 0x80
        __emit 0x71
        __emit 0x00
        __emit 0x3B
        __emit 0x80
        __emit 0x71
        __emit 0x00
        __emit 0x3B
        __emit 0x80
        __emit 0x71
        __emit 0x00
        __emit 0x3B
        __emit 0x80
        __emit 0x71
        __emit 0x00
        __emit 0x3B
        __emit 0x80
        __emit 0x71
        __emit 0x00
        __emit 0x3B
        __emit 0x80
        __emit 0x71
        __emit 0x00
        __emit 0x50
        __emit 0x81
        __emit 0x71
        __emit 0x00
        __emit 0x50
        __emit 0x81
        __emit 0x71
        __emit 0x00
        __emit 0x3B
        __emit 0x80
        __emit 0x71
        __emit 0x00
        /* ---- 8 nops ---- */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        /* ---- real code ---- */
        mov     ecx, dword ptr [g_008aab18]
        test    ecx, ecx
        je      L_82f1
        mov     eax, dword ptr [ecx]
        test    eax, eax
        je      L_82e8
L_82e0:
        mov     ecx, eax
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jne     L_82e0
L_82e8:
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx], eax
        ret     4
L_82f1:
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [g_008aab18], ecx
        ret     4
    }
}
