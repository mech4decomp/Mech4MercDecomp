/*
 * FUN_00703440 (162 B) — Dispatcher that conditionally copies a 16-byte
 * global block or calls a helper, then forwards 6 args to FUN_00702f80.
 *
 * __stdcall, RET 0x1c (7 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0070e220(int a, int b);
extern void __stdcall FUN_0070e320(void *a, void *b);
extern void __stdcall FUN_0070e1b0(int a, int b, int c);
extern int __stdcall FUN_00702f80(void *p1, void *p2, void *p3, void *p4,
                                  void *p5, void *p7);

extern int g_85b4a0;      /* 0x0085b4a0 */
extern char g_87bc35;     /* 0x0087bc35 */
extern int g_7afaf0;      /* 0x007afaf0 */
extern int g_7afaf4;      /* 0x007afaf4 */
extern int g_7afaf8;      /* 0x007afaf8 */
extern int g_7afafc;      /* 0x007afafc */
extern int g_85b4b0;      /* 0x0085b4b0 */
extern int g_85b4b4;      /* 0x0085b4b4 */
extern int g_85b4b8;      /* 0x0085b4b8 */
extern int g_85b4bc;      /* 0x0085b4bc */

__declspec(naked) int __stdcall FUN_00703440(void *p1, void *p2, void *p3,
                                             void *p4, void *p5, void *p6,
                                             void *p7)
{
    __asm {
        mov     eax, dword ptr [g_85b4a0]
        push    esi
        xor     esi, esi
        cmp     eax, 0x1
        jnz     L_3467
        mov     al, byte ptr [g_87bc35]
        test    al, al
        jnz     L_34dc
        push    0xa
        push    0x8
        call    FUN_0070e220
        pop     esi
        ret     0x1c
    L_3467:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        mov     esi, dword ptr [esp + 0xc]
        jz      L_347c
        push    eax
        push    esi
        call    FUN_0070e320
        jmp     L_34a8
    L_347c:
        mov     eax, dword ptr [g_7afaf0]
        mov     ecx, dword ptr [g_7afaf4]
        mov     edx, dword ptr [g_7afaf8]
        mov     dword ptr [g_85b4b0], eax
        mov     eax, dword ptr [g_7afafc]
        mov     dword ptr [g_85b4b4], ecx
        mov     dword ptr [g_85b4b8], edx
        mov     dword ptr [g_85b4bc], eax
    L_34a8:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    esi
        push    edx
        call    FUN_00702f80
        mov     esi, eax
        mov     al, byte ptr [g_87bc35]
        test    al, al
        jnz     L_34dc
        push    0xa
        push    0x8
        push    esi
        call    FUN_0070e1b0
    L_34dc:
        mov     eax, esi
        pop     esi
        ret     0x1c
    }
}
