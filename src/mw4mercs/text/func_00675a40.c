/*
 * FUN_00675a40 (28 B) — thunk: virtual call (vtable+0x14) with size 0x9c,
 * then tail-call into FUN_00677590.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00677590(void);

__declspec(naked) void FUN_00675a40(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0x9c
        call    dword ptr [eax+0x14]
        push    esi
        call    FUN_00677590
        add     esp, 0x4
        pop     esi
        ret
    }
}
