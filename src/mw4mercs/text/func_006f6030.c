/*
 * FUN_006F6030 (194 B) — Hash table lookup with allocation.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param).
 * Looks up a key in a hash table. If found and valid, allocates a
 * 0x58-byte result object and links it. Returns 1 on success, 0 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_006f5460(int);
extern void *__cdecl FUN_006f6520(int size);
extern void __cdecl FUN_006f5110(void);

__declspec(naked) int __fastcall FUN_006F6030(int param_1)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, [esp + 0x10]
        push    edi
        mov     ebx, ecx
        push    esi
        call    FUN_006f5460
        test    al, al
        jnz     l_valid
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4

    l_valid:
        push    esi
        call    dword ptr [ebx + 0x10]
        mov     ecx, [ebx + 0x08]
        mov     edi, eax
        xor     eax, eax
        mov     ax, [ebx + 0x06]
        and     edi, 0xffff
        and     edi, eax
        shl     edi, 4
        mov     esi, [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      l_not_found
    l_search_loop:
        test    dword ptr [esi + 0x0c], 0x80000000
        jnz     l_next_bucket
        mov     ecx, [esp + 0x14]
        mov     ebp, [esi + 0x08]
        push    ecx
        push    ebp
        call    dword ptr [ebx + 0x0c]
        test    al, al
        jnz     l_found
    l_next_bucket:
        mov     esi, [esi]
        cmp     esi, edi
        jnz     l_search_loop
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     4

    l_found:
        mov     ebx, [ebx + 0x14]
        test    ebx, ebx
        jz      l_check_ebp
        push    ebp
        call    ebx
    l_check_ebp:
        test    ebp, ebp
        jnz     l_alloc
    l_not_found:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     4

    l_alloc:
        push    0x58
        call    FUN_006f6520
        mov     esi, eax
        test    esi, esi
        jz      l_alloc_fail
        lea     ecx, [esi + 0x18]
        mov     dword ptr [esi], 0x79fc54
        call    FUN_006f5110
        pop     edi
        mov     [ebp + 0x0c], esi
        mov     dword ptr [esi], 0x79fc50
        mov     dword ptr [esi + 0x04], 0
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4

    l_alloc_fail:
        xor     esi, esi
        pop     edi
        mov     [ebp + 0x0c], esi
        mov     [esi + 0x04], esi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4
    }
}
