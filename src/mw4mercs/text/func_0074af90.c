/*
 * FUN_0074af90 (57 B) — __cdecl, RET 0x10 (4 stack params).
 *
 * Allocates a node via FUN_006f3c80(g_849308, 0x14), fills its 5 dword
 * fields (old head + 4 params), and links it as the new head at g_8b7a20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_849308;
extern int g_8b7a20;
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void __cdecl FUN_0074af90(void)
{
    __asm {
        mov     eax, dword ptr [g_849308]
        push    eax
        push    0x14
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_8b7a20]
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [g_8b7a20], eax
        ret     0x10
    }
}
