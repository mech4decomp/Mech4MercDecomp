/*
 * FUN_006876d0 (22 B) — __fastcall. If *this != 0, frees it via
 * FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006876d0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [ecx]
        test    eax, eax
        __emit 0x89                 /* mov dword ptr [esp],eax: MSVC6 drops the 00 disp byte (89 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      L_6876e4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6876e4:
        pop     ecx
        ret
    }
}
