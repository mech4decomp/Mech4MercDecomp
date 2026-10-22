/*
 * FUN_10012080 (11 B) - returns ([ECX+0x24] == 0).
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_10012080(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x24]
        xor     eax, eax
        test    edx, edx
        setz    al
        ret
    }
}
