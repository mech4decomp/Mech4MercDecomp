/*
 * FUN_00649e60 (68 B) — Appends a byte to a buffer if space remains;
 * otherwise reports an ABL syntax error via FUN_006fab90 and traps.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7b5a2f;      /* 0x007b5a2f */
extern int  g_805954;      /* 0x00805954 */
extern int  g_805910;      /* 0x00805910 */
extern int  g_805914;      /* 0x00805914 */
extern char g_8058ac;      /* 0x008058ac */

extern int __cdecl FUN_006fab90(char *fmt, int arg);

__declspec(naked) void __cdecl FUN_00649e60(void)
{
    __asm {
        mov     al, byte ptr [g_7b5a2f]
        test    al, al
        jz      L_ret
        mov     eax, dword ptr [g_805954]
        mov     ecx, dword ptr [g_805910]
        lea     edx, [eax + ecx*0x1 + -0x64]
        mov     eax, dword ptr [g_805914]
        cmp     eax, edx
        jc      L_store
        push    0x12
        push    0x7929f4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_ret
        int     3
        ret             /* dead code after INT3, present in binary */
L_store:
        mov     cl, byte ptr [g_8058ac]
        mov     byte ptr [eax], cl
        inc     eax
        mov     dword ptr [g_805914], eax
L_ret:
        ret
    }
}
