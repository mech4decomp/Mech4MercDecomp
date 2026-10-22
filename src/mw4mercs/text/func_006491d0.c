/*
 * FUN_006491d0 (266 B) — Tokenizer/parser driver. Consumes characters
 * from a global input buffer, appending them to an output buffer until a
 * delimiter is reached, then processes the token.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008058b0;
extern int g_7f2d38;
extern int *g_007b5a20;
extern char g_008058f4;
extern int g_0080d988;
extern int g_7b58f0;
extern int g_008058ac;

extern void __cdecl FUN_00648fe0(void);
extern void __cdecl FUN_006490e0(void);
extern void __cdecl FUN_00648640(void);

__declspec(naked) void __cdecl FUN_006491d0(void)
{
    __asm {
L_top:
        mov     cl, byte ptr [g_008058b0]
        movsx   eax, cl
        mov     eax, dword ptr [g_7f2d38 + eax*4]
        test    eax, eax
        jz      L_ee
        cmp     eax, 1
        jz      L_ee
        cmp     cl, 0x5f
        jnz     L_02
L_ee:
        mov     eax, dword ptr [g_007b5a20]
        mov     byte ptr [eax], cl
        inc     eax
        mov     dword ptr [g_007b5a20], eax
        call    FUN_00648fe0
        jmp     L_top
L_02:
        mov     ecx, dword ptr [g_007b5a20]
        mov     byte ptr [ecx], 0
        call    FUN_006490e0
        mov     al, byte ptr [g_008058f4]
        test    al, al
        jz      L_20
        mov     eax, 0x42
        jmp     L_30
L_20:
        mov     edx, dword ptr [g_0080d988]
        xor     eax, eax
        test    edx, edx
        setnz   al
        add     eax, 0x28
L_30:
        cmp     byte ptr [g_008058b0], 0x2e
        jnz     L_c6
        push    ebx
        push    esi
        mov     esi, dword ptr [g_7b58f0 + eax*4]
        mov     eax, 0x7f3254
L_4b:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_73
        test    cl, cl
        jz      L_6f
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_73
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_4b
L_6f:
        xor     eax, eax
        jmp     L_78
L_73:
        sbb     eax, eax
        sbb     eax, -1
L_78:
        test    eax, eax
        pop     esi
        pop     ebx
        jz      L_c6
        mov     eax, dword ptr [g_007b5a20]
        mov     byte ptr [eax], 0x2e
L_86:
        inc     eax
        mov     dword ptr [g_007b5a20], eax
        call    FUN_00648fe0
        mov     cl, byte ptr [g_008058b0]
        movsx   eax, cl
        mov     eax, dword ptr [g_7f2d38 + eax*4]
        test    eax, eax
        jz      L_af
        cmp     eax, 1
        jz      L_af
        cmp     cl, 0x5f
        jnz     L_b8
L_af:
        mov     eax, dword ptr [g_007b5a20]
        mov     byte ptr [eax], cl
        jmp     L_86
L_b8:
        mov     ecx, dword ptr [g_007b5a20]
        mov     byte ptr [ecx], 0
        call    FUN_006490e0
L_c6:
        call    FUN_00648640
        test    eax, eax
        jnz     L_d9
        mov     dword ptr [g_008058ac], 1
L_d9:
        ret
    }
}
