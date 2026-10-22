/*
 * FUN_006D2980 (135 B) — Dynamic int-array copy-assign with self-return (__thiscall).
 *
 * Copies an int array from param_1 (struct with {ptr, count}) into
 * this (same layout). Returns this pointer. Handles reallocation,
 * freeing old buffer if new count is 0. Self-assignment is a no-op.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (source struct ptr).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_006d2980(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, ecx
        cmp     ebx, eax
        push    esi
        push    edi
        jz      l_return_self
        mov     edi, dword ptr [eax + 4]
        test    edi, edi
        jbe     l_src_empty
        mov     esi, dword ptr [eax]
        cmp     edi, dword ptr [ebx + 4]
        jz      l_copy
        test    edi, edi
        jbe     l_free_old
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_alloc:
        lea     eax, [edi * 4]
        push    eax
        mov     dword ptr [ebx + 4], edi
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [ebx], eax
        jmp     l_copy
    l_free_old:
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx], 0
    l_copy:
        mov     ecx, dword ptr [ebx + 4]
        test    ecx, ecx
        jbe     l_return_self
        mov     edi, dword ptr [ebx]
        rep movsd
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     4
    l_src_empty:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      l_return_self
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 4], 0
    l_return_self:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     4
    }
}
