/*
 * FUN_10006800 (55 B) - __fastcall (ECX = this). Sets vtable ptr, then
 * walks a singly-linked list at this[1] freeing each node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002128c; /* vtable ptr */
extern void *g_100210ec; /* IAT: free */

__declspec(naked) void __cdecl FUN_10006800(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 4]
        mov     dword ptr [edi], offset g_1002128c
        test    esi, esi
        jz      L_2d
        push    ebx
        mov     ebx, dword ptr [g_100210ec]
    L_18:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    ebx
        add     esp, 0x4
        test    esi, esi
        jnz     L_18
        mov     dword ptr [edi + 4], esi
        pop     ebx
        pop     edi
        pop     esi
        ret
    L_2d:
        mov     dword ptr [edi + 4], 0
        pop     edi
        pop     esi
        ret
    }
}
