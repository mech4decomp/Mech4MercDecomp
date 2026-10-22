/*
 * FUN_006D2A10 (127 B) — Dynamic int-array copy-assign (__thiscall).
 *
 * Copies an int array from param_1 (struct with {ptr, count}) into
 * this (same layout). Reallocates if sizes differ. Frees old buffer
 * if new count is 0.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (source struct ptr).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_006d2a10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, dword ptr [eax + 4]
        test    ebx, ebx
        push    esi
        push    edi
        mov     edi, ecx
        jbe     l_src_empty
        mov     esi, dword ptr [eax]
        cmp     ebx, dword ptr [edi + 4]
        jz      l_copy
        test    ebx, ebx
        jbe     l_free_old
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_alloc:
        lea     eax, [ebx * 4]
        push    eax
        mov     dword ptr [edi + 4], ebx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [edi], eax
        jmp     l_copy
    l_free_old:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
    l_copy:
        mov     ecx, dword ptr [edi + 4]
        test    ecx, ecx
        jbe     l_done2
        mov     edi, dword ptr [edi]
        rep movsd
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    l_src_empty:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      l_done2
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 4], 0
    l_done2:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
