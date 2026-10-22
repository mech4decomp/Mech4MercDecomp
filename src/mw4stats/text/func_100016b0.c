/*
 * FUN_100016b0 (219 B) - __thiscall string-buffer append. Grows the
 * buffer (malloc/realloc via IAT), copies in the source data, and
 * returns 1 (or 0 on alloc failure).
 *
 * __thiscall (ECX = this), RET 0x8 (2 dword params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100011a0(void);
extern void *g_malloc;   /* IAT slot 0x100210f8 (malloc) */
extern void *g_free;     /* IAT slot 0x100210ec (free) */

__declspec(naked) int __cdecl FUN_100016b0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        test    esi, esi
        push    edi
        mov     ebx, ecx
        jz      L177c
        mov     ebp, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [ebx + 0x10]
        lea     eax, [esi + ebp*1]
        mov     dword ptr [esp + 0x18], eax
        add     eax, 2
        cmp     eax, ecx
        jbe     L1753
        mov     ecx, dword ptr [ebx + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [ebx + 0x10], eax
        call    dword ptr [g_malloc]
        mov     edx, eax
        add     esp, 4
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jnz     L170c
        mov     ecx, ebx
        call    FUN_100011a0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xc
        ret     8
L170c:
        test    ebp, ebp
        jbe     L1751
        mov     esi, dword ptr [ebx]
        mov     ecx, ebp
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x10]
        sub     ecx, ebp
        lea     edi, [edx + ebp*1]
        mov     edx, ecx
        shr     ecx, 2
        xor     eax, eax
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        mov     eax, dword ptr [ebx]
        push    eax
        call    dword ptr [g_free]
        mov     esi, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 4
L1751:
        mov     dword ptr [ebx], edx
L1753:
        mov     eax, dword ptr [ebx]
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x20]
        mov     edx, ecx
        shr     ecx, 2
        lea     edi, [eax + ebp*1]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ebx + 0xc], ecx
        mov     byte ptr [eax + ecx*1], 0
        mov     byte ptr [eax + ecx*1 + 1], 0
L177c:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0xc
        ret     8
    }
}
