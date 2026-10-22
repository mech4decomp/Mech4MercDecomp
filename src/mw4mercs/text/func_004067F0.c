/*
 * FUN_004067F0 (31 B) — __stdcall (RET 0xc). Calls FUN_006FE390 with
 * (g_7b7e98, 0x7b7e94, g_7b7ea0, 0x7b7e9c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7b7ea0;
extern int  g_7b7e98;
extern void __cdecl FUN_006fe390(void);

__declspec(naked) void FUN_004067F0(void)
{
    __asm {
        mov     eax, dword ptr [g_7b7ea0]
        mov     ecx, dword ptr [g_7b7e98]
        push    eax
        push    0x7b7e9c
        push    ecx
        push    0x7b7e94
        call    FUN_006fe390
        ret     0xc
    }
}
