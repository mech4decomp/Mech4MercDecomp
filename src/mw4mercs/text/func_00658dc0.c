/*
 * FUN_00658dc0 (52 B) — Binary tree lookup by key.
 *
 * __thiscall (ECX = this). Walks a tree rooted at *(this) whose nodes
 * have layout: +0x04 = root, +0x08 = right child, +0x0C = left child,
 * +0x10 = key. Returns the last node whose key >= *param_2 via *param_1.
 * RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00658dc0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      l_done
        mov     edx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [edx]
    l_loop:
        cmp     dword ptr [eax + 0x10], edx
        jl      l_left
        mov     ecx, eax
        mov     eax, dword ptr [eax + 0x8]
        jmp     l_cont
    l_left:
        mov     eax, dword ptr [eax + 0xc]
    l_cont:
        test    eax, eax
        jnz     l_loop
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     8
    l_done:
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     8
    }
}
