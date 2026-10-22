/*
 * FUN_004a1920 (43 B) — MLR particle/shrapnel: constructor. Calls
 * FUN_004a3500, zeroes fields 0x120/0x124/0x128, sets vtable 0x77029c.
 * __thiscall (this in ECX), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a3500(void);

__declspec(naked) void FUN_004a1920(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x52b
        call    FUN_004a3500
        xor     eax, eax
        mov     dword ptr [esi+0x128], eax
        mov     dword ptr [esi+0x120], eax
        mov     dword ptr [esi+0x124], eax
        mov     dword ptr [esi], 0x77029c
        mov     eax, esi
        pop     esi
        ret
    }
}
