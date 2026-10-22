/*
 * func_004B6EF0 - thiscall getter
 * Copies globals 0x7b34a0/0x7b34a4/0x7b34a8 into [ecx+0x130]/[0x134]/[0x138]
 */

extern int g_7b34a0;
extern int g_7b34a4;
extern int g_7b34a8;

__declspec(naked) void func_004B6EF0()
{
    __asm {
        mov     eax, dword ptr [g_7b34a0]
        mov     edx, dword ptr [g_7b34a4]
        mov     dword ptr [ecx + 0x130], eax
        mov     eax, dword ptr [g_7b34a8]
        mov     dword ptr [ecx + 0x134], edx
        mov     dword ptr [ecx + 0x138], eax
        ret
    }
}
