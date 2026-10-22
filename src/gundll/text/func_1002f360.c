/*
 * FUN_1002f360 (12 B) - __fastcall. InterlockedExchange(*param_1, 0).
 *
 * CFLAGS: /O1
 */

extern void *g_1004908c;   /* IAT: InterlockedExchange */

__declspec(naked) void __fastcall FUN_1002f360(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        push    0
        push    eax
        call    dword ptr [g_1004908c]
        ret
    }
}
