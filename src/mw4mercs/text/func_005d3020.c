/*
 * FUN_005d3020 (34 B) — __thiscall, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005dcc10(void);

__declspec(naked) void __stdcall FUN_005d3020(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005dcc10
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x1c4]
        mov     edx, dword ptr [esi]
        push    0x0
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x184]
        pop     esi
        ret
    }
}
