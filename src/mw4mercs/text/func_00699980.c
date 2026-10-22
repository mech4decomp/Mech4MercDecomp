/*
 * FUN_00699980 (35 B) — copies 16 bytes from [esp+8] to [esp+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00699980(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [ecx]
        mov     edx, eax
        mov     dword ptr [edx], esi
        mov     esi, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], esi
        mov     esi, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [edx + 0x8], esi
        mov     dword ptr [edx + 0xc], ecx
        pop     esi
        ret
    }
}
