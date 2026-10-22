/*
 * FUN_00726940 (1161 B) — Buffered stream read/consume helper (__thiscall).
 *
 * Reads up to param_2 bytes from an internal buffer into param_1, refilling
 * from a file handle (ReadFile via IAT 0x0076b164) and managing a ring of
 * 0x2000-byte chunks anchored at DAT_00856ba4. Handles format types 3, 4, 6.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_856ba4;      /* DAT_00856ba4 — chunk buffer base */
extern void *g_76b164;             /* IAT: ReadFile */
extern void __cdecl FUN_00758790(void);
extern void __cdecl FUN_007587e0(void);
extern void __cdecl FUN_00758830(void);
extern void __cdecl FUN_00726df0(void);

__declspec(naked) void __stdcall FUN_00726940(void)
{
    __asm {
        sub     esp, 0x54
        push    ebx
        mov     ebx, dword ptr [esp + 0x60]
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp]
        cmp     eax, 0x3
        push    esi
        push    edi
        mov     dword ptr [esp + 0x6c], ebx
        jnz     L_b15

        cmp     dword ptr [ebp + 0x54], ebx
        jc      L_9a4
        mov     eax, dword ptr [ebp + 0x50]
        mov     edi, dword ptr [esp + 0x68]
        mov     ecx, ebx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, eax
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp + 0x54]
        sub     ecx, ebx
        mov     dword ptr [ebp + 0x54], ecx
        jz      L_9a4
        lea     esi, [eax + ebx]
        mov     edi, eax
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_9a4:
        mov     eax, dword ptr [ebp + 0x54]
        test    eax, eax
        jz      L_9cb
        mov     esi, dword ptr [ebp + 0x50]
        mov     edi, dword ptr [esp + 0x68]
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        sub     ebx, eax
        mov     dword ptr [ebp + 0x54], 0x0

L_9cb:
        mov     esi, dword ptr [ebp + 0xc4]
        mov     edi, dword ptr [ebp + 0xb8]
        mov     ecx, dword ptr [esi + 0x8]
        mov     edx, dword ptr [ebp + 0xc0]
        mov     ecx, dword ptr [ecx + edi*0x4]
        cmp     edx, ecx
        mov     eax, dword ptr [g_856ba4]
        jc      L_a7c
        mov     esi, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x74], esi
        mov     esi, dword ptr [esi + edi*0x4]
        mov     edi, dword ptr [g_856ba4]
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
        jc      L_a3b
        mov     dword ptr [ebp + 0xb8], 0x0

L_a3b:
        mov     edx, dword ptr [ebp + 0xb8]
        mov     esi, dword ptr [esp + 0x74]
        mov     dword ptr [ebp + 0xc0], 0x0
        mov     esi, dword ptr [esi + edx*0x4]
        mov     edx, dword ptr [g_856ba4]
        mov     ecx, 0x2000
        sub     ecx, eax
        lea     edi, [eax + edx]
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_a7c:
        sub     ecx, edx
        mov     dword ptr [esp + 0x74], ecx
        shl     ecx, 0x2
        cmp     ecx, 0x2000
        jge     L_aec
        mov     esi, dword ptr [esi + 0x4]
        mov     esi, dword ptr [esi + edi*0x4]
        mov     ecx, dword ptr [esp + 0x74]
        mov     edi, eax
        mov     eax, ecx
        shr     ecx, 0x2
        add     esi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0xb8]
        add     edx, ecx
        mov     ecx, dword ptr [ebp + 0xc4]
        mov     dword ptr [ebp + 0xc0], edx
        mov     edx, dword ptr [ecx]
        inc     eax
        cmp     eax, edx
        mov     dword ptr [ebp + 0xb8], eax
        jc      L_ad6
        mov     dword ptr [ebp + 0xb8], 0x0

L_ad6:
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0xc0], 0x0
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_aec:
        mov     esi, dword ptr [esi + 0x4]
        mov     esi, dword ptr [esi + edi*0x4]
        add     esi, edx
        mov     edi, eax
        mov     ecx, 0x800
        rep movsd
        pop     edi
        add     edx, 0x2000
        pop     esi
        mov     dword ptr [ebp + 0xc0], edx
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_b15:
        cmp     eax, 0x4
        jz      L_b23
        cmp     eax, 0x6
        jnz     L_dbd

