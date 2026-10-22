/*
 * FUN_005b12c0 (17 B) — Zero two bytes at this+0x5cc / this+0x5cd.
 *
 * __thiscall (ECX = this), RET 0x4 (one stack arg).
 *
 * Disassembly:
 *   32 C0                xor     al, al
 *   88 81 CC 05 00 00    mov     byte ptr [ecx+0x5cc], al
 *   88 81 CD 05 00 00    mov     byte ptr [ecx+0x5cd], al
 *   C2 04 00             ret     0x4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005b12c0(void)
{
    __asm {
        xor     al, al
        mov     byte ptr [ecx+0x5cc], al
        mov     byte ptr [ecx+0x5cd], al
        ret     0x4
    }
}
