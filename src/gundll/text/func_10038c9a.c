/*
 * FUN_10038c9a (328 B) — __stdcall. Heap-selection / version detection.
 * CFLAGS: /O1
 */

extern int (__stdcall *g_10049114)(void);   /* GetVersionExA IAT */
extern int (__stdcall *g_10049110)(void);   /* GetEnvironmentVariableA IAT */
extern int (__stdcall *g_100491b8)(void);   /* GetModuleFileNameA IAT */
extern void __cdecl FUN_10037940(void);
extern void __cdecl FUN_1003d130(void);
extern void __cdecl FUN_1003d0b0(void);
extern void __cdecl FUN_1003cff0(void);
extern void __cdecl FUN_1003cda5(void);
extern void __cdecl FUN_10038c6d(void);

__declspec(naked) void __stdcall FUN_10038c9a(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, 0x122c
        call    FUN_10037940
        lea     eax, [ebp - 0x98]
        push    ebx
        push    eax
        mov     dword ptr [ebp - 0x98], 0x94
        call    dword ptr [g_10049114]
        test    eax, eax
        jz      Lcdd
        cmp     dword ptr [ebp - 0x88], 0x2
        jnz     Lcdd
        cmp     dword ptr [ebp - 0x94], 0x5
        jc      Lcdd
        push    0x1
        pop     eax
        jmp     Lddf
    Lcdd:
        lea     eax, [ebp - 0x122c]
        push    0x1090
        push    eax
        push    0x1004b340
        call    dword ptr [g_10049110]
        test    eax, eax
        jz      Ldcc
        xor     ebx, ebx
        lea     ecx, [ebp - 0x122c]
        cmp     byte ptr [ebp - 0x122c], bl
        jz      Ld1f
    Ld0c:
        mov     al, byte ptr [ecx]
        cmp     al, 0x61
        jl      Ld1a
        cmp     al, 0x7a
        jg      Ld1a
        sub     al, 0x20
        mov     byte ptr [ecx], al
    Ld1a:
        inc     ecx
        cmp     byte ptr [ecx], bl
        jnz     Ld0c
    Ld1f:
        lea     eax, [ebp - 0x122c]
        push    0x16
        push    eax
        push    0x1004b328
        call    FUN_1003d130
        add     esp, 0xc
        test    eax, eax
        jnz     Ld41
        lea     eax, [ebp - 0x122c]
        jmp     Ld8a
    Ld41:
        lea     eax, [ebp - 0x19c]
        push    0x104
        push    eax
        push    ebx
        call    dword ptr [g_100491b8]
        cmp     byte ptr [ebp - 0x19c], bl
        lea     ecx, [ebp - 0x19c]
        jz      Ld75
    Ld62:
        mov     al, byte ptr [ecx]
        cmp     al, 0x61
        jl      Ld70
        cmp     al, 0x7a
        jg      Ld70
        sub     al, 0x20
        mov     byte ptr [ecx], al
    Ld70:
        inc     ecx
        cmp     byte ptr [ecx], bl
        jnz     Ld62
    Ld75:
        lea     eax, [ebp - 0x19c]
        push    eax
        lea     eax, [ebp - 0x122c]
        push    eax
        call    FUN_1003d0b0
        pop     ecx
        pop     ecx
    Ld8a:
        cmp     eax, ebx
        jz      Ldcc
        push    0x2c
        push    eax
        call    FUN_1003cff0
        pop     ecx
        cmp     eax, ebx
        pop     ecx
        jz      Ldcc
        inc     eax
        mov     ecx, eax
        cmp     byte ptr [eax], bl
        jz      Ldb1
    Lda3:
        cmp     byte ptr [ecx], 0x3b
        jnz     Ldac
        mov     byte ptr [ecx], bl
        jmp     Ldad
    Ldac:
        inc     ecx
    Ldad:
        cmp     byte ptr [ecx], bl
        jnz     Lda3
    Ldb1:
        push    0xa
        push    ebx
        push    eax
        call    FUN_1003cda5
        add     esp, 0xc
        cmp     eax, 0x2
        jz      Lddf
        cmp     eax, 0x3
        jz      Lddf
        cmp     eax, 0x1
        jz      Lddf
    Ldcc:
        lea     eax, [ebp - 0x4]
        push    eax
        call    FUN_10038c6d
        cmp     byte ptr [ebp - 0x4], 0x6
        pop     ecx
        sbb     eax, eax
        add     eax, 0x3
    Lddf:
        pop     ebx
        leave
        ret
    }
}
