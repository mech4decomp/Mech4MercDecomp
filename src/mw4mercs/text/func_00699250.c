/*
 * FUN_00699250 (33 B) — __thiscall FPU helper. Reads [ecx+0x18] -> [eax+4],
 * computes fld([ecx+0x10]) - fsub([edx+0xc]) and returns. A second entry
 * (0x699260) calls this, fimul's the arg, then calls FUN_0075db4a (ret 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00699250(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        fld     dword ptr [ecx + 0x10]
        mov     edx, dword ptr [eax + 4]
        fsub    dword ptr [edx + 0xc]
        ret
        nop
        nop
        nop
        call    FUN_00699250
        fimul   dword ptr [esp + 4]
        call    FUN_0075db4a
        ret     4
    }
}
