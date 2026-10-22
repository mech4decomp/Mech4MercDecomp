/*
 * FUN_006992A0 (33 B) — __thiscall FPU helper. Reads [ecx+0x18] -> [eax+4],
 * computes fld([ecx+0x10]) - fsub([edx+8]) and returns. A second entry
 * (0x6992B0) calls this, fimul's the arg, then calls FUN_0075db4a (ret 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_006992A0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        fld     dword ptr [ecx + 0x10]
        mov     edx, dword ptr [eax + 4]
        fsub    dword ptr [edx + 8]
        ret
        nop
        nop
        nop
        call    FUN_006992A0
        fimul   dword ptr [esp + 4]
        call    FUN_0075db4a
        ret     4
    }
}
