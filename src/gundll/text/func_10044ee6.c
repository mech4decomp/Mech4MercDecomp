/*
 * FUN_10044ee6 (647 B) — __stdcall, RET.
 * Time-zone / offset-string parser. Reads a "TZ" string from the registry
 * (FUN_10045cb6) and parses it into the global offset fields 0x10054c40/44/48.
 * Falls back to GetTimeZoneInformation when no TZ string is present.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10045cb6(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_1003eb10(void);
extern void __cdecl FUN_1003c2dc(void);
extern void __cdecl FUN_1003c5f0(void);
extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_1003c500(void);
extern void __cdecl FUN_10037f30(void);
extern void __cdecl FUN_100379be(void);

extern void *g_10049188;            /* IAT: GetTimeZoneInformation */

extern unsigned int g_10054ce8;
extern unsigned int g_10054cd8;
extern unsigned int g_10075750;
extern unsigned int g_10075758;
extern unsigned int g_100757ac;
extern unsigned short g_1007579e;
extern unsigned int g_10054c40;
extern unsigned short g_100757f2;
extern unsigned int g_10075800;
extern unsigned int g_10054c44;
extern unsigned int g_10054c48;
extern unsigned int g_100490fc;     /* function pointer (WideCharToMultiByte) */
extern unsigned int g_10054ccc;
extern unsigned int g_1007568c;
extern unsigned int g_10054cd0;
extern unsigned int g_10075804;

