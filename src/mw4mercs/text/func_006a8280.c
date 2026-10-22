/*
 * FUN_006a8280 (35 B) — copies 16 bytes from [esp+8] to [esp+4] if dest != 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a8280(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_ret
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], ecx
    L_ret:
        ret
    }
}
