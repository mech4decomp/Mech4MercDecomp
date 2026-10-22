/*
 * FUN_005e7700 (15 B) — __fastcall (ECX = this), RET 0.
 *
 * Zeroes this+0x1cc (byte) and this+0x1d0 (dword).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005e7700(void)
{
    __asm {
        xor     eax, eax
        mov     byte ptr [ecx + 0x1cc], al
        mov     dword ptr [ecx + 0x1d0], eax
        ret
    }
}
