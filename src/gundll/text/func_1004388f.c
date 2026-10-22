/*
 * FUN_1004388f (312 B) — __cdecl.
 * Locale/registry string fetch helper (GetLocaleInfo-style), with a
 * two-pass size-then-fill allocation path.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1004558d(void);
extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_1003c2dc(void);
extern void __cdecl FUN_10037f30(void);
extern void __cdecl FUN_1004547a(void);
extern void __cdecl FUN_100399db(void);

extern void (__stdcall *g_100490e4)(void);
extern char g_10075740;
extern char g_10075748;
extern int  g_10051b90;
extern char *g_10051984;

__declspec(naked) void FUN_1004388f(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        cmp     dword ptr [ebp + 8], 1
        push    ebx
        push    esi
        push    edi
        jnz     L_3955
        xor     ebx, ebx
        lea     eax, [ebp - 0x80]
        push    ebx
        push    0x80
        push    eax
        lea     edi, [ebp - 0x80]
        push    dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 8], ebx
        push    dword ptr [ebp + 0xc]
        call    FUN_1004558d
        mov     esi, eax
        add     esp, 0x14
        cmp     esi, ebx
        jnz     L_3918
        call    dword ptr [g_100490e4]
        cmp     eax, 0x7a
        jnz     L_3934
        push    ebx
        push    ebx
        push    ebx
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        call    FUN_1004558d
        mov     esi, eax
        add     esp, 0x14
        cmp     esi, ebx
        jz      L_3934
        push    esi
        call    FUN_1003c3c5
        mov     edi, eax
        pop     ecx
        cmp     edi, ebx
        jz      L_3934
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp + 8], 1
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        call    FUN_1004558d
        mov     esi, eax
        add     esp, 0x14
        cmp     esi, ebx
        jz      L_392d
    L_3918:
        push    esi
        call    FUN_1003c3c5
        pop     ecx
        cmp     eax, ebx
        mov     ecx, dword ptr [ebp + 0x14]
        mov     dword ptr [ecx], eax
        jnz     L_393c
        cmp     dword ptr [ebp + 8], ebx
        jz      L_3934
    L_392d:
        push    edi
        call    FUN_1003c2dc
        pop     ecx
    L_3934:
        or      eax, 0xffffffff
    L_3937:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    L_393c:
        push    esi
        push    edi
        push    eax
        call    FUN_10037f30
        add     esp, 0xc
        cmp     dword ptr [ebp + 8], ebx
        jz      L_39c0
        push    edi
        call    FUN_1003c2dc
        pop     ecx
        jmp     L_39c0
    L_3955:
        cmp     dword ptr [ebp + 8], 0
        jnz     L_3934
        push    0
        mov     esi, offset g_10075740
        push    4
        push    esi
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        call    FUN_1004547a
        add     esp, 0x14
        test    eax, eax
        jz      L_3934
        mov     edi, dword ptr [ebp + 0x14]
        and     byte ptr [edi], 0
    L_397d:
        cmp     dword ptr [g_10051b90], 1
        mov     bl, byte ptr [esi]
        jle     L_3997
        movzx   eax, bl
        push    4
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_39a6
    L_3997:
        mov     ecx, dword ptr [g_10051984]
        movzx   eax, bl
        mov     al, byte ptr [ecx + eax*2]
        and     eax, 4
    L_39a6:
        test    eax, eax
        jz      L_39c0
        mov     al, byte ptr [edi]
        mov     cl, 0xa
        imul    cl
        add     al, bl
        sub     al, 0x30
        inc     esi
        inc     esi
        mov     byte ptr [edi], al
        cmp     esi, offset g_10075748
        jl      L_397d
    L_39c0:
        xor     eax, eax
        jmp     L_3937
    }
}
