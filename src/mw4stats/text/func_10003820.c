/*
 * FUN_10003820 (22 B) - zero this[0..3], set this[0]=0x10.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10003820(void)
{
    __asm {
        xor     eax, eax
        mov     edx, ecx
        mov     [edx], eax
        mov     [edx + 4], eax
        mov     [edx + 8], eax
        mov     [edx + 0xc], eax
        mov     dword ptr [ecx], 0x10
        ret
    }
}
