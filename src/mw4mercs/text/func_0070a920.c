/*
 * FUN_0070a920 (561 B) — __cdecl. gosScript display-resolution setup:
 * picks a resolution from DAT_007b73dc (0x200/0x320/0x400/0x500/0x640 or
 * default 0x280x0x1e0), sets the window size, calls FUN_0070b430, and
 * adjusts the window rect via GetWindowLongA/AdjustWindowRect/SetWindowPos.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008aaec8;             /* DAT_008aaec8 */
extern char g_00858956;             /* DAT_00858956 (byte) */
extern int  g_008aaecc;             /* DAT_008aaecc */
extern int  g_00858948;             /* DAT_00858948 */
extern int  g_007b73dc;             /* DAT_007b73dc */
extern char g_0085a1de;             /* DAT_0085a1de (byte) */
extern char g_00858958;             /* DAT_00858958 (byte) */
extern int  g_00858940;             /* DAT_00858940 */
extern int  g_0085a0d4;             /* DAT_0085a0d4 */
extern int  g_00858944;             /* DAT_00858944 */
extern int  g_0085a0d0;             /* DAT_0085a0d0 */
extern int  g_008aaed4;             /* DAT_008aaed4 */
extern int  g_00858950;             /* DAT_00858950 */
extern int  g_008aaedc;             /* DAT_008aaedc */
extern int  g_008aaed8;             /* DAT_008aaed8 */
extern int  g_0085a1e0;             /* DAT_0085a1e0 */
extern int  g_008aaee0;             /* DAT_008aaee0 */
extern char g_00858957;             /* DAT_00858957 (byte) */
extern int  g_00858ab0;             /* DAT_00858ab0 */
extern char g_0085a208;             /* DAT_0085a208 (byte) */
extern int  g_00858ba0;             /* DAT_00858ba0 */
extern char g_00858954;             /* DAT_00858954 (byte) */
extern char g_0085a0c4;             /* DAT_0085a0c4 (byte) */
extern int  g_00858bf8;             /* DAT_00858bf8 (hwnd) */
extern int  g_0085a1ec;             /* DAT_0085a1ec */
extern int  g_0085a1e8;             /* DAT_0085a1e8 */
extern int  g_00858ac0;             /* DAT_00858ac0 */

extern void __cdecl FUN_007333e0(void);
extern void __cdecl FUN_0073a250(void);
extern void __cdecl FUN_0070b430(void);
extern void __cdecl FUN_0070c540(void);
extern void __cdecl FUN_0073a2e0(void);
extern void __cdecl FUN_007333b0(void);

extern int (*g_0076b4a0)(void);     /* IAT: GetWindowLongA */
extern int (*g_0076b4dc)(void);     /* IAT: AdjustWindowRect */
extern int (*g_0076b4a4)(void);     /* IAT: SetWindowPos */

