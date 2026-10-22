/*
 * FUN_0073B590 (29 B) — __cdecl (RET 0). Sets g_8aaef0 = 1 and stores
 * (g_8aaec8 == 0) into g_8aaec8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aaec8;
extern int g_8aaef0;

__declspec(naked) void FUN_0073B590(void)
{
    __asm {
        mov     ecx, dword ptr [g_8aaec8]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        mov     dword ptr [g_8aaef0], 1
        mov     dword ptr [g_8aaec8], eax
        ret
    }
}
