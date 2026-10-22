/*
 * FUN_100375F0 (26 B) - __stdcall, RET 0x4 (1 arg). Reads arg1 (eax),
 * pushes [eax+0x1c], [eax+0x28], 0, [eax+0x18] and calls FUN_100393f9
 * (cdecl, 4 args).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100393f9(void);   /* rel32 call, __cdecl */

__declspec(naked) void __stdcall FUN_100375F0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    dword ptr [eax+0x1c]
        push    dword ptr [eax+0x28]
        push    0
        push    dword ptr [eax+0x18]
        call    FUN_100393f9
        add     esp, 0x10
        ret     4
    }
}
