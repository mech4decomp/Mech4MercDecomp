/*
 * FUN_0061ad00 (14 B) — __fastcall: sets *ecx = 0xffff and stores ecx
 * into global DAT_007f2938.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2938;

__declspec(naked) void FUN_0061ad00(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax], 0xffff
        mov     dword ptr [g_007f2938], eax
        ret
    }
}
