/*
 * FUN_0072bc40 (158 B) — __stdcall, RET 0xc (3 params).
 *
 * If DAT_00881a58 == 3, computes _mbstrlen(&DAT_00882464), calls
 * FUN_0072bce0(param_1), and sends a sequence of WM_CHAR messages
 * (0x100/0x102/0x101) via SendMessageA, then calls FUN_0072bbe0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_00881a58;   /* DAT_00881a58 */
extern char g_007b7121;   /* DAT_007b7121 */
extern void *g_0076b3c0;  /* _mbstrlen IAT */
extern void *g_0076b560;  /* SendMessageA IAT */

extern void __stdcall FUN_0072bce0(int a);
extern void __stdcall FUN_0072bbe0(int a, int b);

__declspec(naked) void __stdcall FUN_0072bc40(int param_1, char param_2, int param_3)
{
    __asm {
        cmp     dword ptr [g_00881a58], 0x3
        jnz     LDB
        push    ebp
        push    esi
        push    edi
        push    0x882464
        call    dword ptr [g_0076b3c0]
        mov     edi, dword ptr [esp + 0x14]
        add     esp, 0x4
        push    edi
        mov     esi, eax
        call    FUN_0072bce0
        mov     al, byte ptr [esp + 0x14]
        test    al, al
        jnz     L7B
        mov     al, byte ptr [g_007b7121]
        test    al, al
        jz      L7F
L7B:
        xor     ebp, ebp
        jmp     L83
L7F:
        mov     ebp, dword ptr [esp + 0x18]
L83:
        cmp     ebp, esi
        jge     LCE
        mov     eax, esi
        mov     esi, dword ptr [g_0076b560]
        sub     eax, ebp
        test    eax, eax
        jle     LB4
        push    ebx
        mov     ebx, eax
L98:
        push    0x0
        push    0x8
        push    0x100
        push    edi
        call    esi
        push    0x0
        push    0x8
        push    0x102
        push    edi
        call    esi
        dec     ebx
        jnz     L98
        pop     ebx
LB4:
        push    0x0
        push    0x8
        push    0x101
        push    edi
        call    esi
        push    ebp
        push    0x25
        call    FUN_0072bbe0
        pop     edi
        pop     esi
        pop     ebp
        ret     0xc
LCE:
        mov     ebp, esi
        push    ebp
        push    0x25
        call    FUN_0072bbe0
        pop     edi
        pop     esi
        pop     ebp
LDB:
        ret     0xc
    }
}
