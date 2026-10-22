/*
 * FUN_007018c0 (28 B) — gosScript linked-list find (__stdcall, 1 arg).
 * Walks the g_00856a7c list looking for a node whose +0x14 field equals
 * the argument; returns the matching node (or NULL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856a7c;

__declspec(naked) void FUN_007018c0(void)
{
    __asm {
        mov     eax, dword ptr [g_00856a7c]
        test    eax, eax
        jz      L_done
L_loop:
        mov     ecx, dword ptr [esp + 0x4]
        cmp     dword ptr [eax + 0x14], ecx
        jz      L_done
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        /* __emit: MSVC6 miscomputes this backward jnz rel-offset (off-by-4) */
        __emit 0x75
        __emit 0xF4
L_done:
        ret     0x4
    }
}
