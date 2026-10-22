/*
 * FUN_00754700 (2756 B) — __stdcall (3 stack params, RET 0xC). Builds a
 * large formatted string into a growable buffer (ebp = {cap, len, buf})
 * by repeatedly calling IAT helpers (0x0076B010/76B014/76B018/76B00C),
 * a string-compare helper (0x0076B2AC via ebx), and 0x0076B2B0/76B320,
 * concatenating many static strings (0x007AE0xx/0x007ADFxx/0x0077xxxx)
 * and global scratch buffers (0x008BBx08) with repne scasb/rep movsd/
 * rep movsb.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b014;
extern void *g_0076b010;
extern void *g_0076b018;
extern void *g_0076b2b0;
extern void *g_0076b320;
extern void *g_0076b00c;
extern unsigned long g_0076b2ac;

extern char g_007ae084;
extern char g_007ae06c;
extern char g_007ae060;
extern char g_007ae050;
extern char g_007ae03c;
extern char g_007ae034;
extern char g_007ae02c;
extern char g_007ae020;
extern char g_007ae014;
extern char g_007ae010;
extern char g_007ae00c;
extern char g_007ae004;
extern char g_007adff8;
extern char g_007adff0;
extern char g_007adfe8;
extern char g_007adfe4;
extern char g_007adfd8;
extern char g_007adfd4;
extern char g_007adfcc;
extern char g_007adfb8;
extern char g_007adfb0;
extern char g_007adf98;
extern char g_007adf8c;
extern char g_007adf84;
extern char g_007adf7c;
extern char g_007adf50;
extern char g_007adf44;
extern char g_007adf38;
extern char g_007adf30;
extern char g_007adf24;
extern char g_007723e0;
extern char g_00772238;
extern char g_00779870;
extern char g_0077a078;
extern char g_0079e7f8;

extern char g_008bb908;
extern char g_008bb808;
extern char g_008bb708;
extern char g_008bb608;
extern char g_008bb508;
extern char g_008bb408;
extern char g_008bb308;
extern char g_008bb208;
extern char g_008bb108;
extern char g_008bb008;
extern char g_008baf08;
extern char g_008bbf08;

__declspec(naked) void FUN_00754700(void)
{
    __asm {
        sub     esp, 0x3c
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x20]
        push    eax
        push    offset g_007ae084
        push    0x80000006
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esp + 0x1c], 0
        call    dword ptr [g_0076b014]
        test    eax, eax
        mov     ebp, dword ptr [esp + 0x50]
        mov     ebx, dword ptr [g_0076b2ac]
        jne     l_5042
    l_473e:
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, ecx
        inc     ecx
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x44]
        push    ecx
        push    0
        push    0
        push    0
        lea     edx, [esp + 0x34]
        push    edx
        push    offset g_008bb908
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    eax
        mov     dword ptr [esp + 0x44], 0x100
        call    dword ptr [g_0076b010]
        test    eax, eax
        jne     l_5037
        or      ecx, 0xffffffff
        mov     edi, offset g_007ae06c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, offset g_008bb808
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, offset g_008bb908
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_008bb808
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, edx
        push    offset g_008bb808
        and     ecx, 3
        push    0x80000006
        rep     movsb
        call    dword ptr [g_0076b014]
        test    eax, eax
        jne     l_473e
        mov     edx, dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0x28]
        push    ecx
        push    offset g_008bb708
        push    eax
        push    eax
        push    offset g_007ae060
        push    edx
        mov     dword ptr [esp + 0x40], 0x100
        call    dword ptr [g_0076b018]
        mov     esi, dword ptr [g_0076b2b0]
        push    0xd
        push    offset g_008bb708
        push    offset g_007ae050
        call    esi
        add     esp, 0xc
        test    eax, eax
        je      l_5027
        push    0x13
        push    offset g_008bb708
        push    offset g_007ae03c
        call    esi
        add     esp, 0xc
        test    eax, eax
        je      l_5027
        mov     edx, dword ptr [esp + 0x58]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    offset g_008bb708
        push    edx
        call    esi
        add     esp, 0xc
        test    eax, eax
        jne     l_5027
        or      ecx, 0xffffffff
        mov     edi, offset g_007ae034
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, offset g_008bb608
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_008bb708
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_008bb608
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        lea     eax, [esp + 0x50]
        push    eax
        mov     ecx, edx
        push    offset g_008bb608
        and     ecx, 3
        push    0x80000002
        rep     movsb
        call    dword ptr [g_0076b014]
        test    eax, eax
        jne     l_501c
        mov     edx, dword ptr [esp + 0x50]
        mov     esi, dword ptr [g_0076b018]
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    offset g_008bb508
        push    eax
        push    eax
        push    offset g_007723e0
        mov     edi, 0x100
        push    edx
        mov     byte ptr [g_008bb508], al
        mov     dword ptr [esp + 0x44], edi
        call    esi
        push    offset g_008bb508
        push    offset g_007ae02c
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     l_496d
        mov     al, byte ptr [g_008bbf08]
        test    al, al
        jne     l_496d
        mov     ecx, dword ptr [esp + 0x50]
        lea     eax, [esp + 0x30]
        push    eax
        push    offset g_008bb408
        push    0
        push    0
        push    offset g_007ae020
        push    ecx
        mov     byte ptr [g_008bb408], 0
        mov     dword ptr [esp + 0x48], edi
        call    esi
        push    8
        push    offset g_007ae014
        push    offset g_008bb408
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        test    eax, eax
        jne     l_496d
        push    0xd
        push    offset g_008bb408
        push    offset g_008bbf08
        call    dword ptr [g_0076b320]
        add     esp, 0xc
    l_496d:
        push    offset g_008bb508
        push    offset g_007ae02c
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_007ae010
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_007ae00c
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_00772238
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_007ae004
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_00779870
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_007adff8
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_007adff0
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_007adfe8
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_0079e7f8
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        push    offset g_008bb508
        push    offset g_007adfe4
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        mov     esi, dword ptr [g_0076b018]
        lea     edx, [esp + 0x30]
        push    edx
        push    offset g_008bb408
        mov     eax, 0x100
        push    0
        push    0
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x48], eax
        mov     dword ptr [esp + 0x4c], eax
        mov     eax, dword ptr [esp + 0x60]
        push    offset g_007ae020
        push    eax
        mov     byte ptr [g_008bb408], 0
        mov     byte ptr [g_008bb308], 0
        mov     byte ptr [g_008bb208], 0
        mov     byte ptr [g_008bb108], 0
        call    esi
        mov     edx, dword ptr [esp + 0x50]
        lea     ecx, [esp + 0x34]
        push    ecx
        push    offset g_008bb308
        push    0
        push    0
        push    offset g_007adfd8
        push    edx
        call    esi
        mov     ecx, dword ptr [esp + 0x50]
        lea     eax, [esp + 0x38]
        push    eax
        push    offset g_008bb208
        push    0
        push    0
        push    offset g_007adfd4
        push    ecx
        call    esi
        mov     eax, dword ptr [esp + 0x50]
        lea     edx, [esp + 0x3c]
        push    edx
        push    offset g_008bb108
        push    0
        push    0
        push    offset g_007adfcc
        push    eax
        call    esi
        push    offset g_008bb408
        push    offset g_007adfb8
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
        mov     ecx, dword ptr [esp + 0x58]
        push    ecx
        push    offset g_007adfb0
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     l_4b4a
        push    offset g_007adf98
        push    offset g_008bb208
        call    ebx
        add     esp, 8
        test    eax, eax
        je      l_501c
    l_4b4a:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jne     l_4bb0
        mov     edi, dword ptr [esp + 0x54]
        test    edi, edi
        je      l_4ba8
        mov     edx, dword ptr [ebp + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4b78
        sub     ecx, edx
        mov     eax, ecx
    l_4b78:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     esi, dword ptr [esp + 0x54]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4ba8:
        mov     dword ptr [esp + 0x10], 1
    l_4bb0:
        mov     al, byte ptr [g_008bb308]
        test    al, al
        je      l_4d57
        mov     edx, offset g_008bb408
        test    edx, edx
        je      l_4c17
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        mov     edx, dword ptr [ebp + 4]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4be6
        sub     ecx, edx
        mov     eax, ecx
    l_4be6:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_008bb408
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4c17:
        mov     eax, offset g_007adf8c
        test    eax, eax
        je      l_4c71
        mov     edx, dword ptr [ebp + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4c40
        sub     ecx, edx
        mov     eax, ecx
    l_4c40:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_007adf8c
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4c71:
        mov     ecx, offset g_008bb308
        test    ecx, ecx
        je      l_4ccb
        mov     edx, dword ptr [ebp + 4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4c9a
        sub     ecx, edx
        mov     eax, ecx
    l_4c9a:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_008bb308
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4ccb:
        mov     edx, offset g_007adf84
        test    edx, edx
        je      l_4d25
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        mov     edx, dword ptr [ebp + 4]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4cf4
        sub     ecx, edx
        mov     eax, ecx
    l_4cf4:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_007adf84
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4d25:
        mov     eax, offset g_008bb208
        test    eax, eax
        je      l_4e65
        mov     edx, dword ptr [ebp + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4e34
        jmp     l_4e30
    l_4d57:
        mov     ecx, offset g_008bb408
        test    ecx, ecx
        je      l_4db1
        mov     edx, dword ptr [ebp + 4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4d80
        sub     ecx, edx
        mov     eax, ecx
    l_4d80:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_008bb408
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4db1:
        mov     edx, offset g_007adf7c
        test    edx, edx
        je      l_4e0b
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        mov     edx, dword ptr [ebp + 4]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4dda
        sub     ecx, edx
        mov     eax, ecx
    l_4dda:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_007adf7c
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4e0b:
        mov     eax, offset g_008bb208
        test    eax, eax
        je      l_4e65
        mov     edx, dword ptr [ebp + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4e34
    l_4e30:
        sub     ecx, edx
        mov     eax, ecx
    l_4e34:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_008bb208
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4e65:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_007adf50
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, offset g_008bb008
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, offset g_008bb108
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_008bb008
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     byte ptr [g_008baf08], al
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edx
        push    offset g_008bb008
        and     ecx, 3
        push    0x80000002
        rep     movsb
        mov     dword ptr [esp + 0x4c], 0x100
        call    dword ptr [g_0076b014]
        test    eax, eax
        jne     l_4fc2
        mov     edx, dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x40]
        push    ecx
        push    offset g_008baf08
        push    eax
        push    eax
        push    offset g_007adf44
        push    edx
        call    dword ptr [g_0076b018]
        test    eax, eax
        jne     l_4fb7
        mov     eax, offset g_007adf38
        test    eax, eax
        je      l_4f5d
        mov     edx, dword ptr [ebp + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4f2c
        sub     ecx, edx
        mov     eax, ecx
    l_4f2c:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_007adf38
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4f5d:
        mov     ecx, offset g_008baf08
        test    ecx, ecx
        je      l_4fb7
        mov     edx, dword ptr [ebp + 4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4f86
        sub     ecx, edx
        mov     eax, ecx
    l_4f86:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_008baf08
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_4fb7:
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        call    dword ptr [g_0076b00c]
    l_4fc2:
        mov     eax, offset g_0077a078
        test    eax, eax
        je      l_501c
        mov     edx, dword ptr [ebp + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_4feb
        sub     ecx, edx
        mov     eax, ecx
    l_4feb:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_0077a078
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b2ac]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_501c:
        mov     ecx, dword ptr [esp + 0x50]
        push    ecx
        call    dword ptr [g_0076b00c]
    l_5027:
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        call    dword ptr [g_0076b00c]
        jmp     l_473e
    l_5037:
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        call    dword ptr [g_0076b00c]
    l_5042:
        mov     ecx, dword ptr [esp + 0x58]
        push    offset g_007adf30
        push    ecx
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     l_51ba
        mov     al, byte ptr [g_008bbf08]
        test    al, al
        je      l_51ba
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jne     l_50be
        mov     edi, dword ptr [esp + 0x54]
        test    edi, edi
        je      l_50be
        mov     edx, dword ptr [ebp + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_5094
        sub     ecx, edx
        mov     eax, ecx
    l_5094:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     esi, dword ptr [esp + 0x54]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_50be:
        mov     edx, offset g_007adf24
        test    edx, edx
        je      l_5112
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        mov     edx, dword ptr [ebp + 4]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_50e7
        sub     ecx, edx
        mov     eax, ecx
    l_50e7:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_007adf24
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_5112:
        mov     eax, offset g_008bbf08
        test    eax, eax
        je      l_5166
        mov     edx, dword ptr [ebp + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_513b
        sub     ecx, edx
        mov     eax, ecx
    l_513b:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_008bbf08
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_5166:
        mov     ecx, offset g_0077a078
        test    ecx, ecx
        je      l_51ba
        mov     edx, dword ptr [ebp + 4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     l_518f
        sub     ecx, edx
        mov     eax, ecx
    l_518f:
        mov     edx, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 4]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset g_0077a078
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax + edx], 0
    l_51ba:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
    }
}
