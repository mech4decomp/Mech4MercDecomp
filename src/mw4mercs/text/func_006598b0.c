/*
 * FUN_006598b0 (23 B) — if param_1 != NULL, copy a 5-byte record
 * (dword + byte) from param_2 into param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006598b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L598c6
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     cl, byte ptr [ecx + 0x4]
        mov     dword ptr [eax], edx
        mov     byte ptr [eax + 0x4], cl
L598c6:
        ret
    }
}
