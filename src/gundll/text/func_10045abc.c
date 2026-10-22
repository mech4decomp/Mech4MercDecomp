/*
 * FUN_10045abc (473 B) __cdecl.
 * Reads from a handle in the DAT_10076aa0 handle table via ReadFile,
 * translating CR/LF/EOF and tracking per-handle state flags.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076aa0;   /* DAT_10076aa0 handle table base */
extern void *g_10049194;          /* IAT: ReadFile */
extern void *g_100490e4;          /* IAT: GetLastError */
extern void __cdecl FUN_1004277d(void);   /* rel32 call */
extern void __cdecl FUN_10042786(void);   /* rel32 call */
extern void __cdecl FUN_1004270a(void);   /* rel32 call */
extern void __cdecl FUN_10040902(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10045abc(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        and     dword ptr [ebp - 0x8], 0
        cmp     dword ptr [ebp + 0x10], 0
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edx, ebx
        jz      L_10045c8e
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, eax
        and     eax, 0x1f
        sar     ecx, 0x5
        lea     esi, [eax + eax*8]
        mov     eax, dword ptr [ecx*4 + g_10076aa0]
        lea     edi, [ecx*4 + g_10076aa0]
        shl     esi, 0x2
        add     eax, esi
        mov     cl, byte ptr [eax + 0x4]
        test    cl, 0x2
        jnz     L_10045c8e
        test    cl, 0x48
        jz      L_10045b27
        mov     al, byte ptr [eax + 0x5]
        cmp     al, 0xa
        jz      L_10045b27
        dec     dword ptr [ebp + 0x10]
        mov     byte ptr [ebx], al
        mov     eax, dword ptr [edi]
        lea     edx, [ebx + 0x1]
        mov     dword ptr [ebp - 0x8], 0x1
        mov     byte ptr [eax + esi + 0x5], 0xa
    L_10045b27:
        lea     eax, [ebp - 0xc]
        push    0x0
        push    eax
        mov     eax, dword ptr [edi]
        push    dword ptr [ebp + 0x10]
        push    edx
        push    dword ptr [eax + esi]
        call    dword ptr [g_10049194]
        test    eax, eax
        jnz     L_10045b79
        call    dword ptr [g_100490e4]
        push    0x5
        pop     esi
        cmp     eax, esi
        jnz     L_10045b61
        call    FUN_1004277d
        mov     dword ptr [eax], 0x9
        call    FUN_10042786
        mov     dword ptr [eax], esi
        jmp     L_10045b71
    L_10045b61:
        cmp     eax, 0x6d
        jz      L_10045c8e
        push    eax
        call    FUN_1004270a
        pop     ecx
    L_10045b71:
        or      eax, 0xffffffff
        jmp     L_10045c90
    L_10045b79:
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [ebp - 0xc]
        add     dword ptr [ebp - 0x8], edx
        lea     ecx, [eax + esi + 0x4]
        mov     al, byte ptr [eax + esi + 0x4]
        test    al, 0x80
        jz      L_10045c89
        test    edx, edx
        jz      L_10045b9e
        cmp     byte ptr [ebx], 0xa
        jnz     L_10045b9e
        or      al, 0x4
        jmp     L_10045ba0
    L_10045b9e:
        and     al, 0xfb
    L_10045ba0:
        mov     byte ptr [ecx], al
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp + 0x10], eax
        add     ecx, eax
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x8], ecx
        jnc     L_10045c83
    L_10045bb8:
        mov     eax, dword ptr [ebp + 0x10]
        mov     al, byte ptr [eax]
        cmp     al, 0x1a
        jz      L_10045c73
        cmp     al, 0xd
        jz      L_10045bd4
        mov     byte ptr [ebx], al
        inc     ebx
        inc     dword ptr [ebp + 0x10]
        jmp     L_10045c65
    L_10045bd4:
        dec     ecx
        cmp     dword ptr [ebp + 0x10], ecx
        jnc     L_10045bf2
        mov     eax, dword ptr [ebp + 0x10]
        inc     eax
        cmp     byte ptr [eax], 0xa
        jnz     L_10045be9
        add     dword ptr [ebp + 0x10], 0x2
        jmp     L_10045c47
    L_10045be9:
        mov     byte ptr [ebx], 0xd
        inc     ebx
        mov     dword ptr [ebp + 0x10], eax
        jmp     L_10045c65
    L_10045bf2:
        lea     eax, [ebp - 0xc]
        push    0x0
        push    eax
        inc     dword ptr [ebp + 0x10]
        lea     eax, [ebp - 0x1]
        push    0x1
        push    eax
        mov     eax, dword ptr [edi]
        push    dword ptr [eax + esi]
        call    dword ptr [g_10049194]
        test    eax, eax
        jnz     L_10045c1a
        call    dword ptr [g_100490e4]
        test    eax, eax
        jnz     L_10045c61
    L_10045c1a:
        cmp     dword ptr [ebp - 0xc], 0
        jz      L_10045c61
        mov     eax, dword ptr [edi]
        test    byte ptr [eax + esi + 0x4], 0x48
        jz      L_10045c3c
        mov     al, byte ptr [ebp - 0x1]
        cmp     al, 0xa
        jz      L_10045c47
        mov     byte ptr [ebx], 0xd
        mov     ecx, dword ptr [edi]
        inc     ebx
        mov     byte ptr [ecx + esi + 0x5], al
        jmp     L_10045c65
    L_10045c3c:
        cmp     ebx, dword ptr [ebp + 0xc]
        jnz     L_10045c4c
        cmp     byte ptr [ebp - 0x1], 0xa
        jnz     L_10045c4c
    L_10045c47:
        mov     byte ptr [ebx], 0xa
        jmp     L_10045c64
    L_10045c4c:
        push    0x1
        push    -0x1
        push    dword ptr [ebp + 0x8]
        call    FUN_10040902
        add     esp, 0xc
        cmp     byte ptr [ebp - 0x1], 0xa
        jz      L_10045c65
    L_10045c61:
        mov     byte ptr [ebx], 0xd
    L_10045c64:
        inc     ebx
    L_10045c65:
        mov     ecx, dword ptr [ebp - 0x8]
        cmp     dword ptr [ebp + 0x10], ecx
        jc      L_10045bb8
        jmp     L_10045c83
    L_10045c73:
        mov     eax, dword ptr [edi]
        lea     esi, [eax + esi + 0x4]
        mov     al, byte ptr [esi]
        test    al, 0x40
        jnz     L_10045c83
        or      al, 0x2
        mov     byte ptr [esi], al
    L_10045c83:
        sub     ebx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0x8], ebx
    L_10045c89:
        mov     eax, dword ptr [ebp - 0x8]
        jmp     L_10045c90
    L_10045c8e:
        xor     eax, eax
    L_10045c90:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
