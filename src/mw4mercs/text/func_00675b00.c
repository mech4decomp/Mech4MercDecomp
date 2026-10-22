/*
 * FUN_00675b00 (28 B) — thunk: virtual call (vtable+0x14) with size 0xa4,
 * then tail-call into FUN_00674dd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00674dd0(void);

__declspec(naked) void FUN_00675b00(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0xa4
        call    dword ptr [eax+0x14]
        push    esi
        call    FUN_00674dd0
        add     esp, 0x4
        pop     esi
        ret
    }
}
