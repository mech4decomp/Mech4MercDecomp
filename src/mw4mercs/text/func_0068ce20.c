/*
 * FUN_0068ce20 (22 B) — __fastcall delete wrapper: if *this is non-null,
 * calls operator delete (FUN_004084e0) on it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0068ce20(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [ecx]
        test    eax, eax
        __emit 0x89          /* mov [esp],eax: MSVC6 drops the 00 disp byte (89 04 24); ref needs 89 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
skip:
        pop     ecx
        ret
    }
}
