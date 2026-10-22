/*
 * FUN_00727610 (26 B) — __stdcall getter: writes [0x008816c0] to *arg1
 * and [0x008816bc] to *arg2.
 *
 * Match: target 100%
 */

extern int g_8816c0;   /* 0x008816c0 */
extern int g_8816bc;   /* 0x008816bc */

__declspec(naked) void __stdcall FUN_00727610(int *a, int *b)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [g_8816c0]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [g_8816bc]
        mov     dword ptr [edx], eax
        ret     0x8
    }
}
