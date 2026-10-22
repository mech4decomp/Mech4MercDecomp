/*
 * FUN_1000c530 (29 B) - __stdcall. Writes 0xfffffffd / 0 into *(param_2-8)
 * and *(param_2-4), stores param_2-8 back, then tail-jumps to FUN_1000c4c0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000c4c0(void);   /* rel32 jmp */

__declspec(naked) void __stdcall FUN_1000c530(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        add     eax, -8
        mov     dword ptr [eax], 0xfffffffd
        mov     dword ptr [eax + 4], 0
        mov     dword ptr [esp + 8], eax
        jmp     FUN_1000c4c0
    }
}
