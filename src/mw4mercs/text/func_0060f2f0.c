/*
 * FUN_0060f2f0 (597 B) — String-table lookup/update routine. Walks a
 * global object list (via FUN_00416cc0), compares names with _strnicmp
 * (IAT 0x0076b2b0), and rebuilds a string buffer (FUN_006f3c80).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_76b768;    /* 0x0076b768 */
extern int g_7dab44;     /* 0x007dab44 */
extern int g_7dab40;     /* 0x007dab40 */
extern void *g_76b2b0;   /* 0x0076b2b0 (IAT: _strnicmp) */

extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416bc0(void);
extern void *__cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4230(void);
extern void *__cdecl FUN_006f3c80(void);

__declspec(naked) int __stdcall FUN_0060f2f0(void)
{
    __asm {
        sub     esp, 0x94
        mov     eax, dword ptr [esp + 0x98]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        push    ebx
        mov     ebx, dword ptr [eax + 0x8]
        mov     al, byte ptr [g_76b768]
        mov     byte ptr [esp + 0x18], al
        push    esi
        push    edi
        xor     eax, eax
        test    edx, edx
        mov     ecx, 0x1f
        lea     edi, [esp + 0x21]
        rep stosd
        stosw
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], ebx
        stosb
        jz      L_f536
        mov     ecx, dword ptr [g_7dab44]
        mov     edi, dword ptr [ecx]
        mov     esi, dword ptr [g_7dab40]
        push    0x14
        xor     edi, esi
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_f377
        mov     edx, dword ptr [edi + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x84]
        add     eax, 0x10
        push    eax
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x779e88
        mov     dword ptr [esp + 0xc], esi
        jmp     L_f383
L_f377:
        mov     dword ptr [esp + 0xc], 0x0
        mov     esi, dword ptr [esp + 0xc]
L_f383:
        mov     ecx, esi
        call    FUN_00416cc0
        test    eax, eax
        jz      L_f4c6
        push    ebp
L_f393:
        mov     ebp, dword ptr [eax + 0x18]
        test    ebp, ebp
        lea     ebx, [eax + 0x18]
        mov     dword ptr [esp + 0x20], ebx
        jz      L_f3df
        inc     byte ptr [ebp + -0x1]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
L_f3b2:
        push    ebx
        lea     ecx, [esp + 0x18]
        call    FUN_0040f060
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        push    esi
        push    ecx
        push    edx
        call    dword ptr [g_76b2b0]
        add     esp, 0xc
        test    eax, eax
        jnz     L_f429
        mov     edx, dword ptr [ebx]
        test    edx, edx
        jz      L_f3e3
        inc     byte ptr [edx + -0x1]
        jmp     L_f3e7
L_f3df:
        xor     esi, esi
        jmp     L_f3b2
L_f3e3:
        xor     esi, esi
        jmp     L_f3f5
L_f3e7:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
L_f3f5:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x24]
        repne scasb
        not     ecx
        dec     ecx
        cmp     esi, ecx
        seta    bl
        test    edx, edx
        jz      L_f421
        mov     cl, byte ptr [edx + -0x1]
        lea     eax, [edx + -0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_f421
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_f421:
        test    bl, bl
        jz      L_f429
        mov     bl, 0x1
        jmp     L_f42b
L_f429:
        xor     bl, bl
L_f42b:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_f446
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_f446
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_f446:
        test    ebp, ebp
        jz      L_f45f
        mov     cl, byte ptr [ebp + -0x1]
        lea     eax, [ebp + -0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_f45f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_f45f:
        test    bl, bl
        jz      L_f4ac
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [eax]
        test    edx, edx
        jz      L_f470
        inc     byte ptr [edx + -0x1]
L_f470:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     ebx, [esp + 0x24]
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        test    edx, edx
        rep movsb
        jz      L_f4ac
        mov     cl, byte ptr [edx + -0x1]
        lea     eax, [edx + -0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_f4ac
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_f4ac:
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_f393
        mov     ebx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x10]
        pop     ebp
L_f4c6:
        test    esi, esi
        jz      L_f4d2
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_f4d2:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x20]
        repne scasb
        not     ecx
        dec     ecx
        jz      L_f536
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      L_f4f4
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0x0
L_f4f4:
        push    0x0
        push    0x80
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        lea     edi, [esp + 0x20]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     dword ptr [ebx], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x94
        ret     0x8
L_f536:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x94
        ret     0x8
    }
}
