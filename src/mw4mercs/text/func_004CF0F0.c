/*
 * FUN_004CF0F0 (1006 B) — __stdcall (1 dword param), RET 4.
 *
 * Serializes/emits a database object (param_1 = esi) into a text buffer via
 * a chain of virtual calls on this (edi = esi+0x24) and on esi, using
 * sprintf-style IAT calls (g_76b320, g_76b318, g_76b2f8) and a global
 * callback (g_858a2c). Loops over record indices (ebx) and per-record
 * sub-indices (ecx), calling FUN_006f6410/FUN_006f59f0. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_76b2f8)(void);   /* IAT */
extern void (__stdcall *g_76b320)(void);   /* IAT */
extern void (__stdcall *g_76b318)(void);   /* IAT (atoi) */
extern void (__stdcall *g_858a2c)(void);   /* DAT_00858a2c */
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f6410(void);
extern void __cdecl FUN_006f59f0(void);

__declspec(naked) void FUN_004CF0F0(void)
{
    __asm {
        sub     esp, 0x210
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x21c]
        push    edi
        mov     edi, dword ptr [esi + 0x24]
        test    edi, edi
        je      L_f4d0
        mov     al, byte ptr [esi + 0x20]
        test    al, al
        je      L_f11f
        mov     eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 4]
        test    al, al
        jne     L_f11f
        mov     byte ptr [esi + 0x20], al
L_f11f:
        call    FUN_006f89f0
        mov     ecx, dword ptr [edi]
        push    edi
        mov     esi, eax
        xor     ebx, ebx
        call    dword ptr [ecx + 8]
        test    eax, eax
        jle     L_f4d0
        push    ebp
L_f137:
        mov     ebp, dword ptr [g_76b2f8]
        push    0x100
        lea     edx, [esp + 0x24]
        push    0x771d58
        push    edx
        call    dword ptr [g_76b320]
        mov     eax, dword ptr [edi]
        add     esp, 0xc
        push    0x100
        push    0x771c90
        push    ebx
        push    edi
        call    dword ptr [eax + 0xc]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        call    ebp
        mov     edx, dword ptr [edi]
        add     esp, 0xc
        push    0x100
        push    ebx
        push    edi
        call    dword ptr [edx + 0x10]
        push    eax
        lea     eax, [esp + 0x28]
        push    eax
        call    ebp
        mov     ecx, dword ptr [edi]
        add     esp, 0xc
        push    0x771c90
        push    ebx
        push    edi
        call    dword ptr [ecx + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        je      L_f4b2
        cmp     byte ptr [eax], 0
        je      L_f4b2
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 4]
        test    al, al
        je      L_f4b2
        mov     ecx, dword ptr [edi]
        push    0x771c2c
        push    ebx
        push    edi
        call    dword ptr [ecx + 0xc]
        test    eax, eax
        je      L_f1e7
        mov     edx, dword ptr [edi]
        push    0x771c2c
        push    ebx
        push    edi
        call    dword ptr [edx + 0xc]
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 4
        mov     ebp, eax
        jmp     L_f210
L_f1e7:
        xor     ebp, ebp
        push    ebp
        push    ebp
        push    ebp
        push    ebp
        call    dword ptr [g_858a2c]
        add     esp, 0x10
        test    eax, eax
        je      L_f20f
L_f1fa:
        push    0
        push    0
        inc     ebp
        push    ebp
        push    0
        call    dword ptr [g_858a2c]
        add     esp, 0x10
        test    eax, eax
        jne     L_f1fa
L_f20f:
        dec     ebp
L_f210:
        lea     eax, [esp + 0x120]
        push    eax
        push    0x100
        push    ebp
        push    0
        call    dword ptr [g_858a2c]
        mov     edx, dword ptr [esi]
        add     esp, 0x10
        push    0x771d4c
        push    0x79faa0
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 8]
        mov     ecx, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    0x771c20
        push    ebx
        push    edi
        call    dword ptr [ecx + 0xc]
        push    eax
        push    0x79fa90
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    0x771c64
        push    ebx
        push    edi
        call    dword ptr [eax + 0xc]
        push    eax
        push    0x79fa48
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     edx, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    ebx
        push    edi
        call    dword ptr [edx + 0x10]
        push    eax
        push    0x79fa18
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     ecx, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    0x771c9c
        push    ebx
        push    edi
        call    dword ptr [ecx + 0xc]
        push    eax
        push    0x79fa54
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi]
        push    ecx
        push    0x79fa10
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 8]
        mov     eax, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    0x771c38
        push    ebx
        push    edi
        call    dword ptr [eax + 0xc]
        push    eax
        push    0x79fa24
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     edx, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    0x771c44
        push    ebx
        push    edi
        call    dword ptr [edx + 0xc]
        push    eax
        push    0x79fa60
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     ecx, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    0x771c50
        push    ebx
        push    edi
        call    dword ptr [ecx + 0xc]
        push    eax
        push    0x79fa2c
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x120]
        push    ecx
        push    0x79fa6c
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 8]
        mov     eax, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    0x771cf0
        push    ebx
        push    edi
        call    dword ptr [eax + 0xc]
        push    eax
        push    0x79fa34
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     edx, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    0x771c6c
        push    ebx
        push    edi
        call    dword ptr [edx + 0xc]
        push    eax
        push    0x79fa78
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     edi, dword ptr [esp + 0x224]
        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x14]
        push    eax
        push    0x79fab8
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 8]
        mov     edi, dword ptr [edi + 0x24]
        mov     edx, dword ptr [edi]
        mov     ebp, dword ptr [esi]
        push    0x771ce8
        push    ebx
        push    edi
        call    dword ptr [edx + 0xc]
        push    eax
        push    0x79fae0
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [ebp + 8]
        mov     edx, dword ptr [esi]
        push    0x79fb40
        push    0x79fad4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 8]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    FUN_006f6410
        mov     ebp, eax
        test    ebp, ebp
        mov     dword ptr [esp + 0x18], ebp
        je      L_f4b2
        mov     ecx, ebp
        call    FUN_006f59f0
        mov     edx, dword ptr [edi]
        push    0x771c38
        push    ebx
        push    edi
        call    dword ptr [edx + 0xc]
        push    eax
        call    dword ptr [g_76b318]
        xor     ecx, ecx
        add     esp, 4
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x10], ecx
        jle     L_f4b2
L_f413:
        mov     eax, dword ptr [edi]
        mov     ebp, dword ptr [ebp]
        push    0x771c74
        push    ecx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x14]
        mov     edx, ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi]
        mov     ebp, dword ptr [ebp]
        push    0x771c74
        push    ecx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [edi]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    0x79fb68
        push    0x771c74
        push    eax
        push    ebx
        push    edi
        call    dword ptr [edx + 0x14]
        mov     edx, ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx + 8]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi]
        mov     ebp, dword ptr [ebp]
        push    0x771c7c
        push    ecx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [edi]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    0x79fb70
        push    0x771c74
        push    eax
        push    ebx
        push    edi
        call    dword ptr [edx + 0x14]
        mov     edx, ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx + 8]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x1c]
        inc     ecx
        cmp     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jl      L_f413
L_f4b2:
        mov     eax, dword ptr [edi]
        push    edi
        inc     ebx
        call    dword ptr [eax + 8]
        cmp     ebx, eax
        jl      L_f137
        pop     ebp
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0x210
        ret     4
L_f4d0:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0x210
        ret     4
    }
}
