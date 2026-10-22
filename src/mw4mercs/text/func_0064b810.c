/*
 * FUN_0064b810 (949 B) — __thiscall, RET 4. Array/parameter setup helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2ba8;          /* 0x007f2ba8 */
extern int g_80d984;          /* 0x0080d984 */
extern int g_80d970;          /* 0x0080d970 */
extern int g_7f299c;          /* 0x007f299c */
extern int g_805928;          /* 0x00805928 */
extern int g_805940;          /* 0x00805940 */
extern int g_805934;          /* 0x00805934 */
extern int g_8058dc;          /* 0x008058dc */
extern int g_8058e0;          /* 0x008058e0 */
extern int g_8058cc;          /* 0x008058cc */
extern int g_7de630;          /* 0x007de630 */
extern int g_805924;          /* 0x00805924 */
extern int g_8058c0;          /* 0x008058c0 */
extern int g_80d994;          /* 0x0080d994 */
extern int g_805930;          /* 0x00805930 */
extern int g_80592c;          /* 0x0080592c */
extern int g_80d9b4;          /* 0x0080d9b4 */
extern int g_80d9bc;          /* 0x0080d9bc */
extern int g_8058b8;          /* 0x008058b8 */
extern int g_805950;          /* 0x00805950 */
extern char g_805958;         /* 0x00805958 */
extern int g_80d960;          /* 0x0080d960 */
extern char g_792c5c[];       /* 0x00792c5c (format string) */
extern int *g_76b420;         /* 0x0076b420 (IAT) */

extern void __cdecl FUN_0061fca0(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0061ebc0(void);
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_0064a6b0(void);

__declspec(naked) void FUN_0064b810(void)
{
    __asm {
        sub     esp, 0x118
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     ecx, dword ptr [g_7f2ba8]
        push    edi
        xor     edi, edi
        cmp     ecx, edi
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [g_80d984], ebx
        jz      L_b838
        push    ebx
        call    FUN_0061fca0
L_b838:
        mov     eax, dword ptr [ebx + 0x20]
        mov     ecx, dword ptr [g_80d970]
        mov     esi, dword ptr [g_7f299c]
        mov     edx, dword ptr [ebx + 0x24]
        lea     eax, [eax + eax*4]
        mov     ebp, dword ptr [ecx + eax*8 + 4]
        mov     ecx, dword ptr [g_805928]
        mov     eax, dword ptr [g_805940]
        inc     esi
        lea     eax, [ecx + eax*4 + 4]
        mov     dword ptr [g_7f299c], esi
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [g_805934], edx
        mov     dword ptr [g_8058dc], edi
        mov     dword ptr [g_8058e0], edi
        mov     dword ptr [g_8058cc], 0xffffffff
        mov     dword ptr [g_7de630], edi
        mov     dword ptr [g_805924], edi
        mov     dword ptr [g_8058c0], 1
        mov     dword ptr [g_80d994], edi
        mov     dword ptr [g_805930], eax
        mov     dword ptr [g_80592c], eax
        jc      L_b8c7
        push    edi
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_b8c7:
        mov     ecx, dword ptr [g_805928]
        add     eax, 4
        mov     dword ptr [esi], edi
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jc      L_b8f1
        push    edi
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_b8f1:
        mov     edx, dword ptr [g_805928]
        add     eax, 4
        mov     dword ptr [esi], edi
        mov     esi, eax
        add     edx, 0xa000
        cmp     esi, edx
        mov     dword ptr [g_80592c], eax
        jc      L_b91b
        push    edi
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_b91b:
        mov     ecx, dword ptr [g_805928]
        add     eax, 4
        mov     dword ptr [esi], edi
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jc      L_b945
        push    edi
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_b945:
        mov     ecx, dword ptr [esp + 0x12c]
        cmp     ecx, edi
        mov     dword ptr [esi], edi
        jz      L_bb6b
        mov     edx, dword ptr [ebp + 0x28]
        cmp     edx, edi
        mov     dword ptr [esp + 0x10], edx
        jz      L_bb6b
        lea     ebx, [ecx + 4]
L_b968:
        mov     ecx, dword ptr [esp + 0x10]
        cmp     dword ptr [ecx + 0x18], 4
        mov     ebp, dword ptr [ecx + 0x3c]
        mov     ecx, dword ptr [g_80d9b4]
        jnz     L_bae4
        cmp     ebp, ecx
        jnz     L_b9fd
        mov     cl, byte ptr [ebx - 4]
        cmp     cl, 1
        jnz     L_b9c1
        mov     edx, dword ptr [g_805928]
        fild    dword ptr [ebx]
        add     eax, 4
        mov     esi, eax
        add     edx, 0xa000
        fstp    dword ptr [esp + 0x1c]
        cmp     esi, edx
        mov     dword ptr [g_80592c], eax
        jc      L_b9b9
        push    edi
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_b9b9:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi], ecx
        jmp     L_ba3e
L_b9c1:
        cmp     cl, 2
        jnz     L_ba3e
        mov     ecx, dword ptr [g_805928]
        mov     edx, dword ptr [ebx + 4]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [g_80592c], eax
        jc      L_b9f5
        push    edi
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_b9f5:
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esi], edx
        jmp     L_ba3e
L_b9fd:
        cmp     ebp, dword ptr [g_80d9bc]
        jnz     L_ba3e
        cmp     byte ptr [ebx - 4], 1
        jnz     L_bbb6
        mov     ecx, dword ptr [g_805928]
        mov     edi, dword ptr [ebx]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jc      L_ba3a
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_ba3a:
        mov     dword ptr [esi], edi
        xor     edi, edi
L_ba3e:
        cmp     dword ptr [ebp + 4], 3
        jnz     L_bb4d
        mov     esi, dword ptr [g_8058b8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     edi, dword ptr [ebp + 8]
        jz      L_bae0
        push    eax
        push    edi
        call    FUN_006f3c80
        mov     edx, dword ptr [esi + 0x14]
        lea     ecx, [esi + 0x10]
        cmp     edx, dword ptr [ecx + 8]
        mov     dword ptr [esp + 0x14], eax
        jz      L_ba84
        test    edx, edx
        jz      L_ba7c
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x14]
L_ba7c:
        add     edx, 4
        mov     dword ptr [ecx + 4], edx
        jmp     L_ba95
L_ba84:
        push    1
        lea     eax, [esp + 0x18]
        push    eax
        push    edx
        call    FUN_0061ebc0
        mov     eax, dword ptr [esp + 0x14]
L_ba95:
        test    eax, eax
        mov     ebp, eax
        jnz     L_bac1
L_ba9b:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx]
        push    edx
        lea     eax, [esp + 0x2c]
        push    offset g_792c5c
        push    eax
        call    dword ptr [g_76b420]
        lea     ecx, [esp + 0x34]
        push    ecx
        push    0
        call    FUN_00562f10
        add     esp, 0x14
