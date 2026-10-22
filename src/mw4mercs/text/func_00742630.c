/*
 * FUN_00742630 (181 B) — allocates a node, copies a name string and a block,
 * and inserts the node into a linked list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b294;
extern int g_8aab08;

__declspec(naked) void FUN_00742630(void)
{
    __asm {
        test    byte ptr [esp+0xc], 1
        push    ebx
        push    esi
        jne     L_26de
        mov     esi, dword ptr [esp+0xc]
        test    esi, esi
        je      L_26de
        mov     ebx, dword ptr [esi+0x30]
        test    ebx, ebx
        je      L_26de
        push    ebp
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        add     ecx, 0x5b
        push    ecx
        call    dword ptr [g_76b294]
        mov     edx, eax
        lea     edi, [edx+4]
        mov     ecx, 0x14
        rep movsd
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 4
        mov     edi, ebx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     ebp, [edx+0x59]
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [g_8aab08]
        and     ecx, 3
        test    eax, eax
        rep movsb
        pop     edi
        mov     dword ptr [edx+0x54], 0
        mov     dword ptr [edx], 0
        pop     ebp
        je      L_26ce
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        je      L_26c2
    L_26ba:
        mov     eax, ecx
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jne     L_26ba
    L_26c2:
        pop     esi
        mov     dword ptr [eax], edx
        mov     eax, 1
        pop     ebx
        ret     0x10
    L_26ce:
        pop     esi
        mov     dword ptr [g_8aab08], edx
        mov     eax, 1
        pop     ebx
        ret     0x10
    L_26de:
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x10
    }
}
