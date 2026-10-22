/*
 * FUN_006f6140 (523 B) — SetField() __thiscall. Looks up a field by key in a
 * hash table, allocates a value record, and handles "Instance"/"GName"/
 * "IpAddr" special keys (MultiByteToWideChar + CLSIDFromString, string copy).
 *
 * __thiscall (ECX = this), RET 0xc (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_006f5590(void *a, void *b, void *c);
extern int  __cdecl FUN_006fabf0(const char *fmt, ...);
extern void *__cdecl FUN_006f6520(int size);
extern void __cdecl FUN_006f5110(void);

extern void *g_76b2ac;   /* IAT: _stricmp */
extern void *g_76b130;   /* IAT: MultiByteToWideChar */
extern void *g_76b640;   /* IAT: CLSIDFromString */
extern void *g_76b2d0;   /* IAT: free */
extern void *g_76b294;   /* IAT: malloc */

extern char g_79fc58;    /* string literal 0x0079fc58 */
extern char g_79fa78;    /* string literal 0x0079fa78 */
extern char g_79fa10;    /* string literal 0x0079fa10 */
extern char g_79fa18;    /* string literal 0x0079fa18 */
extern char g_79fbd0;    /* string literal 0x0079fbd0 */
extern char g_79fc54;    /* vtable ptr 0x0079fc54 */
extern char g_79fc50;    /* vtable ptr 0x0079fc50 */

__declspec(naked) char FUN_006f6140(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x6c
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     esi, ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    eax
        push    ecx
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 8], esi
        call    FUN_006f5590
        test    al, al
        jnz     L_6e
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_6e:
        push    edi
        call    dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi + 0x8]
        xor     edx, edx
        mov     dx, word ptr [esi + 0x6]
        mov     edi, eax
        and     edi, 0xffff
        and     edi, edx
        shl     edi, 0x4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      L_c5
L_91:
        test    dword ptr [esi + 0xc], 0x80000000
        jnz     L_ac
        mov     eax, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [ebp - 8]
        push    eax
        push    ebx
        call    dword ptr [ecx + 0xc]
        test    al, al
        jnz     L_b4
L_ac:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_91
        jmp     L_c5
L_b4:
        mov     edx, dword ptr [ebp - 8]
        mov     eax, dword ptr [edx + 0x14]
        test    eax, eax
        jz      L_c1
        push    ebx
        call    eax
L_c1:
        test    ebx, ebx
        jnz     L_ee
L_c5:
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        push    edx
        push    offset g_79fc58
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      L_e3
        int     3
L_e3:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_ee:
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        jnz     L_3d
        push    0x58
        call    FUN_006f6520
        mov     edi, eax
        test    edi, edi
        jz      L_27
        lea     ecx, [edi + 0x18]
        mov     dword ptr [edi], offset g_79fc54
        call    FUN_006f5110
        mov     esi, edi
        mov     dword ptr [edi], offset g_79fc50
        mov     dword ptr [ebp - 4], esi
        mov     dword ptr [ebx + 0xc], esi
        mov     dword ptr [esi + 0x4], 0
        jmp     L_42
L_27:
        mov     dword ptr [ebp - 4], 0
        mov     esi, dword ptr [ebp - 4]
        mov     dword ptr [ebx + 0xc], esi
        mov     dword ptr [esi + 0x4], 0
        jmp     L_42
L_3d:
        mov     dword ptr [ebp - 4], eax
        mov     esi, eax
L_42:
        mov     ebx, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [g_76b2ac]
        push    offset g_79fa78
        push    ebx
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_89
        mov     ecx, dword ptr [ebp + 0x10]
        push    0x32
        lea     eax, [ebp - 0x6c]
        push    eax
        push    -1
        push    ecx
        push    0x8
        push    0
        call    dword ptr [g_76b130]
        add     esi, 0x8
        push    esi
        lea     edx, [ebp - 0x6c]
        push    edx
        call    dword ptr [g_76b640]
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_89:
        push    offset g_79fa10
        push    ebx
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_fb
        mov     edx, dword ptr [esi + 0x4]
        test    edx, edx
        jz      L_c8
        or      ecx, 0xffffffff
        mov     edi, edx
        repne scasb
        mov     edi, dword ptr [ebp + 0x10]
        not     ecx
        dec     ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        repne scasb
        not     ecx
        dec     ecx
        cmp     ebx, ecx
        ja      L_e1
        test    edx, edx
        jz      L_c8
        push    edx
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
L_c8:
        mov     edi, dword ptr [ebp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        push    ecx
        call    dword ptr [g_76b294]
        add     esp, 0x4
        mov     dword ptr [esi + 0x4], eax
L_e1:
        mov     edi, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp - 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        mov     edi, dword ptr [edx + 0x4]
        mov     eax, ecx
        jmp     L_34
L_fb:
        push    offset g_79fa18
        push    ebx
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_40
        mov     eax, dword ptr [ebp + 0x10]
        push    offset g_79fbd0
        push    eax
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_40
        mov     ecx, dword ptr [ebp - 8]
        mov     edi, dword ptr [ebp + 0x8]
        lea     edx, [ecx + 0x40]
        or      ecx, 0xffffffff
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        mov     eax, ecx
        mov     edi, edx
L_34:
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
L_40:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
