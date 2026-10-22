/*
 * FUN_0075BB60 (1249 B) — __thiscall. Texture/bitmap processing: loads a
 * palette/format descriptor, calls FUN_0075c150, and performs several
 * pixel-format conversion passes (0x801-flag reads via FUN_007353f0,
 * FUN_00735440, FUN_007357d0, FUN_00740db0, FUN_00747ac0), plus string
 * validation (FUN_006fab90) and log helpers (FUN_006f4950/49a0/aca0/4230).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075c150(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00747ac0(void);
extern void __cdecl FUN_007357d0(void);
extern void __cdecl FUN_00740db0(void);

extern int  g_849324;
extern char g_7af888[];

__declspec(naked) void __cdecl FUN_0075BB60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x19c
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 8]
        test    esi, esi
        mov     ebx, ecx
        push    edi
        mov     dword ptr [ebp - 0x10], ebx
        je      L_bb7d
        mov     dword ptr [ebp - 0xc], esi
        jmp     L_bb9e
L_bb7d:
        mov     eax, dword ptr [g_849324]
        push    eax
        call    FUN_006f4950
        mov     eax, dword ptr [ebx + 0x14]
        lea     ecx, [ebp + 0xc]
        push    ecx
        lea     edx, [ebp - 0xc]
        push    edx
        push    eax
        call    FUN_006faca0
        call    FUN_006f49a0
L_bb9e:
        mov     ecx, dword ptr [ebx + 8]
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp - 0xc]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x14]
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_0075c150
        test    esi, esi
        jne     L_bbc8
        test    byte ptr [ebx + 7], 4
        jne     L_bbc8
        mov     edx, dword ptr [ebp - 0xc]
        push    edx
        call    FUN_006f4230
L_bbc8:
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x9c]
        rep     stosd
        mov     byte ptr [ebp + 0xb], al
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        mov     dword ptr [ebp - 0x9c], 0x7c
        je      L_bd20
        mov     ecx, dword ptr [ebx + 8]
        xor     esi, esi
        push    esi
        push    0x801
        lea     eax, [ebp - 0x9c]
        push    eax
        push    esi
        push    ecx
        mov     byte ptr [ebp + 0xb], 1
        call    FUN_007353f0
        mov     edx, dword ptr [ebp - 0x78]
        xor     eax, eax
        mov     ax, word ptr [ebx + 6]
        mov     dword ptr [ebp - 8], edx
        mov     ecx, eax
        and     ecx, 0x300
        cmp     ecx, 0x100
        je      L_bc95
        test    al, 1
        jne     L_bc95
        mov     dword ptr [ebp - 4], esi
        mov     si, word ptr [ebx + 2]
        or      ecx, 0xffffffff
        test    esi, esi
        jle     L_bd20
        xor     edi, edi
        mov     di, word ptr [ebx]
L_bc43:
        mov     eax, edx
        add     edx, dword ptr [ebp - 0x8c]
        test    edi, edi
        mov     dword ptr [ebp - 8], edx
        jle     L_bc5f
L_bc54:
        mov     edx, edi
        and     ecx, dword ptr [eax]
        add     eax, 4
        dec     edx
        __emit  0x75                 /* jne rel8 (MSVC6 miscomputes backward offset) */
        __emit  0xF8
        mov     edx, dword ptr [ebp - 8]
L_bc5f:
        mov     eax, ecx
        not     eax
        test    eax, 0xf0000000
        jne     L_bc7a
        mov     eax, dword ptr [ebp - 4]
        inc     eax
        cmp     eax, esi
        mov     dword ptr [ebp - 4], eax
        jl      L_bc43
        jmp     L_bd20
L_bc7a:
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 4]
        and     ecx, 0xebff
        or      ecx, 0x800
        mov     word ptr [ebx + 4], cx
        jmp     L_bd20
L_bc95:
        xor     edi, edi
        mov     di, word ptr [ebx + 2]
        mov     dword ptr [ebp - 4], esi
        cmp     edi, esi
        jle     L_bd20
        jmp     L_bca7
L_bca4:
        mov     edx, dword ptr [ebp - 8]
L_bca7:
        xor     eax, eax
        mov     ax, word ptr [ebx + 4]
        and     eax, 0x1c00
        cmp     eax, 0x800
        je      L_bd20
        mov     ecx, dword ptr [ebp - 0x8c]
        mov     esi, dword ptr [ebp - 8]
        add     esi, ecx
        xor     ecx, ecx
        mov     cx, word ptr [ebx]
        mov     dword ptr [ebp - 8], esi
        add     edx, 3
        xor     esi, esi
        test    ecx, ecx
        jle     L_bd15
