/*
 * FUN_00561DF0 (52 B) — Binary tree search. Walks a tree rooted at *this,
 * comparing node->field_10 with *arg2. Stores the last node visited when
 * going left (or the root) into *arg1.
 * __thiscall (ecx = this, ret 8 cleans 2 stack args).
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_00561DF0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 4]
        test    eax, eax
        je      empty
        mov     edx, dword ptr [esp + 8]
        mov     edx, dword ptr [edx]
    loop_start:
        cmp     dword ptr [eax + 0x10], edx
        jl      go_right
        mov     ecx, eax
        mov     eax, dword ptr [eax + 8]
        jmp     check
    go_right:
        mov     eax, dword ptr [eax + 0xC]
    check:
        test    eax, eax
        jne     loop_start
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        ret     8
    empty:
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        ret     8
    }
}
