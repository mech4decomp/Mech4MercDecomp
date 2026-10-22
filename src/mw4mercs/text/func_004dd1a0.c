/*
 * FUN_004DD1A0 (17 B) — Virtual dispatch: dereferences the stack
 * param as a pointer, then calls vtable method at offset 4 on
 * this (ECX), passing the dereferenced value and 0.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: pointer).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004dd1a0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     edx, dword ptr [edx]
        mov     eax, dword ptr [ecx]
        push    0
        push    edx
        call    dword ptr [eax + 4]
        ret     4
    }
}
