/*
 * FUN_006876f0 (59 B) — __thiscall destructor.
 *
 * Sets vtable 0x798bfc, walks a singly-linked list at [this+4] freeing each
 * node via FUN_004084e0(), then nulls [this+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_006876f0(void)
{
    __asm {
        push    ebx
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x4]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [edi], 0x798bfc
        jz      L_done
        push    esi
    L_loop:
        cmp     eax, ebx
        mov     esi, dword ptr [eax]
        jz      L_skip
        mov     dword ptr [eax + 0x4], ebx
        push    eax
        mov     dword ptr [eax], ebx
        call    FUN_004084e0
        add     esp, 0x4
    L_skip:
        cmp     esi, ebx
        mov     eax, esi
        jnz     L_loop
        pop     esi
        mov     dword ptr [edi + 0x4], ebx
        pop     edi
        pop     ebx
        ret
    L_done:
        mov     dword ptr [edi + 0x4], ebx
        pop     edi
        pop     ebx
        ret
    }
}
