/*
 * FUN_006fdff0 (280 B) — Builds a unique wide-char filename from a narrow
 * string: mallocs two buffers, converts via mbstowcs, appends a "_<n>"
 * suffix (n = DAT_007b6f04 % 1000), then calls a virtual method on the
 * object at [DAT_00856860+0xc] (vtable+0x20). Returns 0 on success, -1 on
 * failure.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_00856860;                       /* global object pointer */
extern unsigned int g_0085683c;                /* mode flag */
extern void *g_00856850;                       /* malloc'd buffer 1 */
extern void *g_00856854;                       /* malloc'd buffer 2 */
extern unsigned int g_00856848;                /* success flag */
extern int g_007b6f04;                         /* counter */
extern void *(__cdecl *g_0076b294)(unsigned int);              /* malloc IAT */
extern unsigned int (__cdecl *g_0076b3e8)(void *, const char *, unsigned int); /* mbstowcs IAT */
extern void *(__cdecl *g_0076b3f4)(void *, const void *);      /* wcscat IAT */
extern void *(__cdecl *g_0076b374)(int, void *, int);          /* _itow IAT */
extern void *(__cdecl *g_0076b3e0)(void *, const void *);      /* wcscpy IAT */
extern void __cdecl FUN_006fde20(void);
extern int __cdecl FUN_007047f0(void);

__declspec(naked) void FUN_006fdff0(void)
{
    __asm {
        mov     eax, dword ptr [g_00856860]
        sub     esp, 0x8
        test    eax, eax
        jz      L_fail
        cmp     dword ptr [g_0085683c], 0x80
        jnz     L_fail
        push    ebx
        push    esi
        push    edi
        call    FUN_006fde20
        mov     ebx, dword ptr [esp + 0x18]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        mov     edi, dword ptr [g_0076b294]
        not     ecx
        dec     ecx
        mov     esi, ecx
        lea     eax, [esi + esi + 0xa]
        push    eax
        call    edi
        inc     esi
        lea     ecx, [esi + esi]
        push    ecx
        mov     dword ptr [g_00856850], eax
        call    edi
        mov     edx, dword ptr [g_00856850]
        mov     edi, dword ptr [g_0076b3e8]
        push    esi
        push    ebx
        push    edx
        mov     dword ptr [g_00856854], eax
        call    edi
        mov     eax, dword ptr [g_00856854]
        push    esi
        push    ebx
        push    eax
        call    edi
        mov     edx, dword ptr [g_007b6f04]
        add     esp, 0x20
        cmp     edx, -0x1
        jnz     L_itow
        call    FUN_007047f0
        cdq
        mov     ecx, 0x3e8
        idiv    ecx
        mov     dword ptr [g_007b6f04], edx
L_itow:
        push    0xa
        lea     eax, [esp + 0x10]
        push    eax
        push    edx
        call    dword ptr [g_0076b374]
        mov     ecx, dword ptr [g_00856854]
        mov     edx, dword ptr [g_00856850]
        push    ecx
        push    edx
        call    dword ptr [g_0076b3e0]
        mov     eax, dword ptr [g_00856850]
        mov     esi, dword ptr [g_0076b3f4]
        push    0x7a0bfc
        push    eax
        call    esi
        mov     edx, dword ptr [g_00856850]
        lea     ecx, [esp + 0x28]
        push    ecx
        push    edx
        call    esi
        mov     eax, dword ptr [g_00856860]
        mov     edx, dword ptr [g_00856850]
        mov     eax, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [eax]
        add     esp, 0x24
        push    0x0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jge     L_success
L_fail:
        call    FUN_006fde20
        or      eax, 0xffffffff
        add     esp, 0x8
        ret     0x4
L_success:
        mov     dword ptr [g_00856848], 0x1
        xor     eax, eax
        add     esp, 0x8
        ret     0x4
    }
}
