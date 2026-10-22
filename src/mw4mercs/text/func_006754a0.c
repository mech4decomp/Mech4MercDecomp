/*
 * FUN_006754a0 (25 B) — thunk: virtual call (vtable+0x14) with size 0x28,
 * then tail-call into FUN_00501eb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501eb0(void);

__declspec(naked) void FUN_006754a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0x28
        call    dword ptr [eax+0x14]
        push    esi
        call    FUN_00501eb0
        add     esp, 0x4
        pop     esi
        ret
    }
}
