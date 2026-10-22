/*
 * FUN_10038262 (16 B) - __cdecl, 1 arg. Swaps g_100754ac with arg1,
 * returning the previous value of g_100754ac.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_100754ac;   /* module data */

__declspec(naked) void __cdecl FUN_10038262(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        mov     eax, dword ptr [g_100754ac]
        mov     dword ptr [g_100754ac], ecx
        ret
    }
}
