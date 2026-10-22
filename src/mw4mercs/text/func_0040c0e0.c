/*
 * FUN_0040c0e0 (19 B) — __fastcall list-pop helper. Reads the head of a
 * linked list at [ECX+8]; if non-null, returns its value and advances
 * the head to the next node; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040c0e0(void)
{
    __asm {
        mov     edx, dword ptr [ecx+8]
        test    edx, edx
        jz      L_0040c0f0
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [edx+4]
        mov     dword ptr [ecx+8], edx
        ret
    L_0040c0f0:
        xor     eax, eax
        ret
    }
}
