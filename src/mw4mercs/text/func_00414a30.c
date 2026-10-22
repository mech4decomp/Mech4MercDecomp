/*
 * FUN_00414a30 (43 B) — archive hash-table teardown.
 *
 * Iterates 0x3fd hash buckets starting at (*param_1)+0x18; for each bucket
 * walks the linked list (next at +0xc) calling FUN_00413940 (entry_load /
 * release) on each node.
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_00413940 — entry release (__thiscall, 0 stack params)
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void __cdecl FUN_00413940(void);    /* FUN_00413940 */

__declspec(naked) void func_00414a30(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, [ecx]          ; edi = *param_1
        add     edi, 0x18           ; edi = *param_1 + 0x18
        mov     ebx, 0x3fd          ; bucket count
    bucket_loop:
        mov     esi, [edi]          ; esi = bucket head
        test    esi, esi
        jz      next_bucket
    node_loop:
        mov     ecx, esi
        call    FUN_00413940        ; release(esi)
        mov     esi, [esi+0xc]      ; esi = next
        test    esi, esi
        jnz     node_loop
    next_bucket:
        add     edi, 4
        dec     ebx
        jnz     bucket_loop
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