L_bcd5:
        mov     al, byte ptr [edx]
        not     al
        and     al, 0xf0
        je      L_bcf5
        cmp     al, 0xf0
        jne     L_bcff
        xor     eax, eax
        mov     ax, word ptr [ebx + 4]
        and     eax, 0xe7ff
        or      eax, 0x400
        mov     word ptr [ebx + 4], ax
L_bcf5:
        inc     esi
        add     edx, 4
        cmp     esi, ecx
        jl      L_bcd5
        jmp     L_bd15
L_bcff:
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 4]
        and     ecx, 0xebff
        or      ecx, 0x800
        mov     word ptr [ebx + 4], cx
L_bd15:
        mov     eax, dword ptr [ebp - 4]
        inc     eax
        cmp     eax, edi
        mov     dword ptr [ebp - 4], eax
        jl      L_bca4
L_bd20:
        mov     ax, word ptr [ebx + 6]
        __emit  0xF6                 /* test ah, 0x20 (MSVC6 rejects test ah,imm8) */
        __emit  0xC4
        __emit  0x20
        je      L_bd97
        test    byte ptr [ebx + 5], 0x1c
        jne     L_bd97
        mov     al, byte ptr [ebp + 0xb]
        test    al, al
        jne     L_bd53
        mov     eax, dword ptr [ebx + 8]
        push    0
        push    0x801
        lea     edx, [ebp - 0x9c]
        push    edx
        push    0
        push    eax
        mov     byte ptr [ebp + 0xb], 1
        call    FUN_007353f0
L_bd53:
        mov     ecx, dword ptr [ebp - 0x78]
        xor     eax, eax
        mov     ax, word ptr [ebx + 2]
        test    eax, eax
        jle     L_bd97
        xor     edi, edi
        mov     di, word ptr [ebx]
        mov     dword ptr [ebp - 4], eax
L_bd68:
        test    edi, edi
        mov     eax, ecx
        jle     L_bd86
L_bd70:
        mov     esi, edi
        xor     edx, edx
        mov     dl, byte ptr [ecx]
        add     eax, 4
        shl     edx, 0x18
        or      edx, 0xffffff
        dec     esi
        mov     dword ptr [eax - 4], edx
        __emit  0x75                 /* jne rel8 (MSVC6 miscomputes backward offset) */
        __emit  0xEA
L_bd86:
        mov     edx, dword ptr [ebp - 0x8c]
        mov     eax, dword ptr [ebp - 4]
        add     ecx, edx
        dec     eax
        mov     dword ptr [ebp - 4], eax
        jne     L_bd68
L_bd97:
        mov     ax, word ptr [ebx + 6]
        __emit  0xF6                 /* test ah, 0x10 */
        __emit  0xC4
        __emit  0x10
        je      L_befb
        mov     al, byte ptr [ebp + 0xb]
        test    al, al
        mov     esi, 0xff00ff
        jne     L_bdcd
        mov     ecx, dword ptr [ebx + 8]
        push    0
        push    0x801
        lea     eax, [ebp - 0x9c]
        push    eax
        push    0
        push    ecx
        mov     byte ptr [ebp + 0xb], 1
        call    FUN_007353f0
L_bdcd:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        je      L_bdea
        xor     edx, edx
        mov     dx, word ptr [ebx + 4]
        and     edx, 0xe7ff
        or      edx, 0x400
        mov     word ptr [ebx + 4], dx
L_bdea:
        mov     eax, dword ptr [ebp - 0x78]
        xor     edi, edi
        mov     di, word ptr [ebx + 2]
        mov     dword ptr [ebp + 0x10], eax
        mov     dword ptr [ebp - 4], 0
        test    edi, edi
        jle     L_be53
        cmp     esi, 0xff00ff
        jne     L_be53
L_be01:
        mov     eax, dword ptr [ebp + 0x10]
        xor     ecx, ecx
        mov     cx, word ptr [ebx]
        xor     edx, edx
        test    ecx, ecx
        jle     L_be3a
L_be17:
        mov     esi, dword ptr [eax]
        and     esi, 0xffffff
        mov     ebx, esi
        and     ebx, 0xffffff
        add     eax, 4
        cmp     ebx, 0xff00ff
        jne     L_be37
        inc     edx
        cmp     edx, ecx
        jl      L_be17
L_be37:
        mov     ebx, dword ptr [ebp - 0x10]
L_be3a:
        mov     eax, dword ptr [ebp - 4]
        mov     edx, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp - 0x8c]
        inc     eax
        add     edx, ecx
        cmp     eax, edi
        mov     dword ptr [ebp - 4], eax
        mov     dword ptr [ebp + 0x10], edx
        __emit  0x7C                 /* jl rel8 (MSVC6 miscomputes backward offset) */
        __emit  0xAE
L_be53:
        test    edi, edi
        mov     edx, dword ptr [ebp - 0x78]
        mov     dword ptr [ebp + 0x10], edx
        jle     L_befb
        xor     eax, eax
        mov     ax, word ptr [ebx]
        mov     dword ptr [ebp - 0x10], edi
        mov     dword ptr [ebp - 4], eax
        jmp     L_be71
