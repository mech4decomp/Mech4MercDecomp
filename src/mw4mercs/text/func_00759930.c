/*
 * FUN_00759930 (184 B) — builds a string buffer, calls an IAT function, and
 * copies a filtered string into an output buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_76b768;
extern void *g_8aace8;

__declspec(naked) void FUN_00759930(void)
{
    __asm {
        sub     esp, 0x810
        mov     al, byte ptr [g_76b768]
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        xor     ecx, ecx
        mov     dword ptr [esp+0xd], ecx
        mov     ebp, dword ptr [esp+0x828]
        mov     byte ptr [esp+0x1c], al
        mov     byte ptr [esp+0xc], al
        mov     byte ptr [esp+0x11], cl
        mov     dword ptr [esp+0x14], ecx
        xor     eax, eax
        mov     ecx, 0x1ff
        lea     edi, [esp+0x1d]
        rep stosd
        stosw
        lea     edx, [esp+0x18]
        push    edx
        push    0x7ff
        stosb
        lea     eax, [esp+0x24]
        push    eax
        mov     eax, dword ptr [esp+0x830]
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, dword ptr [esp+0x830]
        lea     edx, [esp+0x1c]
        push    edx
        push    1
        push    eax
        push    ecx
        mov     byte ptr [ebp], 0
        mov     dword ptr [esp+0x38], 0
        call    dword ptr [g_8aace8]
        mov     dl, byte ptr [esp+0x1c]
        xor     ecx, ecx
        test    dl, dl
        mov     word ptr [esi+0xc], ax
        lea     eax, [esp+0x1c]
        je      L_99d8
    L_99bc:
        mov     dl, byte ptr [eax]
        cmp     dl, 0x5b
        jne     L_99ce
        inc     eax
    L_99c4:
        mov     dl, byte ptr [eax]
        inc     eax
        cmp     dl, 0x5d
        jne     L_99c4
        jmp     L_99d3
    L_99ce:
        mov     byte ptr [ecx+ebp], dl
        inc     ecx
        inc     eax
    L_99d3:
        cmp     byte ptr [eax], 0
        jne     L_99bc
    L_99d8:
        pop     edi
        pop     esi
        mov     byte ptr [ecx+ebp], 0
        pop     ebp
        add     esp, 0x810
        ret     0xc
    }
}
