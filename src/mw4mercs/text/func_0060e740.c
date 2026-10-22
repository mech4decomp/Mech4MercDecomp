/*
 * FUN_0060E740 (98 B) — __fastcall (ECX = this), RET 8.
 *
 * Builds a small stack frame and dispatches through a vtable slot
 * (0x4C or 0x40) depending on a flag at this+0x4 / [this+0x4]+0x99C.
 * Returns the value stored at [ESP].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__fastcall FUN_0060e740(void *this, int param1, int param2)
{
    __asm {
        sub     esp, 0xc
        mov     edx, dword ptr [ecx + 0x4]
        test    edx, edx
        mov     eax, 1
        mov     dword ptr [esp + 0x8], 0x83
        mov     dword ptr [esp + 0x4], 6
        __emit 0x89   /* mov dword ptr [esp],eax — MSVC6 drops zero disp (89 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      l_ret
        mov     eax, dword ptr [edx + 0x99c]
        test    eax, eax
        mov     eax, dword ptr [ecx]
        jz      l_branch2
        lea     edx, [esp + 0x4]
        push    edx
        lea     edx, [esp + 0xc]
        push    edx
        call    dword ptr [eax + 0x4c]
        __emit 0x8B   /* mov eax,[esp] — MSVC6 drops zero disp (8B 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        add     esp, 0xc
        ret     8
    l_branch2:
        __emit 0x8D   /* lea edx,[esp] — MSVC6 drops zero disp (8D 14 24) */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        lea     edx, [esp + 0x8]
        push    edx
        lea     edx, [esp + 0x10]
        push    edx
        call    dword ptr [eax + 0x40]
        __emit 0x8B   /* mov eax,[esp] — MSVC6 drops zero disp (8B 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
    l_ret:
        add     esp, 0xc
        ret     8
    }
}
