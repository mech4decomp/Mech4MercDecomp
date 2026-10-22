/*
 * FUN_5e00e610 (14 B) — __fastcall (ECX = this).
 * Returns (0x4380 != 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e610(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4380]
        xor     eax, eax
        test    edx, edx
        setnz   al
        ret
    }
}
