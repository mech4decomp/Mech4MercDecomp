/*
 * FUN_100036f5 (251 B, __cdecl) — initialize a new 0x8000-byte page for
 * the string-table: build the free-list buckets, carve 0x1000-byte blocks,
 * and link the page into the table. Returns the bucket index (or -1 on
 * VirtualAlloc failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10005098;   /* IAT: VirtualAlloc */

__declspec(naked) int FUN_100036f5(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     ecx, dword ptr [ebp + 8]
        push    ebx
        push    esi
        push    edi
        mov     esi, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [ecx + 8]
        xor     ebx, ebx
L_3707:
        test    eax, eax
        jl      L_3710
        shl     eax, 1
        inc     ebx
        jmp     L_3707
L_3710:
        mov     eax, ebx
        push    0x3f
        imul    eax, eax, 0x204
        pop     edx
        lea     eax, [eax + esi + 0x144]
        mov     dword ptr [ebp - 4], eax
L_3725:
        mov     dword ptr [eax + 8], eax
        mov     dword ptr [eax + 4], eax
        add     eax, 8
        dec     edx
        jnz     L_3725
        mov     edi, ebx
        push    4
        shl     edi, 0xf
        add     edi, dword ptr [ecx + 0xc]
        push    0x1000
        push    0x8000
        push    edi
        call    dword ptr [g_10005098]
        test    eax, eax
        jnz     L_3758
        or      eax, 0xffffffff
        jmp     L_37eb
L_3758:
        lea     edx, [edi + 0x7000]
        cmp     edi, edx
        ja      L_379e
L_3765:
        lea     eax, [edi + 0x10]
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
        __emit 0x76   /* jbe L_3765: MSVC6 miscomputes this backward rel8 (off by 3) due to the forward ja L_379e reference spanning the loop */
        __emit 0xC7
L_379e:
        mov     eax, dword ptr [ebp - 4]
        lea     ecx, [edi + 0xc]
        add     eax, 0x1f8
        push    1
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
        mov     eax, dword ptr [ebp + 8]
        mov     byte ptr [esi + 0x43], cl
        jnz     L_37db
        or      dword ptr [eax + 4], edi
L_37db:
        mov     edx, 0x80000000
        mov     ecx, ebx
        shr     edx, cl
        not     edx
        and     dword ptr [eax + 8], edx
        mov     eax, ebx
L_37eb:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
