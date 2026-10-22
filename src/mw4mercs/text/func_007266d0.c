/*
 * FUN_007266d0 (616 B) — __thiscall buffer/stream reader. Reads data
 * from a segmented buffer (this+0xb4/0xb8/0xc0/0xc4) into a destination,
 * recursing when a segment is exhausted. Returns bytes read or -1.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__cdecl *g_76b164)(void *, void *, int);  /* IAT (memcpy-like) */
extern void __cdecl FUN_00726df0(void);

__declspec(naked) unsigned int __stdcall FUN_007266d0(
    int param_1, unsigned int param_2, int param_3, char param_4)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp]
        cmp     eax, 0x4
        push    esi
        push    edi
        jz      L_77b
    L_6e6:
        cmp     eax, 0x6
        jz      L_77b
        mov     esi, dword ptr [ebp + 0xc4]
        mov     edi, dword ptr [ebp + 0xb8]
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [ebp + 0xc0]
        mov     ecx, dword ptr [eax + edi*0x4]
        cmp     edx, ecx
        jc      L_7b4
        mov     esi, dword ptr [esi + 0x4]
        mov     esi, dword ptr [esi + edi*0x4]
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, edx
        sub     eax, ecx
        sub     esi, eax
        add     esi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        mov     edx, dword ptr [ebp + 0xc4]
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xb8]
        mov     esi, dword ptr [edx]
        inc     ecx
        cmp     ecx, esi
        mov     dword ptr [ebp + 0xb8], ecx
        jc      L_754
        mov     dword ptr [ebp + 0xb8], 0x0
    L_754:
        mov     edx, dword ptr [esp + 0x14]
        add     edx, eax
        sub     ebx, eax
        mov     eax, dword ptr [ebp]
        cmp     eax, 0x4
        mov     dword ptr [ebp + 0xc0], 0x0
        mov     byte ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x14], edx
        jnz     L_6e6
    L_77b:
        mov     eax, dword ptr [ebp + 0x34]
        mov     ecx, dword ptr [ebp + 0x14]
        xor     esi, esi
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], esi
        jnc     L_869
        mov     edx, dword ptr [ebp + 0xb4]
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx + 0x4]
        push    esi
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    ebx
        push    edi
        push    eax
        call    dword ptr [g_76b164]
        mov     esi, dword ptr [esp + 0x18]
        jmp     L_86d
    L_7b4:
        mov     esi, dword ptr [ebp + 0xc4]
        mov     edi, dword ptr [ebp + 0xb8]
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [ebp + 0xc0]
        mov     eax, dword ptr [eax + edi*0x4]
        sub     eax, edx
        cmp     ebx, eax
        jbe     L_83e
        mov     esi, dword ptr [esi + 0x4]
        mov     esi, dword ptr [esi + edi*0x4]
        mov     edi, dword ptr [esp + 0x14]
        add     esi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        mov     edx, dword ptr [ebp + 0xc4]
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xb8]
        mov     esi, dword ptr [edx]
        inc     ecx
        cmp     ecx, esi
        mov     dword ptr [ebp + 0xb8], ecx
        jc      L_811
        mov     dword ptr [ebp + 0xb8], 0x0
    L_811:
        mov     ecx, dword ptr [esp + 0x1c]
        push    0x0
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, ebx
        sub     edx, eax
        add     eax, ecx
        push    edx
        push    eax
        mov     ecx, ebp
        mov     dword ptr [ebp + 0xc0], 0x0
        call    FUN_007266d0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0x10
    L_83e:
        mov     eax, dword ptr [esi + 0x4]
        mov     esi, dword ptr [eax + edi*0x4]
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, ebx
        mov     eax, ecx
        shr     ecx, 0x2
        add     esi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        pop     edi
        add     edx, ebx
        pop     esi
        mov     dword ptr [ebp + 0xc0], edx
        pop     ebp
        pop     ebx
        ret     0x10
    L_869:
        mov     edi, dword ptr [esp + 0x14]
    L_86d:
        cmp     esi, ebx
        jz      L_927
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jz      L_8d1
        mov     al, byte ptr [esp + 0x20]
        test    al, al
        jz      L_88f
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret     0x10
    L_88f:
        mov     eax, dword ptr [ebp + 0x34]
        add     eax, esi
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x34], eax
        call    FUN_00726df0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        push    0x1
        push    ecx
        sub     ebx, eax
        push    ebx
        add     eax, edi
        push    eax
        mov     ecx, ebp
        call    FUN_007266d0
        cmp     eax, -0x1
        jnz     L_8c4
        pop     edi
        pop     esi
        pop     ebp
        or      eax, eax
        pop     ebx
        ret     0x10
    L_8c4:
        mov     edx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        add     eax, edx
        pop     ebx
        ret     0x10
    L_8d1:
        test    esi, esi
        mov     ecx, ebx
        jz      L_8f3
        mov     eax, dword ptr [ebp + 0x20]
        xor     edx, edx
        sub     ecx, esi
        cmp     word ptr [eax + 0xe], 0x8
        setnz   dl
        dec     edx
        and     edx, 0x80
        mov     al, dl
        add     edi, esi
        jmp     L_909
    L_8f3:
        mov     eax, dword ptr [ebp + 0x20]
        xor     edx, edx
        cmp     word ptr [eax + 0xe], 0x8
        setnz   dl
        dec     edx
        and     edx, 0x80
        mov     al, dl
    L_909:
        mov     dl, al
        mov     dh, dl
        mov     esi, ecx
        shr     ecx, 0x2
        mov     eax, edx
        shl     eax, 0x10
        mov     ax, dx
        rep stosd
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x18]
        and     ecx, 0x3
        rep stosb
    L_927:
        mov     eax, dword ptr [ebp + 0x34]
        pop     edi
        add     eax, esi
        pop     esi
        mov     dword ptr [ebp + 0x34], eax
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0x10
    }
}
