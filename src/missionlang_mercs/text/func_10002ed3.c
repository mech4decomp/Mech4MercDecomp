/*
 * FUN_10002ed3 (251 B) — initialize a new arena: build the free-list header
 * array, VirtualAlloc the buddy region, link the free blocks, and mark the
 * arena's bitmap. Returns the arena index (or -1 on VirtualAlloc failure).
 *
 * __cdecl, 1 arg (arena entry pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__stdcall *g_10004084)(void *, unsigned int, unsigned int, unsigned int); /* IAT 0x10004084 VirtualAlloc */

__declspec(naked) int __cdecl FUN_10002ed3(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     esi, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [ecx + 0x8]
        xor     ebx, ebx
L2EE5:
        test    eax, eax
        jl      L2EEE
        shl     eax, 1
        inc     ebx
        jmp     L2EE5
L2EEE:
        mov     eax, ebx
        push    0x3f
        imul    eax, eax, 0x204
        pop     edx
        lea     eax, [eax + esi + 0x144]
        mov     dword ptr [ebp - 4], eax
L2F03:
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [eax + 4], eax
        add     eax, 8
        dec     edx
        jnz     L2F03
        mov     edi, ebx
        push    0x4
        shl     edi, 0xf
        add     edi, dword ptr [ecx + 0xc]
        push    0x1000
        push    0x8000
        push    edi
        call    dword ptr [g_10004084]
        test    eax, eax
        jnz     L2F36
        or      eax, 0xffffffff
        jmp     L2FC9
L2F36:
        lea     edx, [edi + 0x7000]
        cmp     edi, edx
        ja      L2F7C
        lea     eax, [edi + 0x10]
L2F43:
        or      dword ptr [eax - 8], 0xffffffff
        or      dword ptr [eax + 0xfec], 0xffffffff
        lea     ecx, [eax + 0xffc]
        mov     dword ptr [eax - 4], 0xff0
        mov     dword ptr [eax], ecx
        lea     ecx, [eax + 0xffffeffc]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 0xfe8], 0xff0
        add     eax, 0x1000
        lea     ecx, [eax - 0x10]
        cmp     ecx, edx
        jbe     L2F43
L2F7C:
        mov     eax, dword ptr [ebp - 4]
        lea     ecx, [edi + 0xc]
        add     eax, 0x1f8
        push    0x1
        pop     edi
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [ecx + 8], eax
        lea     ecx, [edx + 0xc]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [ecx + 4], eax
        and     dword ptr [esi + ebx*4 + 0x44], 0
        mov     dword ptr [esi + ebx*4 + 0xc4], edi
        mov     al, byte ptr [esi + 0x43]
        mov     cl, al
        inc     cl
        test    al, al
        mov     eax, dword ptr [ebp + 0x8]
        mov     byte ptr [esi + 0x43], cl
        jnz     L2FB9
        or      dword ptr [eax + 4], edi
L2FB9:
        mov     edx, 0x80000000
        mov     ecx, ebx
        shr     edx, cl
        not     edx
        and     dword ptr [eax + 8], edx
        mov     eax, ebx
L2FC9:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
