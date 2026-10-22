/*
 * FUN_005e6dc0 (23 B) — __fastcall method (ECX = this, RET 4).
 *
 * Zeroes fields at +0x1c8 (dword), +0x1cc (byte), +0x1d0 (dword).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005e6dc0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 0x1c8], eax
        mov     byte ptr [ecx + 0x1cc], al
        mov     dword ptr [ecx + 0x1d0], eax
        ret     4
    }
}