L_b23:
        mov     ecx, dword ptr [ebp + 0x54]
        test    ecx, ecx
        jz      L_bbc
        cmp     ecx, ebx
        jbe     L_b77
        mov     eax, dword ptr [ebp + 0x50]
        mov     edi, dword ptr [esp + 0x68]
        mov     ecx, ebx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, eax
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp + 0x54]
        sub     ecx, ebx
        lea     esi, [eax + ebx]
        mov     edi, eax
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     eax, dword ptr [ebp + 0x54]
        pop     edi
        sub     eax, ebx
        pop     esi
        mov     dword ptr [ebp + 0x54], eax
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_b77:
        mov     eax, dword ptr [esp + 0x68]
        mov     esi, dword ptr [ebp + 0x50]
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, eax
        rep movsd
        mov     ecx, edx
        mov     edx, dword ptr [ebp + 0x54]
        and     ecx, 0x3
        rep movsb
        mov     ecx, edx
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x70]
        push    0x0
        push    ecx
        sub     ebx, edx
        push    ebx
        push    eax
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x54], 0x0
        call    FUN_00726940
        mov     eax, dword ptr [esp + 0x6c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_bbc:
        mov     eax, dword ptr [ebp + 0x34]
        mov     edi, dword ptr [ebp + 0x14]
        xor     esi, esi
        cmp     eax, edi
        mov     dword ptr [esp + 0x6c], esi
        jnc     L_bf1
        mov     eax, dword ptr [g_856ba4]
        mov     ecx, dword ptr [ebp + 0xb4]
        push    esi
        lea     edx, [esp + 0x70]
        push    edx
        mov     edx, dword ptr [ecx + 0x4]
        push    0x1000
        push    eax
        push    edx
        call    dword ptr [g_76b164]
        mov     esi, dword ptr [esp + 0x6c]

L_bf1:
        mov     eax, dword ptr [ebp + 0x34]
        lea     ecx, [eax + esi]
        cmp     ecx, edi
        jbe     L_c08
        mov     esi, edi
        sub     esi, eax
        mov     dword ptr [esp + 0x6c], esi
        mov     dword ptr [ebp + 0x34], edi
        jmp     L_c0b

L_c08:
        mov     dword ptr [ebp + 0x34], ecx

L_c0b:
        cmp     esi, 0x1000
        jz      L_c51
        mov     edx, dword ptr [g_856ba4]
        xor     eax, eax
        mov     ecx, 0x1000
        sub     ecx, esi
        cmp     word ptr [ebp + 0x47], 0x8
        lea     edi, [edx + esi]
        setnz   al
        mov     esi, ecx
        shr     ecx, 0x2
        dec     eax
        and     eax, 0x80
        mov     dl, al
        mov     dh, dl
        mov     eax, edx
        shl     eax, 0x10
        mov     ax, dx
        rep stosd
        mov     ecx, esi
        and     ecx, 0x3
        rep stosb
        mov     esi, dword ptr [esp + 0x6c]

L_c51:
        test    esi, esi
        jz      L_d03
        mov     esi, dword ptr [ebp + 0x50]
        xor     eax, eax
        mov     ecx, 0x15
        lea     edi, [esp + 0x10]
        rep stosd
        mov     eax, dword ptr [g_856ba4]
        mov     edi, dword ptr [ebp + 0x4c]
        push    0x0
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edi
        mov     dword ptr [esp + 0x1c], 0x54
        mov     dword ptr [esp + 0x2c], 0x1000
        mov     dword ptr [esp + 0x3c], 0x4000
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x38], esi
        call    FUN_00758790
        push    0x0
        lea     edx, [esp + 0x14]
        push    edx
        push    edi
        call    FUN_007587e0
        push    0x0
        lea     eax, [esp + 0x14]
        push    eax
        push    edi
        call    FUN_00758830
        mov     eax, dword ptr [esp + 0x34]
        cmp     eax, ebx
        jbe     L_cfb
        mov     edi, dword ptr [esp + 0x68]
        mov     ecx, ebx
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [ebp + 0x50]
        sub     eax, ebx
        mov     ecx, eax
        mov     edx, ecx
        lea     esi, [edi + ebx]
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x54], eax
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_cfb:
        test    eax, eax
        jnz     L_d88

L_d03:
        mov     al, byte ptr [esp + 0x70]
        test    al, al
        jz      L_d4c
        mov     al, byte ptr [esp + 0x74]
        test    al, al
        jz      L_d20
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_d20:
        mov     ecx, ebp
        call    FUN_00726df0
        mov     eax, dword ptr [esp + 0x70]
        mov     ecx, dword ptr [esp + 0x68]
        push    0x1
        push    eax
        push    ebx
        push    ecx
        mov     ecx, ebp
        call    FUN_00726940
        cmp     eax, -0x1
        jnz     L_dbd
        pop     edi
        pop     esi
        pop     ebp
        or      eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_d4c:
        xor     eax, eax
        cmp     word ptr [ebp + 0x47], 0x8
        mov     edi, dword ptr [esp + 0x68]
        setnz   al
        mov     ecx, ebx
        mov     esi, ecx
        shr     ecx, 0x2
        dec     eax
        and     eax, 0x80
        mov     dl, al
        mov     dh, dl
        mov     eax, edx
        shl     eax, 0x10
        mov     ax, dx
        rep stosd
        mov     ecx, esi
        and     ecx, 0x3
        rep stosb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_d88:
        mov     edi, dword ptr [esp + 0x68]
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [esp + 0x70]
        push    0x0
        push    ecx
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, ebx
        sub     edx, eax
        add     eax, ecx
        push    edx
        push    eax
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x54], 0x0
        call    FUN_00726940

L_dbd:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x54
        ret     0x10
    }
}
