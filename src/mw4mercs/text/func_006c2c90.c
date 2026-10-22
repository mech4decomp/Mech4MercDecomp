/*
 * FUN_006c2c90 (320 B) — Operator-token scanner. Reads the operator char at
 * DAT_0082f328, maps it through the char-class table at 0x6c2e10 into a
 * jump table at 0x6c2dd0, and returns an encoded operator token (low byte =
 * precedence, high byte = opcode). __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_0082f328;                 /* current token pointer */
extern char g_006c2e10;                  /* operator char-class table */
extern int g_006c2dd0;                   /* operator jump table */

extern void __cdecl FUN_006ccb40(void);

__declspec(naked) void FUN_006c2c90(void)
{
    __asm {
        mov     eax, dword ptr [g_0082f328]
        movsx   ecx, byte ptr [eax]
        inc     eax
        sub     ecx, 0x20
        cmp     ecx, 0x5c
        mov     dword ptr [g_0082f328], eax
        ja      L_2dc7
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_006c2e10]
        jmp     dword ptr [edx*4 + g_006c2dd0]
L_2cb9:
        jmp     FUN_006ccb40
L_2cbe:
        mov     eax, 0x150
        ret
L_2cc4:
        mov     eax, 0x250
        ret
L_2cca:
        mov     eax, 0x355
        ret
L_2cd0:
        mov     eax, 0x455
        ret
L_2cd6:
        mov     eax, 0x555
        ret
L_2cdc:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x3c
        jnz     L_2cef
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0x645
        ret
L_2cef:
        cmp     cl, 0x3e
        jnz     L_2d00
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0x735
        ret
L_2d00:
        cmp     cl, 0x3d
        jnz     L_2d11
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0x840
        ret
L_2d11:
        mov     eax, 0x940
        ret
L_2d17:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x3e
        jnz     L_2d2a
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0xa45
        ret
L_2d2a:
        cmp     cl, 0x3d
        jnz     L_2d3b
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0xb40
        ret
L_2d3b:
        mov     eax, 0xc40
        ret
L_2d41:
        cmp     byte ptr [eax], 0x3d
        jnz     L_2d4c
        inc     eax
        mov     dword ptr [g_0082f328], eax
L_2d4c:
        mov     eax, 0xd35
        ret
L_2d52:
        cmp     byte ptr [eax], 0x3d
        jnz     L_2dcd
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0x735
        ret
L_2d63:
        mov     eax, 0xe25
        ret
L_2d69:
        cmp     byte ptr [eax], 0x26
        jnz     L_2d7a
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0xf15
        ret
L_2d7a:
        mov     eax, 0x1030
        ret
L_2d80:
        cmp     byte ptr [eax], 0x7c
        jnz     L_2d91
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0x1110
        ret
L_2d91:
        mov     eax, 0x1220
        ret
L_2d97:
        cmp     byte ptr [eax], 0x6e
        jnz     L_2dc7
        cmp     byte ptr [eax + 0x1], 0x64
        jnz     L_2dc7
        cmp     byte ptr [eax + 0x2], 0x20
        jnz     L_2dc7
        add     eax, 0x3
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0xf15
        ret
L_2db6:
        cmp     byte ptr [eax], 0x72
        jnz     L_2dc7
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, 0x1110
        ret
L_2dc7:
        dec     eax
        mov     dword ptr [g_0082f328], eax
L_2dcd:
        xor     eax, eax
        ret
    }
}
