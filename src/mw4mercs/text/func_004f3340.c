/*
 * FUN_004F3340 (24 B) — If this[4] == 2, call vtable[0x10](param1, param2).
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004f3340(void)
{
    __asm {
        cmp     dword ptr [ecx + 0x10], 2
        jnz     l_skip
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [esp + 8]
        push    edx
        call    dword ptr [eax + 0x10]
    l_skip:
        ret     8
    }
}
