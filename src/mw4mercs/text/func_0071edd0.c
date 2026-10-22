/*
 * FUN_0071edd0 (1118 B) — Load a DLL (g_76b14c), resolve 9 exports via
 * GetProcAddress (g_76b0c8) into g_87dbec..g_87dbcc, then run a
 * read/format loop using those function pointers, building strings with
 * rep movsd/movsb and repne scasb.
 *
 * __stdcall RET 4, one param (EBP = a string-buffer struct).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0071ed10(void);
extern void FUN_0071ec60(void);

extern void *g_76b14c;   /* LoadLibraryA (IAT) */
extern void *g_76b0c8;   /* GetProcAddress (IAT) */
extern void *g_76b2ac;   /* string helper (IAT) */
extern void *g_76b420;   /* wsprintfA (IAT) */
extern void *g_76b0ec;   /* FreeLibrary (IAT) */

extern int g_87dbec;
extern int g_87dbe8;
extern int g_87dbe4;
extern int g_87dbe0;
extern int g_87dbdc;
extern int g_87dbd8;
extern int g_87dbd4;
extern int g_87dbd0;
extern int g_87dbcc;
extern char g_7b7068;
extern char g_8aa9e4;

__declspec(naked) void FUN_0071edd0(void)
{
    __asm {
        sub     esp, 0x454
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     eax, eax
        mov     dword ptr [esp + 0x18], 0x0
        mov     ecx, 0x49
        lea     edi, [esp + 0x1c]
        push    0x7a149c
        rep     stosd
        mov     byte ptr [esp + 0x17], 0x1
        call    dword ptr [g_76b14c]
        mov     esi, eax
        test    esi, esi
        jz      L_f221
        mov     edi, dword ptr [g_76b0c8]
        push    0x7a495c
        push    esi
        call    edi
        test    eax, eax
        mov     dword ptr [g_87dbec], eax
        jz      L_f221
        push    0x7a494c
        push    esi
        call    edi
        test    eax, eax
        mov     dword ptr [g_87dbe8], eax
        jz      L_f221
        push    0x7a493c
        push    esi
        call    edi
        test    eax, eax
        mov     dword ptr [g_87dbe4], eax
        jz      L_f221
        push    0x7a4930
        push    esi
        call    edi
        test    eax, eax
        mov     dword ptr [g_87dbe0], eax
        jz      L_f221
        push    0x7a4924
        push    esi
        call    edi
        test    eax, eax
        mov     dword ptr [g_87dbdc], eax
        jz      L_f221
        push    0x7a4914
        push    esi
        call    edi
        test    eax, eax
        mov     dword ptr [g_87dbd8], eax
        jz      L_f221
        push    0x7a4904
        push    esi
        call    edi
        test    eax, eax
        mov     dword ptr [g_87dbd4], eax
        jz      L_f221
        push    0x7a48f4
        push    esi
        call    edi
        test    eax, eax
        mov     dword ptr [g_87dbd0], eax
        jz      L_f221
        push    0x7a48e4
        push    esi
        call    edi
        test    eax, eax
        mov     dword ptr [g_87dbcc], eax
        jz      L_f221
        push    0x0
        push    0x2
        call    dword ptr [g_87dbec]
        mov     edi, eax
        cmp     edi, -0x1
        mov     dword ptr [esp + 0x14], edi
        jz      L_f221
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        mov     dword ptr [esp + 0x20], 0x128
        call    dword ptr [g_87dbd0]
        test    eax, eax
        mov     ebp, dword ptr [esp + 0x468]
        jz      L_f1c6
        mov     esi, dword ptr [g_76b2ac]
        mov     ecx, 0x88
        xor     eax, eax
        lea     edi, [esp + 0x144]
        mov     dword ptr [esp + 0x140], 0x0
        rep     stosd
    L_ef29:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L_f1a6
        mov     edx, dword ptr [esp + 0x28]
        push    0x224
        lea     ecx, [esp + 0x144]
        push    ecx
        push    edx
        push    eax
        call    FUN_0071ed10
        test    eax, eax
        jz      L_f1a6
        lea     eax, [esp + 0x160]
        push    eax
        push    0x7a48d4
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L_f1a6
        lea     ecx, [esp + 0x160]
        push    ecx
        push    0x7a48c4
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L_f1a6
        lea     edx, [esp + 0x160]
        push    edx
        push    0x7a48b8
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L_f1a6
        lea     eax, [esp + 0x160]
        push    eax
        push    0x7a48ac
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L_f1a6
        lea     ecx, [esp + 0x160]
        push    ecx
        push    0x7a48a0
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L_f1a6
        lea     edx, [esp + 0x160]
        push    edx
        push    0x7a4894
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L_f1a6
        lea     eax, [esp + 0x160]
        push    eax
        push    0x7a4888
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L_f1a6
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L_f0c4
        mov     al, byte ptr [g_7b7068]
        test    al, al
        mov     byte ptr [esp + 0x13], 0x0
        jz      L_f06a
        mov     al, byte ptr [g_8aa9e4]
        test    al, al
        jnz     L_f06a
        mov     ecx, 0x7a481c
        test    ecx, ecx
        jz      L_f0c4
        mov     edx, dword ptr [ebp + 0x4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax*1]
        cmp     esi, ecx
        jle     L_f05b
        sub     ecx, edx
        mov     eax, ecx
    L_f05b:
        mov     edx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp + 0x4]
        mov     ecx, eax
        mov     esi, 0x7a481c
        jmp     L_f0a0
    L_f06a:
        mov     edx, 0x7a47c4
        test    edx, edx
        jz      L_f0c4
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        mov     edx, dword ptr [ebp + 0x4]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax*1]
        cmp     esi, ecx
        jle     L_f093
        sub     ecx, edx
        mov     eax, ecx
    L_f093:
        mov     edx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp + 0x4]
        mov     ecx, eax
        mov     esi, 0x7a47c4
    L_f0a0:
        mov     ebx, ecx
        shr     ecx, 0x2
        add     edi, edx
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0x4]
        mov     esi, dword ptr [g_76b2ac]
        lea     eax, [ecx + eax*1 - 0x1]
        mov     dword ptr [ebp + 0x4], eax
        mov     byte ptr [eax + edx*1], 0x0
    L_f0c4:
        mov     al, byte ptr [g_7b7068]
        test    al, al
        jz      L_f113
        mov     al, byte ptr [g_8aa9e4]
        test    al, al
        jnz     L_f113
        mov     ecx, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x260]
        push    eax
        push    ecx
        call    FUN_0071ec60
        mov     edx, dword ptr [esp + 0x30]
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    edx
        push    eax
        lea     ecx, [esp + 0x170]
        push    ecx
        lea     edx, [esp + 0x378]
        push    0x7a47a4
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0x1c
        jmp     L_f143
    L_f113:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x34]
        lea     eax, [esp + 0x260]
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x16c]
        push    eax
        lea     ecx, [esp + 0x374]
        push    0x7a478c
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0x18
    L_f143:
        lea     edx, [esp + 0x364]
        test    edx, edx
        jz      L_f1a6
        mov     edx, dword ptr [ebp + 0x4]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x364]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax*1]
        cmp     esi, ecx
        jle     L_f173
        sub     ecx, edx
        mov     eax, ecx
    L_f173:
        mov     edx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp + 0x4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 0x2
        add     edi, edx
        lea     esi, [esp + 0x364]
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0x4]
        mov     esi, dword ptr [g_76b2ac]
        lea     eax, [ecx + eax*1 - 0x1]
        mov     dword ptr [ebp + 0x4], eax
        mov     byte ptr [eax + edx*1], 0x0
    L_f1a6:
        mov     edi, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        mov     dword ptr [esp + 0x20], 0x128
        call    dword ptr [g_87dbcc]
        test    eax, eax
        jnz     L_ef29
    L_f1c6:
        push    edi
        call    dword ptr [g_76b0ec]
        mov     ecx, 0x77a078
        test    ecx, ecx
        jz      L_f221
        mov     edx, dword ptr [ebp + 0x4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax*1]
        cmp     esi, ecx
        jle     L_f1f6
        sub     ecx, edx
        mov     eax, ecx
    L_f1f6:
        mov     edx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp + 0x4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 0x2
        add     edi, edx
        mov     esi, 0x77a078
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0x4]
        lea     eax, [ecx + eax*1 - 0x1]
        mov     dword ptr [ebp + 0x4], eax
        mov     byte ptr [eax + edx*1], 0x0
    L_f221:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x454
        ret     0x4
    }
}
