/*
 * FUN_0064c3d0 (26 B) — __thiscall table lookup:
 *   index = this->[0x20]; base = g_0080d970;
 *   return base->[0xc + index*0x28]->[arg*4]
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080d970;

__declspec(naked) void FUN_0064c3d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [g_0080d970]
        lea     eax, [eax + eax*4]
        mov     edx, dword ptr [ecx + eax*8 + 0xc]
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [edx + eax*4]
        ret     0x4
    }
}
