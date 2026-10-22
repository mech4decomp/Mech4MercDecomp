/*
 * FUN_006CAF20 (44 B) — __stdcall (RET 4) global-state setter.
 *
 * Reads fields from the single param and stores them into globals
 * at 0x0082f368..0x0082f380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82f374;
extern int g_82f380;
extern int g_82f368;
extern int g_82f36c;
extern int g_82f378;

__declspec(naked) void __stdcall FUN_006caf20(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [g_82f374], ecx
        xor     ecx, ecx
        mov     dword ptr [g_82f380], eax
        mov     dword ptr [g_82f368], ecx
        mov     dword ptr [g_82f36c], ecx
        mov     dword ptr [g_82f378], edx
        ret     4
    }
}
