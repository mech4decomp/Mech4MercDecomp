/*
 * FUN_00416d00 (14 B) — __fastcall: return [head+0xc] of list at
 * [this+0x10], or 0 if empty.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416d00(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L1
        mov     eax, dword ptr [eax + 0xc]
        ret
L1:
        xor     eax, eax
        ret
    }
}
