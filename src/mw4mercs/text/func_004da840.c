/*
 * FUN_004da840 (62 B) — __thiscall. Builds a temporary object (vtable
 * 0x773400) via FUN_00417170, then FUN_004172a0, then FUN_004171b0,
 * returning the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004172a0(void);
extern void __cdecl FUN_004171b0(void);

__declspec(naked) void FUN_004da840(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [ecx+0x4]
        push    esi
        add     eax, 0x44
        push    eax
        lea     ecx, [esp+0x8]
        call    FUN_00417170
        mov     ecx, dword ptr [esp+0x1c]
        push    ecx
        lea     ecx, [esp+0x8]
        mov     dword ptr [esp+0x8], 0x773400
        call    FUN_004172a0
        lea     ecx, [esp+0x4]
        mov     esi, eax
        call    FUN_004171b0
        mov     eax, esi
        pop     esi
        add     esp, 0x14
        ret     0x4
    }
}
