/*
 * FUN_00675d90 (28 B) — thunk: virtual call (vtable+0x14) with size 0x30c,
 * then tail-call into FUN_0066a150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0066a150(void);

__declspec(naked) void FUN_00675d90(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0x30c
        call    dword ptr [eax+0x14]
        push    esi
        call    FUN_0066a150
        add     esp, 0x4
        pop     esi
        ret
    }
}
