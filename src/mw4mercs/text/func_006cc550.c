/*
 * FUN_006cc550 (169 B) — Remove a node matching (key, p2, p3) from a
 * doubly-linked list stored in the object; unlink, fix neighbors, decrement
 * count, and free the node. Returns 1 on success, 0 if not found.
 *
 * __thiscall (ECX = this), RET 0xc (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4230(void *a);

__declspec(naked) int __stdcall FUN_006cc550(int p1, int p2, int p3)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x10]
        push    ebx
        mov     ebx, dword ptr [ecx + 0x8]
        push    ebp
        mov     ebp, dword ptr [edx]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        xor     esi, esi
        cmp     ebp, edi
        mov     eax, ebx
        jnz     L_6cc56e
        mov     edx, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x10], edx
    L_6cc56e:
        test    eax, eax
        jz      L_6cc591
        mov     edx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x18]
    L_6cc57a:
        cmp     dword ptr [eax], edi
        jnz     L_6cc588
        cmp     dword ptr [eax + 0x10], edx
        jnz     L_6cc588
        cmp     dword ptr [eax + 0xc], ebp
        jz      L_6cc59a
    L_6cc588:
        mov     esi, eax
        mov     eax, dword ptr [eax + 0x4]
        test    eax, eax
        jnz     L_6cc57a
    L_6cc591:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0xc
    L_6cc59a:
        test    esi, esi
        mov     edx, dword ptr [eax + 0x4]
        jz      L_6cc5db
        mov     dword ptr [esi + 0x4], edx
        mov     edx, dword ptr [eax + 0x4]
        test    edx, edx
        jz      L_6cc5ae
        mov     dword ptr [edx + 0x8], esi
    L_6cc5ae:
        cmp     eax, ebx
        jnz     L_6cc5bf
        test    edx, edx
        mov     dword ptr [ecx + 0x8], edx
        jz      L_6cc5bf
        mov     edi, dword ptr [eax + 0x8]
        mov     dword ptr [edx + 0x8], edi
    L_6cc5bf:
        cmp     eax, dword ptr [ecx + 0xc]
        jnz     L_6cc5e5
        mov     edx, dword ptr [ecx]
        dec     edx
        push    eax
        mov     dword ptr [ecx + 0xc], esi
        mov     dword ptr [ecx], edx
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0xc
    L_6cc5db:
        mov     dword ptr [ecx + 0x8], edx
        mov     dword ptr [edx + 0x8], 0x0
    L_6cc5e5:
        mov     edx, dword ptr [ecx]
        dec     edx
        push    eax
        mov     dword ptr [ecx], edx
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0xc
    }
}
