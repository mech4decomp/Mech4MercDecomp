/*
 * FUN_00708ae0 (27 B) — gosScript registry/foreground-window helper
 * (__stdcall): stores a global and tail-calls FUN_00708c20 with two args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858bf8;
extern void __cdecl FUN_00708c20(void);

__declspec(naked) void FUN_00708ae0(void)
{
    __asm {
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x4]
        mov     eax, dword ptr [esp+0x8]
        push    ecx
        push    edx
        mov     dword ptr [g_00858bf8], eax
        call    FUN_00708c20
        ret     0xc
    }
}
