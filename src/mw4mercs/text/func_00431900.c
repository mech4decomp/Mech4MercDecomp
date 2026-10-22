/*
 * FUN_00431900 (39 B) — MLR __thiscall constructor/init. Calls FUN_00435e00,
 * zeroes two fields, stores vtable pointer 0x76e330, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00435e00(void);

__declspec(naked) void FUN_00431900(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00435e00
        xor     eax, eax
        mov     dword ptr [esi+0xb4], eax
        mov     dword ptr [esi+0xb8], eax
        mov     dword ptr [esi], 0x76e330
        mov     eax, esi
        pop     esi
        ret     4
    }
}
