/*
 * FUN_006c88a0 (165 B) — Constructor: allocates a 0x10-byte node, links it
 * into a global singly-linked list (head 0x0082f350), bumps a global count
 * (0x0082f354), zeroes 6 dwords of the object, and fills fields from params.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_malloc;    /* IAT 0x0076b294 */
extern int g_82f350;      /* 0x0082f350 */
extern int g_82f354;      /* 0x0082f354 */

__declspec(naked) void *__stdcall FUN_006c88a0(void *p2, void *p3, void *p4, void *p5)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    0x10
        mov     dword ptr [esi], 0x79e21c
        call    dword ptr [g_malloc]
        mov     ecx, dword ptr [g_82f350]
        xor     ebx, ebx
        add     esp, 0x4
        cmp     ecx, ebx
        mov     dword ptr [eax + 0xc], esi
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x8], ebx
        jnz     L_6c88d8
        mov     dword ptr [g_82f350], eax
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x8], ebx
        jmp     L_6c88f1
    L_6c88d8:
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, ebx
        jz      L_6c88e8
    L_6c88df:
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, ebx
        jnz     L_6c88df
    L_6c88e8:
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x8], ecx
    L_6c88f1:
        mov     eax, dword ptr [g_82f354]
        inc     eax
        lea     edx, [esi + 0x4]
        mov     dword ptr [g_82f354], eax
        xor     eax, eax
        mov     edi, edx
        mov     ecx, 0x6
        rep stosd
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x8], eax
        mov     al, 0x1
        mov     dword ptr [edx], ecx
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     byte ptr [esi + 0x24], al
        mov     byte ptr [esi + 0x1e], al
        pop     edi
        mov     dword ptr [esi + 0x20], ebx
        mov     byte ptr [esi + 0x1c], bl
        mov     byte ptr [esi + 0x1d], bl
        mov     dword ptr [esi + 0xc], edx
        mov     dword ptr [esi + 0x10], 0x20
        mov     dword ptr [esi + 0x14], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
