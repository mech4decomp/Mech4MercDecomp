/*
 * FUN_0071E8F0 (750 B) — Builds a "DLL Version numbers" report string into a
 * growable buffer (param_1: {capacity, length, data}). Appends a header and
 * the names of a fixed list of DLLs (msvcrt, msvcirt, amstream, quartz, ...)
 * via FUN_0071e430 (module lookup) + FUN_006fa880 (buffer append helper).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0071e430(void);
extern void __cdecl FUN_006fa880(void);

extern int PTR_DAT_007b6ed4;
extern char str_7a4760[];
extern char str_7a4750[];
extern char str_7a4744[];
extern char str_7a4738[];
extern char str_7a472c[];
extern char str_7a471c[];
extern char str_7a470c[];
extern char str_7a4700[];
extern char str_7a46f4[];
extern char str_7a46e8[];
extern char str_7a46dc[];
extern char str_7a46d0[];
extern char str_7a46c4[];
extern char str_7a46b8[];

__declspec(naked) void __cdecl FUN_0071e8f0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        mov     eax, offset str_7a4760
        test    eax, eax
        push    esi
        push    edi
        mov     dword ptr [PTR_DAT_007b6ed4], offset str_7a4750
        jz      L_1e955
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_1e92a
        sub     ecx, edx
        mov     eax, ecx
L_1e92a:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        mov     esi, offset str_7a4760
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_1e955:
        push    1
        push    offset str_7a4744
        call    FUN_0071e430
        mov     esi, eax
        test    esi, esi
        jz      L_1e9ac
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_1e986
        sub     ecx, edx
        mov     eax, ecx
L_1e986:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_1e9ac:
        push    1
        push    offset str_7a4738
        call    FUN_0071e430
        mov     esi, eax
        test    esi, esi
        jz      L_1ea03
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_1e9dd
        sub     ecx, edx
        mov     eax, ecx
L_1e9dd:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_1ea03:
        push    1
        push    offset str_7a472c
        call    FUN_0071e430
        mov     esi, eax
        test    esi, esi
        jz      L_1ea5a
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_1ea34
        sub     ecx, edx
        mov     eax, ecx
L_1ea34:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_1ea5a:
        push    1
        push    offset str_7a471c
        call    FUN_0071e430
        mov     esi, eax
        test    esi, esi
        jz      L_1eab1
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_1ea8b
        sub     ecx, edx
        mov     eax, ecx
L_1ea8b:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_1eab1:
        push    0
        push    offset str_7a470c
        call    FUN_0071e430
        mov     esi, eax
        test    esi, esi
        jz      L_1eb08
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_1eae2
        sub     ecx, edx
        mov     eax, ecx
L_1eae2:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_1eb08:
        push    0
        push    offset str_7a4700
        call    FUN_0071e430
        mov     esi, eax
        test    esi, esi
        jz      L_1eb5f
        mov     edx, dword ptr [ebx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [edx + eax]
        cmp     edi, ecx
        jle     L_1eb39
        sub     ecx, edx
        mov     eax, ecx
L_1eb39:
        mov     edx, dword ptr [ebx + 8]
        mov     edi, dword ptr [ebx + 4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        add     edi, edx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [eax + edx], 0
L_1eb5f:
        push    0
        push    offset str_7a46f4
        call    FUN_0071e430
        push    eax
        mov     ecx, ebx
        call    FUN_006fa880
        push    0
        push    offset str_7a46e8
        call    FUN_0071e430
        push    eax
        mov     ecx, ebx
        call    FUN_006fa880
        push    0
        push    offset str_7a46dc
        call    FUN_0071e430
        push    eax
        mov     ecx, ebx
        call    FUN_006fa880
        push    0
        push    offset str_7a46d0
        call    FUN_0071e430
        push    eax
        mov     ecx, ebx
        call    FUN_006fa880
        push    0
        push    offset str_7a46c4
        call    FUN_0071e430
        push    eax
        mov     ecx, ebx
        call    FUN_006fa880
        push    0
        push    offset str_7a46b8
        call    FUN_0071e430
        push    eax
        mov     ecx, ebx
        call    FUN_006fa880
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
