/*
 * FUN_006ABA30 (210 B) — __fastcall (ECX=this, RET). Releases a set of
 * COM-style objects stored at this+0x8c/0x64/0x88/0x90/0x94/0x98/0x60/
 * 0x68/0x6c/0x70 by calling their vtable method 0 (Release) with arg 1,
 * then zeroes the pointers and sets this+0x20 = 0xbf800000.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006aba30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x8c]
        push    edi
        xor     edi, edi
        cmp     ecx, edi
        jz      l_46
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_46:
        mov     ecx, dword ptr [esi + 0x64]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x8c], edi
        jz      l_59
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_59:
        mov     ecx, dword ptr [esi + 0x88]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x64], edi
        jz      l_f8
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x90]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x88], edi
        jz      l_86
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_86:
        mov     ecx, dword ptr [esi + 0x94]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x90], edi
        jz      l_9c
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_9c:
        mov     ecx, dword ptr [esi + 0x98]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x94], edi
        jz      l_b2
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_b2:
        mov     ecx, dword ptr [esi + 0x60]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x98], edi
        jz      l_c5
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_c5:
        mov     ecx, dword ptr [esi + 0x68]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x60], edi
        jz      l_d5
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_d5:
        mov     ecx, dword ptr [esi + 0x6c]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x68], edi
        jz      l_e5
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_e5:
        mov     ecx, dword ptr [esi + 0x70]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x6c], edi
        jz      l_f5
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_f5:
        mov     dword ptr [esi + 0x70], edi
    l_f8:
        pop     edi
        mov     dword ptr [esi + 0x20], 0xbf800000
        pop     esi
        ret
    }
}
