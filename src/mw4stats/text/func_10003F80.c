/*
 * FUN_10003F80 (17 B, __fastcall) - calls FUN_10003fd0(ecx), then
 * DeleteCriticalSection(ecx) via IAT [0x10021038].
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10003fd0(void);
extern void *g_DeleteCriticalSection_10021038;

__declspec(naked) void FUN_10003F80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003fd0
        push    esi
        call    dword ptr [g_DeleteCriticalSection_10021038]
        pop     esi
        ret
    }
}
