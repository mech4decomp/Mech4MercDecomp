/*
 * FUN_00701970 (41 B) — gosScript list teardown. Walks the g_00856a7c
 * linked list, freeing each node via FUN_006f4230, then calls FUN_007018e0
 * and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856a7c;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_007018e0(void);

__declspec(naked) void FUN_00701970(void)
{
    __asm {
        mov     eax, dword ptr [g_00856a7c]
        push    esi
        mov     esi, eax
        test    esi, esi
        jz      L_done
L_loop:
        mov     esi, dword ptr [esi + 0x18]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        mov     eax, esi
        mov     dword ptr [g_00856a7c], eax
        /* __emit: MSVC6 miscomputes this backward jnz rel-offset (off-by-4) */
        __emit 0x75
        __emit 0xEC
L_done:
        call    FUN_007018e0
        mov     al, 0x1
        pop     esi
        ret
    }
}
