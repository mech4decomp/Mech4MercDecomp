/*
 * FUN_00729a30 (102 B) — Linked-list teardown helper.
 *
 * Walks a singly-linked list rooted at global 0x008816c8 (each node:
 * +0x04 = next, +0x758 = element count, +0x760 = array of pointers).
 * For each node, frees each non-null array element via FUN_00717c10,
 * then deletes the node via FUN_006f4230. Clears the global root.
 *
 * __cdecl (RET), no params, returns void. Uses EBP as a scratch reg
 * (frame-pointer omission).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00717c10(void *p);
extern void __stdcall FUN_006f4230(void *p);
extern int g_008816c8;

__declspec(naked) void __cdecl FUN_00729a30(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [g_008816c8]
        test    ebp, ebp
        jz      label_729a8a
        push    ebx
        push    esi
        push    edi
label_729a3e:
        mov     edi, ebp
        mov     eax, dword ptr [edi + 0x758]
        mov     ebp, dword ptr [ebp + 0x4]
        xor     ebx, ebx
        test    eax, eax
        jbe     label_729a75
        lea     esi, [edi + 0x760]
label_729a55:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      label_729a67
        push    eax
        call    FUN_00717c10
        mov     dword ptr [esi], 0
label_729a67:
        mov     eax, dword ptr [edi + 0x758]
        inc     ebx
        add     esi, 4
        cmp     ebx, eax
        jc      label_729a55
label_729a75:
        push    edi
        call    FUN_006f4230
        test    ebp, ebp
        jnz     label_729a3e
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [g_008816c8], ebp
        pop     ebp
        ret
label_729a8a:
        mov     dword ptr [g_008816c8], 0
        pop     ebp
        ret
    }
}
