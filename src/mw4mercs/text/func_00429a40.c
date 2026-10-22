/*
 * FUN_00429a40 (24 B) — __thiscall refcount decrement: DEC the word at
 * [ECX+0x10]; when it hits 0 (and ECX non-null) call vtable[0](1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00429a40(void)
{
    __asm {
        dec     word ptr [ecx+0x10]
        mov     ax, word ptr [ecx+0x10]
        test    ax, ax
        jnz     L_429a57
        test    ecx, ecx
        jz      L_429a57
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_429a57:
        ret
    }
}
