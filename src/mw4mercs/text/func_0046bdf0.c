/*
 * FUN_0046bdf0 (39 B) — MLR (MidLevelRenderer) graphics library.
 * __thiscall, RET 0x4. Constructor: calls FUN_0046fbc0, zeroes +0x88/+0x8c,
 * sets up the vtable pointer at +0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0046fbc0(void);

__declspec(naked) void FUN_0046bdf0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_0046fbc0
        xor     eax, eax
        mov     dword ptr [esi+0x88], eax
        mov     dword ptr [esi+0x8c], eax
        mov     dword ptr [esi], 0x76f118
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
