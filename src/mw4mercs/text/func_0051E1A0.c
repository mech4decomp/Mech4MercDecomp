/*
 * FUN_0051E1A0 (481 B block) — contains 4 __stdcall functions
 * (ret 0xc each): 0x0051E1A0, 0x0051E1C0, 0x0051E1E0, 0x0051E200.
 *
 * 0x51E1A0: stores FUN_00518090() result at [g_007dd268+0x409a0], returns 1.
 * 0x51E1C0/0x51E1E0: copy a dword from *[esp+0xc] to [g_007dd268+0x40d10].
 * 0x51E200: object/string setup — allocates a 0x9c-byte object, builds a
 *   string, compares against a literal at 0x76cb8c, copies it, refcounts.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dd268;
extern int g_007dab44;
extern int g_007dab40;
extern char g_0076cb8c;

extern void __cdecl FUN_00518090(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00592a70(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00593720(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) int __stdcall FUN_0051E1A0(void)
{
    __asm {
        /* ---- 0x0051E1A0 ---- */
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00518090
        mov     ecx, dword ptr [g_007dd268]
        mov     dword ptr [ecx + 0x409a0], eax
        mov     eax, 1
        ret     0xc
        nop
        /* ---- 0x0051E1C0 ---- */
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0x40d10], edx
        mov     eax, 1
        ret     0xc
        nop
        nop
        nop
        nop
        nop
        /* ---- 0x0051E1E0 ---- */
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0x40d10], edx
        mov     eax, 1
        ret     0xc
        nop
        nop
        nop
        nop
        nop
        /* ---- 0x0051E200 ---- */
        sub     esp, 0x54
        mov     eax, dword ptr [esp + 0x60]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax]
        push    edi
        push    ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x74], 0
        call    FUN_00412570
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x34]
        mov     edi, dword ptr [edx + 0x48]
        push    1
        lea     eax, [edi + 0x34]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_51e271
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     ebx, eax
        jmp     L_51e273
L_51e271:
        xor     ebx, ebx
L_51e273:
        mov     edx, dword ptr [edi + 0x50]
        mov     eax, dword ptr [esi]
        dec     edx
        test    eax, eax
        mov     dword ptr [ebx + 0x40], edx
        je      L_51e28c
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
L_51e28c:
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esi], eax
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, ebx
        call    FUN_00593720
        mov     ebp, dword ptr [esp + 0x10]
        test    ebp, ebp
        je      L_51e324
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x1c], ecx
        je      L_51e324
        mov     esi, offset g_0076cb8c
        mov     eax, ebp
L_51e2cb:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_51e2ef
        test    cl, cl
        je      L_51e2eb
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     L_51e2ef
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_51e2cb
L_51e2eb:
        xor     eax, eax
        jmp     L_51e2f4
L_51e2ef:
        sbb     eax, eax
        sbb     eax, -1
L_51e2f4:
        test    eax, eax
        je      L_51e324
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ebp, dword ptr [esp + 0x10]
        mov     esi, 1
        jmp     L_51e328
L_51e324:
        mov     esi, dword ptr [esp + 0x70]
L_51e328:
        test    ebx, ebx
        je      L_51e338
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
        mov     ebp, dword ptr [esp + 0x10]
L_51e338:
        test    ebp, ebp
        je      L_51e351
        mov     cl, byte ptr [ebp - 1]
        lea     eax, [ebp - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_51e351
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_51e351:
        lea     ecx, [esp + 0x20]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        je      L_51e375
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_51e375
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_51e375:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x54
        ret     0xc
    }
}
