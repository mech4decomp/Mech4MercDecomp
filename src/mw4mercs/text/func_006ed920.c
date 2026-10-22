/*
 * FUN_006ed920 (852 B) — Dialog control handler (resolution/display settings).
 * Reads the current selection from a combo box (GetDlgItem/SendMessageA),
 * validates it against a table, and updates several controls + a per-mode
 * string list. Uses the log/FLT subsystem helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00841d88;          /* 0x00841d88 (dword array) */
extern int g_00841ce8;          /* 0x00841ce8 (dword array) */
extern int g_007b6a48;          /* 0x007b6a48 */
extern int g_007b6a4c;          /* 0x007b6a4c */
extern int g_00848ca8;          /* 0x00848ca8 */
extern int g_00841768;          /* 0x00841768 */
extern int g_00841760;          /* 0x00841760 */
extern int g_007dd268;          /* 0x007dd268 (pointer to struct) */

extern int g_00841ec8[];        /* 0x00841ec8 (stosd target) */
extern int g_00842710[];        /* 0x00842710 (stosd target) */
extern int g_00842310[];        /* 0x00842310 (stosd target) */
extern int g_00842b10[];        /* 0x00842b10 (stosd target) */

extern void *g_76b5a4;          /* IAT: GetDlgItem */
extern void *g_76b560;          /* IAT: SendMessageA */
extern void *g_76b544;          /* IAT: EnableWindow */

extern void __cdecl FUN_00512ff0(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_006e4210(void);
extern void __cdecl FUN_00523c50(void);
extern void __cdecl FUN_00512510(void);
extern void __cdecl FUN_00518bf0(void);
extern void __cdecl FUN_00522f40(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006edc80(void);

__declspec(naked) void FUN_006ed920(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
        mov     esi, dword ptr [g_76b5a4]
        push    edi
        push    0
        push    0
        push    0x147
        push    0x412
        push    ebp
        call    esi
        push    eax
        call    dword ptr [g_76b560]
        mov     ebx, eax
        cmp     ebx, -1
        jz      Ldc6c
        mov     eax, dword ptr [ebx*4 + g_00841d88]
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x1c], ecx
        cmp     dword ptr [g_007b6a48], eax
        lea     edx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x20], edx
        jz      Ldc6c
        lea     eax, [esp + 0x1c]
        push    eax
        push    1
        mov     edi, 0x21
        push    0
        mov     byte ptr [esp + 0x34], 0
        mov     dword ptr [esp + 0x20], edi
        call    FUN_00512ff0
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, eax
        jnz     Ld9a4
        mov     byte ptr [esp + 0x28], 1
Ld9a4:
        mov     eax, dword ptr [g_00848ca8]
        test    eax, eax
        jz      Lda84
        test    ecx, ecx
        jz      Lda84
        cmp     ecx, 1
        jz      Lda84
        cmp     ecx, 2
        jz      Lda84
        cmp     ecx, 3
        jz      Lda84
        cmp     ecx, 6
        jz      Lda84
        cmp     ecx, 7
        jz      Lda84
        cmp     ecx, 8
        jz      Lda84
        cmp     ecx, 9
        jz      Lda84
        cmp     ecx, 0xc
        jz      Lda84
        mov     ecx, dword ptr [g_00841768]
        push    4
        push    0x54e
        push    ecx
        call    FUN_0072d830
        mov     edx, dword ptr [g_00841768]
        push    eax
        push    0xc9a
        push    edx
        call    FUN_0072d830
        push    eax
        call    FUN_006e4210
        add     esp, 0xc
        cmp     eax, 6
        jnz     Ldae8
        push    0
        push    0
        push    0
        call    FUN_00523c50
        xor     eax, eax
        mov     ecx, 0xff
        mov     edi, offset g_00841ec8
        rep     stosd
        mov     ecx, 0xff
        mov     edi, offset g_00842710
        rep     stosd
        or      eax, 0xffffffff
        mov     ecx, 0xff
        mov     edi, offset g_00842310
        rep     stosd
        mov     ecx, 0xff
        or      eax, 0xffffffff
        mov     edi, offset g_00842b10
        rep     stosd
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, 0x21
Lda84:
        mov     eax, dword ptr [ebx*4 + g_00841d88]
        mov     dword ptr [g_007b6a48], ecx
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    2
        push    0
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00512510
        push    0
        push    0
        push    0
        call    FUN_00518bf0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, 4
        jz      Ldb3a
        cmp     eax, 0xa
        jz      Ldb3a
        mov     edx, dword ptr [g_00841760]
        push    1
        push    0x417
        push    edx
        call    esi
        mov     edi, dword ptr [g_76b544]
        push    eax
        call    edi
        mov     eax, dword ptr [g_00841760]
        push    1
        push    0x4dc
        push    eax
        jmp     Ldb61
Ldae8:
        lea     eax, [esp + 0x1c]
        push    eax
        push    1
        push    0
        mov     dword ptr [esp + 0x20], edi
        call    FUN_00512ff0
        push    0
        mov     edi, eax
        mov     ecx, dword ptr [edi*4 + g_00841ce8]
        push    ecx
        push    0x14e
        push    0x412
        push    ebp
        call    esi
        push    eax
        call    dword ptr [g_76b560]
        lea     edx, [esp + 0x1c]
        push    edx
        push    1
        push    0
        mov     dword ptr [g_007b6a48], edi
        mov     dword ptr [esp + 0x20], edi
        call    FUN_00522f40
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
Ldb3a:
        mov     ecx, dword ptr [g_00841760]
        push    0
        push    0x417
        push    ecx
        call    esi
        mov     edi, dword ptr [g_76b544]
        push    eax
        call    edi
        mov     edx, dword ptr [g_00841760]
        push    0
        push    0x4dc
        push    edx
Ldb61:
        call    esi
        push    eax
        call    edi
        mov     eax, dword ptr [ebx*4 + g_00841d88]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    1
        push    0
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00522f40
        push    0
        push    0
        push    0x14b
        push    0x413
        push    ebp
        call    esi
        push    eax
        call    dword ptr [g_76b560]
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x4c]
        xor     edi, edi
        test    ecx, ecx
        jle     Ldc00
        xor     ebx, ebx
Ldba7:
        lea     edx, [ebx + eax + 0x1e0]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    edi
        push    0x14a
        push    0x413
        push    ebp
        call    esi
        push    eax
        call    dword ptr [g_76b560]
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      Ldbed
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     Ldbed
        push    eax
        call    FUN_004084e0
        add     esp, 4
Ldbed:
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x4c]
        inc     edi
        add     ebx, 0x201
        cmp     edi, ecx
        jl      Ldba7
Ldc00:
        mov     al, byte ptr [esp + 0x28]
        test    al, al
        push    0
        jz      Ldc13
        mov     ecx, dword ptr [g_007b6a4c]
        push    ecx
        jmp     Ldc15
Ldc13:
        push    0
Ldc15:
        push    0x14e
        push    0x413
        push    ebp
        call    esi
        push    eax
        call    dword ptr [g_76b560]
        mov     edx, dword ptr [g_007dd268]
        mov     eax, dword ptr [edx + 0x4c]
        push    eax
        push    0x413
        push    ebp
        call    esi
        mov     edi, dword ptr [g_76b544]
        push    eax
        call    edi
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx + 0x4c]
        push    edx
        push    0x40e
        push    ebp
        call    esi
        push    eax
        call    edi
        push    ebp
        mov     dword ptr [g_007b6a4c], 0xffffffff
        call    FUN_006edc80
        add     esp, 4
Ldc6c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
    }
}
