/*
 * FUN_0060b1e0 (41 B) — __thiscall. If this->[4] != 0, calls
 * FUN_005a3a50(**(arg+4), 0x3dcccccd) with this = this->[0x9a4].
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a3a50(void);

__declspec(naked) int FUN_0060b1e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      L_skip
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [edx]
        push    0x3dcccccd
        push    ecx
        mov     ecx, dword ptr [eax + 0x9a4]
        call    FUN_005a3a50
    L_skip:
        mov     eax, 0x1
        ret     0x8
    }
}
