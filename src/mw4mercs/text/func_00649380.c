/*
 * FUN_00649380 (446 B) — __cdecl, RET (no args).
 *
 * Parses a floating-point literal from a character stream (via
 * FUN_006492e0 / FUN_00648fe0), handling '.', 'E'/'e' exponent and
 * sign, computing the value with _ftol / _CIpow, and storing the
 * result into globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058f8;
extern char g_8058fc;
extern int g_8058ac;
extern int g_8050a0;
extern char g_8058b0;
extern int g_7b5a20;
extern int g_8050a4;
extern int g_8050a8;
extern double g_785970;
extern void __stdcall FUN_006492e0(void *a, int b);
extern void __stdcall FUN_00648fe0(void);
extern long __stdcall FUN_0075db4a(void);
extern double __stdcall FUN_0075db86(void);
extern void __stdcall FUN_00562f40(int a);

__declspec(naked) void __stdcall FUN_00649380(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        xor     ebp, ebp
        push    edi
        lea     eax, [esp + 0xc]
        push    0x5
        push    eax
        mov     dword ptr [esp + 0x1c], ebp
        mov     bl, 0x2b
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [g_8058f8], ebp
        mov     byte ptr [g_8058fc], 0x0
        mov     dword ptr [g_8058ac], ebp
        mov     dword ptr [g_8050a0], ebp
        call    FUN_006492e0
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x8
        cmp     eax, 0x19
        jz      L_537
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x2e
        mov     edi, dword ptr [g_8058f8]
        jnz     L_427
        call    FUN_00648fe0
        mov     eax, dword ptr [g_7b5a20]
        mov     byte ptr [eax], 0x2e
        lea     ecx, [esp + 0xc]
        inc     eax
        push    0x6
        push    ecx
        mov     dword ptr [g_8050a0], 0x1
        mov     dword ptr [g_7b5a20], eax
        call    FUN_006492e0
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x8
        cmp     eax, 0x19
        jz      L_537
        mov     eax, dword ptr [g_8058f8]
        mov     edx, edi
        sub     edx, eax
        mov     al, byte ptr [g_8058b0]
        mov     dword ptr [esp + 0x14], edx
    L_427:
        cmp     al, 0x45
        jz      L_42f
        cmp     al, 0x65
        jnz     L_48c
    L_42f:
        mov     ecx, dword ptr [g_7b5a20]
        mov     byte ptr [ecx], al
        inc     ecx
        cmp     al, 0x2b
        mov     dword ptr [g_8050a0], 0x1
        mov     dword ptr [g_7b5a20], ecx
        jz      L_450
        cmp     al, 0x2d
        jnz     L_460
    L_450:
        mov     bl, al
        mov     byte ptr [ecx], bl
        inc     ecx
        mov     dword ptr [g_7b5a20], ecx
        call    FUN_00648fe0
    L_460:
        lea     eax, [esp + 0x10]
        push    0x7
        push    eax
        call    FUN_006492e0
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x8
        cmp     eax, 0x19
        jz      L_537
        cmp     bl, 0x2d
        jnz     L_48c
        fld     dword ptr [esp + 0x10]
        fchs
        fstp    dword ptr [esp + 0x10]
    L_48c:
        mov     al, byte ptr [g_8058fc]
        test    al, al
        jz      L_49c
        push    0x8
        jmp     L_525
    L_49c:
        fild    dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x10]
        call    FUN_0075db4a
        lea     ecx, [eax + edi*0x1]
        cmp     ecx, -0x14
        mov     dword ptr [esp + 0x14], eax
        jl      L_523
        cmp     ecx, 0x14
        jg      L_523
        cmp     eax, ebp
        jz      L_4d5
        fld     qword ptr [g_785970]
        fild    dword ptr [esp + 0x14]
        call    FUN_0075db86
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
    L_4d5:
        cmp     dword ptr [g_8050a0], ebp
        jnz     L_4ff
        fld     dword ptr [esp + 0xc]
        call    FUN_0075db4a
        cmp     eax, 0x80000001
        jl      L_4fb
        cmp     eax, 0x7fffffff
        jg      L_4fb
        mov     dword ptr [g_8050a4], eax
        jmp     L_509
    L_4fb:
        push    0xa
        jmp     L_525
    L_4ff:
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [g_8050a8], ecx
    L_509:
        mov     edx, dword ptr [g_7b5a20]
        pop     edi
        pop     ebp
        mov     byte ptr [edx], 0x0
        mov     dword ptr [g_8058ac], 0x2
        pop     ebx
        add     esp, 0xc
        ret
    L_523:
        push    0x9
    L_525:
        call    FUN_00562f40
        add     esp, 0x4
        mov     dword ptr [g_8058ac], 0x19
    L_537:
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}