L_bac1:
        mov     eax, dword ptr [g_80592c]
        mov     esi, dword ptr [eax]
        mov     ecx, edi
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, ebp
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     dword ptr [eax], ebp
        xor     edi, edi
        jmp     L_bb4d
L_bae0:
        xor     ebp, ebp
        jmp     L_ba9b
L_bae4:
        cmp     ebp, ecx
        jnz     L_bb17
        mov     ecx, dword ptr [g_805928]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jc      L_bb10
        push    edi
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bb10:
        lea     edx, [ebx + 4]
        mov     dword ptr [esi], edx
        jmp     L_bb4d
L_bb17:
        cmp     ebp, dword ptr [g_80d9bc]
        jnz     L_bbb6
        mov     ecx, dword ptr [g_805928]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], eax
        jc      L_bb4b
        push    edi
        call    FUN_00563060
        mov     eax, dword ptr [g_80592c]
        add     esp, 4
L_bb4b:
        mov     dword ptr [esi], ebx
L_bb4d:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edx + 0xc]
        add     ebx, 0xc
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        jnz     L_b968
        mov     ebp, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [esp + 0x18]
L_bb6b:
        mov     dl, byte ptr [ebx + 0x2c]
        mov     eax, dword ptr [ebx + 0x20]
        mov     ecx, dword ptr [ebx + 0x38]
        test    dl, dl
        mov     dword ptr [g_805950], eax
        setz    al
        push    ebp
        mov     byte ptr [g_805958], al
        mov     byte ptr [ebx + 0x2c], 1
        mov     dword ptr [ebp + 0x28], ecx
        call    FUN_0064a6b0
        mov     edx, dword ptr [ebp + 0x28]
        mov     eax, dword ptr [g_80d960]
        add     esp, 4
        mov     dword ptr [ebp + 0x28], edi
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x28], eax
        mov     eax, dword ptr [g_805924]
        pop     ebp
        mov     dword ptr [ebx + 0x38], edx
        pop     ebx
        add     esp, 0x118
        ret     4
L_bbb6:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x118
        ret     4
    }
}
