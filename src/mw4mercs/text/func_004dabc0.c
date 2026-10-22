/*
 * FUN_004DABC0 (33 B) — Destructor loop.
 *
 * __thiscall (ECX = this), no stack params.
 * Iterates 2 elements starting at [this+0xd0],
 * calls FUN_004F1A10 on each non-null element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004f1a10(int this);

__declspec(naked) void __fastcall FUN_004DABC0(int this)
{
    __asm {
        push    esi
        push    edi
        lea     esi, [ecx + 0xd0]
        mov     edi, 2
    l_loop:
        mov     ecx, [esi]
        test    ecx, ecx
        jz      l_skip
        call    FUN_004f1a10
    l_skip:
        add     esi, 4
        dec     edi
        jnz     l_loop
        pop     edi
        pop     esi
        ret
    }
}
