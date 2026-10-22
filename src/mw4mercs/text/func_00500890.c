/*
 * GetTickCount (6 B) — Import thunk for GetTickCount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT entry: GetTickCount (0x0076B0E0) */
extern void *g_iat_76b0e0;

__declspec(naked) unsigned long __stdcall func_00500890(void)
{
    __asm {
        jmp dword ptr [g_iat_76b0e0]
    }
}
