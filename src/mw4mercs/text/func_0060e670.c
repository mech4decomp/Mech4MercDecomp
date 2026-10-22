/*
 * FUN_0060e670 (55 B) — __thiscall (ECX = this), RET.
 * Builds a 3-word argument block on the stack, calls virtual
 * method at [*this+0x40], and returns the first word.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0060e670(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx]
        __emit 0x8D  /* __emit: MSVC6 drops the 00 disp byte for lea edx,[esp] */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        lea     edx, [esp + 0x8]
        push    edx
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x14], 0x87
        mov     dword ptr [esp + 0x10], 0x6
        mov     dword ptr [esp + 0xc], 0x1
        call    dword ptr [eax + 0x40]
        __emit 0x8B  /* __emit: MSVC6 drops the 00 disp byte for mov eax,[esp] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        add     esp, 0xc
        ret
    }
}
