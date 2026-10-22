/*
 * FUN_00416670 (94 B) — DB item/pool helper. Walks a linked list at
 * [this+0x14]; calls virtual method [vtbl+0x18] on each node; if it
 * returns nonzero, returns that value (after calling [vtbl+0x10]).
 * Otherwise bumps [this+0x10] via FUN_00416840 and retries the next
 * node. Returns 0 if the list is empty.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416840(void);

__declspec(naked) void FUN_00416670(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x14]
        xor     ebx, ebx
        test    esi, esi
        jz      ret0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        test    eax, eax
        jz      next
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret
next:
        mov     ecx, dword ptr [edi + 0x10]
        inc     ecx
        push    ecx
        mov     ecx, edi
        call    FUN_00416840
        mov     edi, dword ptr [edi + 0x14]
        test    edi, edi
        jz      ret0
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x18]
        mov     esi, eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x10]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
ret0:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret
    }
}
