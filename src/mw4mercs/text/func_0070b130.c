/*
 * FUN_0070b130 (263 B) — __cdecl. gosScript EndScene helper: if a flag and
 * a surface are set, calls FUN_0074a2c0, bumps a counter, and conditionally
 * queries a surface; else clears a "dirty" flag. Then asserts that no
 * vertex buffer is locked and no states are pushed at EndScene.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0087c5b0;             /* DAT_0087c5b0 (byte) */
extern int  g_0085a248;             /* DAT_0085a248 */
extern char g_0087dd0a;             /* DAT_0087dd0a (byte) */
extern int  g_00859ba0;             /* DAT_00859ba0 */
extern int  g_007b73e8;             /* DAT_007b73e8 */
extern char g_0085a1f9;             /* DAT_0085a1f9 (byte) */
extern int  g_0085a214;             /* DAT_0085a214 */
extern int  g_008aae58;             /* DAT_008aae58 */
extern int  g_008b7a18;             /* DAT_008b7a18 */
extern int  g_00858ac0;             /* DAT_00858ac0 */
extern int  g_0087bc84;             /* DAT_0087bc84 */

extern void __cdecl FUN_0074a2c0(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0070b130(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        mov     al, byte ptr [g_0087c5b0]
        test    al, al
        jz      LB1C8
        mov     eax, dword ptr [g_0085a248]
        test    eax, eax
        jz      LB1C8
        push    eax
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_0074a2c0
        mov     ecx, dword ptr [g_00859ba0]
        mov     eax, dword ptr [g_007b73e8]
        inc     ecx
        test    eax, eax
        mov     byte ptr [g_0087dd0a], 0x0
        mov     byte ptr [g_0087c5b0], 0x0
        mov     byte ptr [g_0085a1f9], 0x1
        mov     dword ptr [g_00859ba0], ecx
        jnz     LB1EB
        mov     al, cl
        test    al, 0x1
        jz      LB1EB
        mov     ecx, dword ptr [g_0085a214]
        push    0x0
        push    0x1
        lea     eax, [ebp - 0x80]
        push    eax
        push    0x0
        push    ecx
        mov     dword ptr [ebp - 0x80], 0x7c
        call    FUN_007353f0
        mov     edx, dword ptr [ebp - 0x5c]
        mov     al, byte ptr [edx]
        mov     byte ptr [ebp - 0x1], al
        mov     cl, byte ptr [ebp - 0x1]
        mov     byte ptr [ebp - 0x1], cl
        mov     edx, dword ptr [g_0085a214]
        push    0x0
        push    edx
        call    FUN_00735440
        jmp     LB1EB
LB1C8:
        mov     eax, dword ptr [g_008aae58]
        test    eax, eax
        jz      LB1E4
        mov     dword ptr [g_008aae58], 0x0
        mov     byte ptr [g_0085a1f9], 0x1
        jmp     LB1EB
LB1E4:
        mov     byte ptr [g_0085a1f9], 0x0
LB1EB:
        mov     eax, dword ptr [g_008b7a18]
        test    eax, eax
        jz      LB20F
        mov     eax, dword ptr [g_00858ac0]
        test    eax, eax
        jnz     LB20F
        push    0x7a1720
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LB20F
        int     3
LB20F:
        mov     eax, dword ptr [g_0087bc84]
        test    eax, eax
        jz      LB233
        mov     eax, dword ptr [g_00858ac0]
        test    eax, eax
        jnz     LB233
        push    0x7a16f8
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LB233
        int     3
LB233:
        mov     esp, ebp
        pop     ebp
        ret
    }
}
