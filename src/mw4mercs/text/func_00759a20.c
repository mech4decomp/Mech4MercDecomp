/*
 * FUN_00759a20 (39 B) — Constructor (thiscall, ECX = this).
 *
 * Calls base constructor FUN_00759710, zeroes fields at +0x810/+0x814/+0x818,
 * installs vtable 0x7AEED4 at +0, and returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00759710(void);

__declspec(naked) void *__fastcall FUN_00759a20(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00759710
        xor     eax, eax
        mov     dword ptr [esi + 0x810], eax
        mov     dword ptr [esi + 0x814], eax
        mov     word ptr [esi + 0x818], ax
        mov     dword ptr [esi], 0x7aeed4
        mov     eax, esi
        pop     esi
        ret
    }
}
