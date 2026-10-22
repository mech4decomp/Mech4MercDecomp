/*
 * FUN_00723360 (548 B) — Mouse-cursor / window setup routine. Initializes a
 * window, walks the parent chain, queries cursor position / window rect /
 * system metrics, and computes normalized cursor coordinates into globals.
 *
 * __cdecl, no params, RET (C3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_857f40;                          /* DAT_00857f40 */
extern unsigned int g_858bf8;                          /* DAT_00858bf8 (hWnd) */
extern void * (__stdcall *g_76b474)(void *);           /* GetParent IAT */
extern unsigned int g_857f44;                          /* DAT_00857f44 */
extern unsigned char g_85813a;                         /* DAT_0085813a */
extern unsigned char g_858139;                         /* DAT_00858139 */
extern unsigned char g_87dd51;                         /* DAT_0087dd51 */
extern unsigned int g_87dd40;                          /* DAT_0087dd40 */
extern int (__stdcall *g_76b470)(void *);              /* GetCursorPos IAT */
extern unsigned char g_858954;                         /* DAT_00858954 */
extern unsigned int g_87dd30;                          /* DAT_0087dd30 */
extern unsigned int g_87dd2c;                          /* DAT_0087dd2c */
extern int (__stdcall *g_76b56c)(void *, void *);      /* GetWindowRect IAT */
extern unsigned int g_858c10;                          /* DAT_00858c10 */
extern unsigned int g_858c14;                          /* DAT_00858c14 */
extern int (__stdcall *g_76b478)(int);                 /* GetSystemMetrics IAT */
extern unsigned char g_87dd50;                         /* DAT_0087dd50 */
extern unsigned int g_87dd3c;                          /* DAT_0087dd3c (float) */
extern unsigned int g_858940;                          /* DAT_00858940 */
extern unsigned int g_87dd38;                          /* DAT_0087dd38 (float) */
extern unsigned char g_858894;                         /* DAT_00858894 */
extern unsigned char g_87dd60;                         /* DAT_0087dd60 */
extern unsigned int g_858944;                          /* DAT_00858944 */

extern void __cdecl FUN_00755330(void);
extern void __cdecl FUN_007553d0(void);
extern void __cdecl FUN_007555e0(void);
extern void __cdecl FUN_00755380(void);

__declspec(naked) void __cdecl FUN_00723360(void)
{
    __asm {
        mov     eax, dword ptr [g_857f40]
        sub     esp, 0x4c
        push    ebx
        push    esi
        push    edi
        push    0x0
        push    0x857f44
        push    0x7a28d0
        push    0x7a29d0
        push    eax
        call    FUN_00755330
        mov     esi, dword ptr [g_858bf8]
        mov     edi, dword ptr [g_76b474]
        push    esi
        call    edi
        test    eax, eax
        jz      L_3a1
L_395:
        push    esi
        call    edi
        mov     esi, eax
        push    esi
        call    edi
        test    eax, eax
        jnz     L_395
L_3a1:
        mov     ecx, dword ptr [g_857f44]
        push    0x6
        push    esi
        push    ecx
        call    FUN_007553d0
        xor     eax, eax
        mov     ecx, 0xb
        lea     edi, [esp + 0x2c]
        rep     stosd
        mov     eax, dword ptr [g_857f44]
        lea     edx, [esp + 0x2c]
        push    edx
        push    eax
        mov     dword ptr [esp + 0x34], 0x2c
        call    FUN_007555e0
        mov     eax, dword ptr [g_857f44]
        mov     cl, byte ptr [esp + 0x38]
        mov     dl, byte ptr [esp + 0x3c]
        push    0x7afcb8
        push    eax
        mov     byte ptr [g_85813a], cl
        mov     byte ptr [g_858139], dl
        call    FUN_00755380
        cmp     byte ptr [g_85813a], 0x2
        seta    al
        test    al, al
        mov     byte ptr [g_87dd51], al
        mov     ebx, 0x1
        jz      L_452
        mov     eax, dword ptr [g_857f44]
        lea     edx, [esp + 0x18]
        push    edx
        push    0x3
        mov     dword ptr [esp + 0x20], 0x14
        mov     dword ptr [esp + 0x24], 0x10
        mov     dword ptr [esp + 0x28], 0x8
        mov     dword ptr [esp + 0x2c], ebx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        mov     dword ptr [g_87dd40], eax
        jnz     L_452
        mov     dword ptr [g_87dd40], ebx
L_452:
        lea     eax, [esp + 0x10]
        push    eax
        call    dword ptr [g_76b470]
        mov     dl, byte ptr [g_858954]
        test    dl, dl
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [g_87dd30], eax
        mov     dword ptr [g_87dd2c], ecx
        jz      L_4aa
        mov     edx, dword ptr [g_858bf8]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        call    dword ptr [g_76b56c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        sub     ecx, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        sub     eax, ecx
        mov     dword ptr [esp + 0x14], eax
        jmp     L_4be
L_4aa:
        sub     eax, dword ptr [g_858c10]
        mov     dword ptr [esp + 0x10], eax
        sub     ecx, dword ptr [g_858c14]
        mov     dword ptr [esp + 0x14], ecx
L_4be:
        push    0x17
        call    dword ptr [g_76b478]
        mov     ecx, dword ptr [esp + 0x10]
        test    eax, eax
        setnz   dl
        test    ecx, ecx
        mov     byte ptr [g_87dd50], dl
        jge     L_4e5
        mov     dword ptr [g_87dd3c], 0x0
        jmp     L_50d
L_4e5:
        mov     eax, dword ptr [g_858940]
        dec     eax
        cmp     ecx, eax
        mov     dword ptr [esp + 0xc], eax
        jl      L_4ff
        mov     dword ptr [g_87dd3c], 0x3f800000
        jmp     L_50d
L_4ff:
        fild    dword ptr [esp + 0x10]
        fidiv   dword ptr [esp + 0xc]
        fstp    dword ptr [g_87dd3c]
L_50d:
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        jge     L_533
        pop     edi
        pop     esi
        mov     byte ptr [g_858894], bl
        mov     dword ptr [g_87dd38], 0x0
        mov     byte ptr [g_87dd60], 0x0
        pop     ebx
        add     esp, 0x4c
        ret
L_533:
        mov     edx, dword ptr [g_858944]
        lea     eax, [edx + -0x1]
        cmp     ecx, eax
        mov     dword ptr [esp + 0xc], eax
        jl      L_562
        pop     edi
        pop     esi
        mov     byte ptr [g_858894], bl
        mov     dword ptr [g_87dd38], 0x3f800000
        mov     byte ptr [g_87dd60], 0x0
        pop     ebx
        add     esp, 0x4c
        ret
L_562:
        fild    dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     byte ptr [g_858894], bl
        fidiv   dword ptr [esp + 0x4]
        mov     byte ptr [g_87dd60], 0x0
        pop     ebx
        fstp    dword ptr [g_87dd38]
        add     esp, 0x4c
        ret
    }
}
