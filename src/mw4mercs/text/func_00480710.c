/*
 * FUN_00480710 (369 B) — MLR global primitive-base teardown. Frees the
 * global MLR buffer objects (0x007da65c..0x007da668 array, 0x007da68c,
 * 0x007da688, 0x007da684, 0x007da680, 0x007da608, 0x007da670,
 * 0x007da698) and their inner buffers, calling per-object destructors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00480470(void);
extern void __cdecl FUN_00422e30(void);
extern void __cdecl FUN_00415200(void);

extern int g_007da66c;
extern int g_007da68c;
extern int g_007da688;
extern int g_007da684;
extern int g_007da680;
extern int g_007da608;
extern int g_007da670;
extern int g_007da698;

__declspec(naked) void FUN_00480710(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, 0x7da65c
    L_80717:
        mov     esi, dword ptr [edi]
        test    esi, esi
        jz      L_80735
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_8072c
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_8072c:
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_80735:
        add     edi, 4
        cmp     edi, 0x7da66c
        jl      L_80717
        mov     eax, dword ptr [g_007da66c]
        lea     ecx, [eax+0x30]
        call    FUN_00480470
        mov     ecx, dword ptr [g_007da66c]
        call    FUN_00480470
        mov     ecx, dword ptr [g_007da66c]
        test    ecx, ecx
        jz      L_8078e
        mov     eax, dword ptr [ecx-4]
        push    ebx
        lea     ebx, [ecx-4]
        lea     esi, [eax+eax*2]
        shl     esi, 4
        add     esi, ecx
        dec     eax
        js      L_80784
        lea     edi, [eax+1]
    L_80777:
        sub     esi, 0x30
        mov     ecx, esi
        call    FUN_00422e30
        dec     edi
        jnz     L_80777
    L_80784:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
        pop     ebx
    L_8078e:
        mov     esi, dword ptr [g_007da68c]
        test    esi, esi
        jz      L_807b0
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_807a7
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_807a7:
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_807b0:
        mov     esi, dword ptr [g_007da688]
        test    esi, esi
        jz      L_807d2
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_807c9
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_807c9:
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_807d2:
        mov     esi, dword ptr [g_007da684]
        test    esi, esi
        jz      L_807f4
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_807eb
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_807eb:
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_807f4:
        mov     esi, dword ptr [g_007da680]
        test    esi, esi
        jz      L_80816
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_8080d
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_8080d:
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_80816:
        mov     esi, dword ptr [g_007da608]
        test    esi, esi
        jz      L_80838
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_8082f
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_8082f:
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_80838:
        mov     esi, dword ptr [g_007da670]
        test    esi, esi
        jz      L_8085a
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_80851
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_80851:
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_8085a:
        mov     esi, dword ptr [g_007da698]
        test    esi, esi
        jz      L_80874
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_80874:
        pop     edi
        mov     dword ptr [g_007da698], 0
        pop     esi
        ret
    }
}
