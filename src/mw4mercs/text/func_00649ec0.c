/*
 * FUN_00649ec0 (71 B) — ABL syntax-error logging helper.
 *
 * If DAT_007b5a2f is set and the ring buffer (DAT_00805914) has room
 * (DAT_00805954 + DAT_00805910 - 100), store param_1 and advance the
 * write pointer. Otherwise call FUN_006fab90("ABL SyntaxError #%d", 0x12)
 * and INT3 on failure.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7b5a2f;              /* DAT_007b5a2f */
extern int g_805910;               /* DAT_00805910 */
extern int g_805954;               /* DAT_00805954 */
extern int g_805914;               /* DAT_00805914 */
extern int __cdecl FUN_006fab90(const char *fmt, ...);

__declspec(naked) void __cdecl FUN_00649ec0(int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_7b5a2f]
        test    al, al
        jz      L_f07
        mov     eax, dword ptr [g_805910]
        mov     ecx, dword ptr [g_805954]
        lea     edx, [ecx + eax*1 - 0x64]
        mov     eax, dword ptr [g_805914]
        cmp     eax, edx
        jc      L_fa
        push    0x12
        push    0x7929f4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_f07
        int     3
        pop     ebp
        ret
    L_fa:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [eax], ecx
        add     eax, 0x4
        mov     dword ptr [g_805914], eax
    L_f07:
        pop     ebp
        ret
    }
}
