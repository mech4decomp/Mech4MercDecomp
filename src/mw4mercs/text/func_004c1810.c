/*
 * FUN_004C1810 (47 B) — Refcount decrement with vtable update.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004c68f0(int param_1);

__declspec(naked) void __fastcall FUN_004c1810(int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx

        mov     ecx, dword ptr [esi + 0x174]
        dec     word ptr [ecx + 0x10]
        mov     ax, word ptr [ecx + 0x10]
        test    ax, ax

        mov     dword ptr [esi], 0x007715d4

        jnz     l_skip_call

        test    ecx, ecx
        jz      l_skip_call
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]

    l_skip_call:
        mov     ecx, esi
        call    FUN_004c68f0

        pop     esi
        ret
    }
}