__declspec(naked) void FUN_0070a920(void)
{
    __asm {
        sub     esp, 0x10
        push    esi
        call    FUN_007333e0
        call    FUN_0073a250
        mov     ecx, dword ptr [g_008aaec8]
        xor     esi, esi
        cmp     ecx, esi
        setnz   al
        mov     byte ptr [g_00858956], al
        cmp     dword ptr [g_008aaecc], esi
        jz      LA952
        mov     dword ptr [g_00858948], 0x20
LA952:
        mov     eax, dword ptr [g_007b73dc]
        cmp     eax, esi
        mov     cl, byte ptr [g_0085a1de]
        mov     byte ptr [g_00858958], cl
        jz      LAA19
        mov     ecx, 0x400
        cmp     eax, ecx
        ja      LA9C4
        jz      LA9B1
        mov     ecx, 0x200
        cmp     eax, ecx
        jz      LA99E
        mov     ecx, 0x320
        cmp     eax, ecx
        jnz     LA9D6
        mov     dword ptr [g_00858940], ecx
        mov     dword ptr [g_0085a0d4], ecx
        mov     eax, 0x258
        jmp     LAA2D
LA99E:
        mov     dword ptr [g_00858940], ecx
        mov     dword ptr [g_0085a0d4], ecx
        mov     eax, 0x180
        jmp     LAA2D
LA9B1:
        mov     dword ptr [g_00858940], ecx
        mov     dword ptr [g_0085a0d4], ecx
        mov     eax, 0x300
        jmp     LAA2D
LA9C4:
        mov     edx, 0x500
        cmp     eax, edx
        jz      LA9FF
        mov     ecx, 0x640
        cmp     eax, ecx
        jz      LA9EC
LA9D6:
        mov     eax, 0x280
        mov     dword ptr [g_00858940], eax
        mov     dword ptr [g_0085a0d4], eax
        mov     eax, 0x1e0
        jmp     LAA2D
LA9EC:
        mov     dword ptr [g_00858940], ecx
        mov     dword ptr [g_0085a0d4], ecx
        mov     eax, 0x4b0
        jmp     LAA2D
LA9FF:
        mov     dword ptr [g_00858940], edx
        mov     dword ptr [g_0085a0d4], edx
        mov     dword ptr [g_00858944], ecx
        mov     dword ptr [g_0085a0d0], ecx
        jmp     LAA37
LAA19:
        mov     eax, dword ptr [g_0085a1ec]
        mov     dword ptr [g_00858940], eax
        mov     dword ptr [g_0085a0d4], eax
        mov     eax, dword ptr [g_0085a1e8]
LAA2D:
        mov     dword ptr [g_00858944], eax
        mov     dword ptr [g_0085a0d0], eax
LAA37:
        cmp     dword ptr [g_008aaed4], esi
        jz      LAA4B
        mov     dword ptr [g_00858950], 0x3
        jmp     LAA7B
LAA4B:
        cmp     dword ptr [g_008aaedc], esi
        jz      LAA5B
        mov     dword ptr [g_00858950], esi
        jmp     LAA7B
LAA5B:
        cmp     dword ptr [g_008aaed8], esi
        jz      LAA6F
        mov     dword ptr [g_00858950], 0x1
        jmp     LAA7B
LAA6F:
        mov     edx, dword ptr [g_0085a1e0]
        mov     dword ptr [g_00858950], edx
LAA7B:
        cmp     dword ptr [g_008aaee0], esi
        setnz   al
        mov     byte ptr [g_00858957], al
        mov     dword ptr [g_00858ab0], esi
        mov     byte ptr [g_0085a208], 0x1
        call    FUN_0070b430
        mov     eax, dword ptr [g_00858ba0]
        cmp     eax, 0x10
        mov     byte ptr [g_0085a208], 0x0
        mov     byte ptr [g_00858954], 0x0
        mov     byte ptr [g_0085a0c4], 0x0
        jz      LAABF
        cmp     eax, 0x20
        jnz     LAAC4
LAABF:
        mov     dword ptr [g_00858948], eax
LAAC4:
        mov     eax, dword ptr [g_00858bf8]
        mov     ecx, dword ptr [g_00858940]
        mov     edx, dword ptr [g_00858944]
        push    esi
        push    -0x10
        push    eax
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        call    dword ptr [g_0076b4a0]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        call    dword ptr [g_0076b4dc]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        sub     eax, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    0x72
        sub     ecx, edx
        mov     edx, dword ptr [g_00858bf8]
        push    ecx
        push    eax
        push    esi
        push    esi
        push    esi
        push    edx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], ecx
        call    dword ptr [g_0076b4a4]
        cmp     dword ptr [g_00858ac0], esi
        pop     esi
        jnz     LAB4D
        call    FUN_0070c540
        mov     dword ptr [g_00858ab0], 0x1
        call    FUN_0073a2e0
        call    FUN_007333b0
LAB4D:
        add     esp, 0x10
        ret
    }
}