__declspec(naked) void __stdcall FUN_10044ee6(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    ebx
        push    esi
        push    edi
        push    0xc
        pop     edi
        xor     ebx, ebx
        push    edi
        mov     dword ptr [ebp - 0x8], ebx
        call    FUN_10039b19
        or      dword ptr [g_10054ce8], 0xffffffff
        or      dword ptr [g_10054cd8], 0xffffffff
        mov     dword ptr [g_10075750], ebx
        mov     dword ptr [esp], 0x1004c0dc
        call    FUN_10045cb6
        mov     esi, eax
        pop     ecx
        cmp     esi, ebx
        jnz     L_45024
        push    edi
        call    FUN_10039b7a
        mov     dword ptr [esp], 0x10075758
        call    dword ptr [g_10049188]
        cmp     eax, -1
        jz      L_45168
        mov     eax, dword ptr [g_10075758]
        mov     ecx, dword ptr [g_100757ac]
        imul    eax, eax, 0x3c
        cmp     word ptr [g_1007579e], bx
        push    1
        pop     edx
        mov     dword ptr [g_10054c40], eax
        mov     dword ptr [g_10075750], edx
        jz      L_44f74
        mov     esi, ecx
        imul    esi, esi, 0x3c
        add     eax, esi
        mov     dword ptr [g_10054c40], eax
    L_44f74:
        cmp     word ptr [g_100757f2], bx
        jz      L_44f98
        mov     eax, dword ptr [g_10075800]
        cmp     eax, ebx
        jz      L_44f98
        sub     eax, ecx
        mov     dword ptr [g_10054c44], edx
        imul    eax, eax, 0x3c
        mov     dword ptr [g_10054c48], eax
        jmp     L_44fa4
    L_44f98:
        mov     dword ptr [g_10054c44], ebx
        mov     dword ptr [g_10054c48], ebx
    L_44fa4:
        lea     eax, [ebp - 0x4]
        mov     esi, dword ptr [g_100490fc]
        push    eax
        push    ebx
        push    0x3f
        mov     edi, 0x220
        push    dword ptr [g_10054ccc]
        push    -1
        push    0x1007575c
        push    edi
        push    dword ptr [g_1007568c]
        call    esi
        test    eax, eax
        jz      L_44fe0
        cmp     dword ptr [ebp - 0x4], ebx
        jnz     L_44fe0
        mov     eax, dword ptr [g_10054ccc]
        and     byte ptr [eax + 0x3f], 0
        jmp     L_44fe8
    L_44fe0:
        mov     eax, dword ptr [g_10054ccc]
        and     byte ptr [eax], 0
    L_44fe8:
        lea     eax, [ebp - 0x4]
        push    eax
        push    ebx
        push    0x3f
        push    dword ptr [g_10054cd0]
        push    -1
        push    0x100757b0
        push    edi
        push    dword ptr [g_1007568c]
        call    esi
        test    eax, eax
        jz      L_45157
        cmp     dword ptr [ebp - 0x4], ebx
        jnz     L_45157
        mov     eax, dword ptr [g_10054cd0]
        and     byte ptr [eax + 0x3f], 0
        jmp     L_45168
    L_45024:
        cmp     byte ptr [esi], 0
        jz      L_45161
        mov     eax, dword ptr [g_10075804]
        cmp     eax, ebx
        jz      L_45047
        push    eax
        push    esi
        call    FUN_1003eb10
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_45161
    L_45047:
        push    dword ptr [g_10075804]
        call    FUN_1003c2dc
        push    esi
        call    FUN_1003c5f0
        inc     eax
        push    eax
        call    FUN_1003c3c5
        add     esp, 0xc
        cmp     eax, ebx
        mov     dword ptr [g_10075804], eax
        jz      L_45161
        push    esi
        push    eax
        call    FUN_1003c500
        push    edi
        call    FUN_10039b7a
        push    3
        push    esi
        push    dword ptr [g_10054ccc]
        call    FUN_10037f30
        mov     eax, dword ptr [g_10054ccc]
        add     esi, 3
        add     esp, 0x18
        and     byte ptr [eax + 3], 0
        cmp     byte ptr [esi], 0x2d
        jnz     L_450a6
        mov     dword ptr [ebp - 0x8], 1
        inc     esi
    L_450a6:
        push    esi
        call    FUN_100379be
        pop     ecx
        mov     bl, 0x30
        mov     ecx, eax
        imul    ecx, ecx, 0xe10
        mov     dword ptr [g_10054c40], ecx
    L_450bd:
        mov     al, byte ptr [esi]
        cmp     al, 0x2b
        jz      L_450cb
        cmp     al, bl
        jl      L_450ce
        cmp     al, 0x39
        jg      L_450ce
    L_450cb:
        inc     esi
        jmp     L_450bd
    L_450ce:
        cmp     byte ptr [esi], 0x3a
        jnz     L_45121
        inc     esi
        push    esi
        call    FUN_100379be
        imul    eax, eax, 0x3c
        pop     ecx
        mov     ecx, dword ptr [g_10054c40]
        add     ecx, eax
        mov     dword ptr [g_10054c40], ecx
    L_450ec:
        mov     al, byte ptr [esi]
        cmp     al, bl
        jl      L_450f9
        cmp     al, 0x39
        jg      L_450f9
        inc     esi
        jmp     L_450ec
    L_450f9:
        cmp     byte ptr [esi], 0x3a
        jnz     L_45121
        inc     esi
        push    esi
        call    FUN_100379be
        pop     ecx
        mov     ecx, dword ptr [g_10054c40]
        add     ecx, eax
        mov     dword ptr [g_10054c40], ecx
    L_45114:
        mov     al, byte ptr [esi]
        cmp     al, bl
        jl      L_45121
        cmp     al, 0x39
        jg      L_45121
        inc     esi
        jmp     L_45114
    L_45121:
        cmp     dword ptr [ebp - 0x8], 0
        jz      L_4512f
        neg     ecx
        mov     dword ptr [g_10054c40], ecx
    L_4512f:
        movsx   eax, byte ptr [esi]
        test    eax, eax
        mov     dword ptr [g_10054c44], eax
        jz      L_45157
        push    3
        push    esi
        push    dword ptr [g_10054cd0]
        call    FUN_10037f30
        mov     eax, dword ptr [g_10054cd0]
        add     esp, 0xc
        and     byte ptr [eax + 3], 0
        jmp     L_45168
    L_45157:
        mov     eax, dword ptr [g_10054cd0]
        and     byte ptr [eax], 0
        jmp     L_45168
    L_45161:
        push    edi
        call    FUN_10039b7a
        pop     ecx
    L_45168:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
