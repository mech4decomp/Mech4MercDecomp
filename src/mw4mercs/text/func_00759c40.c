/*
 * FUN_00759C40 (136 B) — __thiscall (ECX = this), RET 0x10 (4 params).
 *
 * Calls FUN_00759740(this, p1, p2, p3, p4); if it returns nonzero,
 * copies param_4 into this+0x81a, calls a function pointer (0x8aacfc),
 * and on nonzero result calls a virtual method (vtable+0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char FUN_00759740(void);
extern int (__stdcall *g_8aacfc)(int, void *, void *);

__declspec(naked) void FUN_00759C40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_00759740
        test    al, al
        jnz     L1
        pop     edi
        pop     ebx
        ret     0x10
L1:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        push    esi
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [ebx + 0x81a]
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edx, dword ptr [ebx + 0x8]
        lea     ecx, [ebx + 0x810]
        push    ecx
        push    edx
        push    0x3
        call    dword ptr [g_8aacfc]
        test    ax, ax
        mov     word ptr [ebx + 0xc], ax
        pop     esi
        jz      L2
        mov     edx, dword ptr [ebx + 0x8]
        mov     eax, dword ptr [ebx]
        lea     ecx, [ebx + 0xe]
        push    ecx
        push    edx
        push    0x2
        mov     ecx, ebx
        call    dword ptr [eax + 0xc]
        pop     edi
        xor     al, al
        pop     ebx
        ret     0x10
L2:
        pop     edi
        mov     al, 0x1
        pop     ebx
        ret     0x10
    }
}