L_be6e:
        mov     eax, dword ptr [ebp - 4]
L_be71:
        mov     edx, dword ptr [ebp + 0x10]
        xor     ecx, ecx
        cmp     eax, ecx
        mov     dword ptr [ebp - 8], ecx
        jle     L_bee0
L_be7f:
        mov     edi, ecx
        mov     eax, dword ptr [edx]
        and     eax, 0xffffff
        cmp     eax, 0xff00ff
        jne     L_be92
        mov     dword ptr [edx], esi
        inc     ecx
        jmp     L_bed2
L_be92:
        test    ecx, ecx
        je      L_bec7
        cmp     esi, eax
        je      L_bec7
        cmp     ecx, edi
        jge     L_bea0
        sar     ecx, 1
L_bea0:
        cmp     ecx, 4
        jle     L_beaa
        mov     ecx, 4
L_beaa:
        mov     esi, ecx
        neg     esi
        lea     edx, [edx + esi*4]
        mov     esi, ecx
        dec     ecx
        test    esi, esi
        je      L_bec7
        lea     esi, [ecx + 1]
        mov     edi, edx
        mov     ecx, esi
        rep     stosd
        mov     edi, dword ptr [ebp - 8]
        lea     edx, [edx + esi*4]
L_bec7:
        xor     ecx, ecx
        mov     esi, eax
        or      eax, 0xff000000
        mov     dword ptr [edx], eax
L_bed2:
        mov     eax, dword ptr [ebp - 4]
        add     edx, 4
        inc     edi
        cmp     edi, eax
        mov     dword ptr [ebp - 8], edi
        __emit  0x7C                 /* jl rel8 (MSVC6 miscomputes backward offset) */
        __emit  0x9F
L_bee0:
        mov     eax, dword ptr [ebp - 0x8c]
        mov     ecx, dword ptr [ebp + 0x10]
        add     ecx, eax
        mov     eax, dword ptr [ebp - 0x10]
        dec     eax
        mov     dword ptr [ebp + 0x10], ecx
        mov     dword ptr [ebp - 0x10], eax
        jne     L_be6e
L_befb:
        mov     al, byte ptr [ebp + 0xb]
        test    al, al
        je      L_bf0d
        mov     ecx, dword ptr [ebx + 8]
        push    0
        push    ecx
        call    FUN_00735440
L_bf0d:
        mov     ax, word ptr [ebx + 6]
        __emit  0xF6                 /* test ah, 8 */
        __emit  0xC4
        __emit  0x08
        je      L_c038
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     dword ptr [ebp + 0x10], edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp - 0x19c]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebp - 0x19c]
        repne   scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        lea     ecx, [ebp - 0x19c]
        sub     ecx, 5
        mov     al, byte ptr [esi + ecx]
        add     esi, ecx
        cmp     al, 0x30
        jl      L_bf6e
        cmp     al, 0x39
        jle     L_bf87
L_bf6e:
        lea     edx, [ebp - 0x19c]
        push    edx
        push    offset g_7af888
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      L_bf87
        int     3
L_bf87:
        xor     eax, eax
        mov     dword ptr [ebp - 0x20], eax
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x20], 0x401008
        mov     edi, 1
L_bfa1:
        test    byte ptr [ebx + 6], 1
        je      L_bfae
        mov     eax, 1
        jmp     L_bfc0
L_bfae:
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 2]
        xor     edx, edx
        mov     dx, word ptr [ebx]
        push    ecx
        push    edx
        call    FUN_00747ac0
L_bfc0:
        cmp     edi, eax
        jge     L_c038
        mov     dl, byte ptr [esi]
        inc     dl
        lea     eax, [ebp + 0x10]
        push    eax
        lea     ecx, [ebp - 0x20]
        mov     byte ptr [esi], dl
        mov     edx, dword ptr [ebp + 0x10]
        push    ecx
        push    edx
        call    FUN_007357d0
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_00740db0
        mov     ecx, dword ptr [g_849324]
        push    ecx
        call    FUN_006f4950
        lea     edx, [ebp + 0xc]
        push    edx
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp - 0x19c]
        push    ecx
        call    FUN_006faca0
        call    FUN_006f49a0
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 0xc]
        push    edx
        push    eax
        push    ecx
        lea     edx, [ebp - 0x19c]
        push    edx
        mov     ecx, ebx
        call    FUN_0075c150
        test    byte ptr [ebx + 7], 4
        jne     L_c032
        mov     eax, dword ptr [ebp - 0xc]
        push    eax
        call    FUN_006f4230
L_c032:
        inc     edi
        jmp     L_bfa1
L_c038:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
