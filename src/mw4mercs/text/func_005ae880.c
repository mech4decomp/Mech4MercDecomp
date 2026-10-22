/*
 * FUN_005ae880 (21 B) — __thiscall (this = ECX), plain RET.
 *
 * Clears three adjacent byte flags on the object:
 *   [this+0x2c2] = 0
 *   [this+0x2c1] = 0
 *   [this+0x2c0] = 0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl func_005ae880(void)
{
    __asm {
        xor     al, al
        mov     byte ptr [ecx + 0x2c2], al
        mov     byte ptr [ecx + 0x2c1], al
        mov     byte ptr [ecx + 0x2c0], al
        ret
    }
}
