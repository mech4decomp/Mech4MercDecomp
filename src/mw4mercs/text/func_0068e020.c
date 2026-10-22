/*
 * FUN_0068E020 (60 B) — __thiscall (ECX = this, one stack param).
 *
 * Linear search over a linked-list array at this+0x14..this+0x18
 * for an entry whose (vtable+4) or (vtable+8) equals the param.
 * Returns the found entry pointer, or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_0068e020(int param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x18]
        cmp     eax, edi
        jz      l_done0
        mov     ebx, dword ptr [esp + 0x10]
    l_loop:
        mov     edx, dword ptr [eax]
        mov     esi, dword ptr [edx + 0x4]
        cmp     esi, ecx
        jnz     l_skip
        mov     edx, dword ptr [edx + 0x8]
        jmp     l_cont
    l_skip:
        mov     edx, esi
    l_cont:
        cmp     edx, ebx
        jz      l_found
        add     eax, 0x4
        cmp     eax, edi
        jnz     l_loop
    l_done0:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     4
    l_found:
        mov     eax, dword ptr [eax]
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
