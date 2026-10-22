/*
 * FUN_004d85b0 (359 B) — __cdecl RC4-style stream cipher. Key-scheduling
 * (0x100-byte S-box init) then PRGA XOR into arg3 buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d8720(void);

__declspec(naked) void FUN_004d85b0(void)
{
    __asm {
        sub     esp, 0x110
        xor     eax, eax
        lea     ecx, [esp+0x10]
L85bc:
        mov     byte ptr [ecx], al
        inc     eax
        inc     ecx
        cmp     ax, 0x100
        jl      L85bc
        push    ebx
        mov     ebx, dword ptr [esp+0x11c]
        push    ebp
        push    esi
        push    edi
        mov     byte ptr [esp+0x10], 0x0
        xor     esi, esi
        lea     edi, [esp+0x20]
        mov     ebp, 0x100
L85e1:
        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x124]
        xor     ecx, ecx
        and     eax, 0xff
        mov     cl, byte ptr [eax+edx*1]
        xor     edx, edx
        mov     dl, byte ptr [edi]
        add     esi, ecx
        add     edx, esi
        and     edx, 0x800000ff
        jns     L860e
        dec     edx
        or      edx, 0xffffff00
        inc     edx
L860e:
        inc     eax
        mov     byte ptr [esp+0x14], dl
        cdq
        idiv    ebx
        mov     esi, dword ptr [esp+0x14]
        and     esi, 0xff
        lea     eax, [esp+esi*1+0x20]
        push    eax
        push    edi
        mov     byte ptr [esp+0x18], dl
        call    FUN_004d8720
        add     esp, 0x8
        inc     edi
        dec     ebp
        jnz     L85e1
        mov     eax, dword ptr [esp+0x130]
        xor     ebp, ebp
        cmp     eax, ebp
        mov     dword ptr [esp+0x18], ebp
        jle     L870c
        xor     esi, esi
        xor     edi, edi
L864f:
        mov     ecx, dword ptr [esp+0x12c]
        xor     eax, eax
        mov     al, byte ptr [ecx+ebp*1]
        and     eax, 0xff
        lea     edx, [eax+esi*1+0x1]
        and     edx, 0x800000ff
        jns     L8674
        dec     edx
        or      edx, 0xffffff00
        inc     edx
L8674:
        mov     byte ptr [esp+0x10], dl
        mov     esi, dword ptr [esp+0x10]
        and     esi, 0xff
        xor     eax, eax
        mov     al, byte ptr [esp+esi*1+0x20]
        lea     ebx, [esp+esi*1+0x20]
        add     eax, edi
        and     eax, 0x800000ff
        jns     L869c
        dec     eax
        or      eax, 0xffffff00
        inc     eax
L869c:
        mov     byte ptr [esp+0x14], al
        mov     edi, dword ptr [esp+0x14]
        and     edi, 0xff
        lea     eax, [esp+edi*1+0x20]
        push    eax
        push    ebx
        mov     dword ptr [esp+0x24], eax
        call    FUN_004d8720
        mov     edx, dword ptr [esp+0x24]
        xor     ecx, ecx
        mov     cl, byte ptr [edx]
        xor     eax, eax
        mov     al, byte ptr [ebx]
        add     esp, 0x8
        add     ecx, eax
        and     ecx, 0x800000ff
        jns     L86da
        dec     ecx
        or      ecx, 0xffffff00
        inc     ecx
L86da:
        mov     eax, dword ptr [esp+0x12c]
        mov     dl, byte ptr [eax+ebp*1]
        and     ecx, 0xff
        mov     cl, byte ptr [esp+ecx*1+0x20]
        xor     cl, dl
        mov     byte ptr [eax+ebp*1], cl
        mov     eax, dword ptr [esp+0x18]
        inc     eax
        movsx   ebp, ax
        mov     dword ptr [esp+0x18], eax
        cmp     ebp, dword ptr [esp+0x130]
        jl      L864f
L870c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x110
        ret
    }
}
