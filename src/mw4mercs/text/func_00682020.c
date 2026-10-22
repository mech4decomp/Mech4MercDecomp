/*
 * FUN_00682020 (22 B) — HUD element list destructor: if the list head
 * (this->0) is non-null, frees it via FUN_004084e0. __thiscall, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00682020(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [ecx]
        test    eax, eax
        __emit 0x89  /* __emit: MSVC6 drops the 00 disp byte for [esp+0]; ref needs 89 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      L_682034
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_682034:
        pop     ecx
        ret
    }
}
