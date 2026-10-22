/*
 * FUN_0070DFE0 (368 B) — __cdecl (no params), RET 0.
 *
 * In-.text data block at 0x70DFD8 (368 B). Initializes a 0x154-byte local
 * struct (vtable 0x7a1c6c, buffer 0x7a1c50, etc.), calls an IAT function
 * (0x76b0c0) to create an object, then runs a state machine that calls
 * 0x70ddb0 and on failure tears down via 0x707e00/0x70abe0. Uses IAT
 * imports 0x76b0c0/0x76b0c8/0x76b0b8 and function pointer 0x76b4f4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707dd0(void);
extern void __cdecl FUN_0070a920(void);
extern void __cdecl FUN_0070abe0(void);
extern void __cdecl FUN_00707e00(void);
extern char __cdecl FUN_0070ddb0(void);
extern void __cdecl FUN_00709120(void);

extern void *g_76b0c0;   /* IAT */
extern void *g_76b0c8;   /* IAT */
extern void *g_76b0b8;   /* IAT */
extern void *g_76b4f4;   /* fn ptr */

extern char g_858954;    /* DAT_00858954 */
extern int  g_858bf8;    /* DAT_00858bf8 */
extern char g_76b768;    /* DAT_0076b768 */
extern int  g_85b498;    /* DAT_0085b498 */
extern int  g_85b4a0;    /* DAT_0085b4a0 */
extern char g_87bc34;    /* DAT_0087bc34 */
extern char g_87bc35;    /* DAT_0087bc35 */

__declspec(naked) void __cdecl FUN_0070DFE0(void)
{
    __asm {
        sub     esp, 0x154
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_00707dd0
        mov     al, byte ptr [g_858954]
        xor     ebx, ebx
        cmp     al, bl
        mov     byte ptr [esp + 0x13], bl
        je      L_e010
        cmp     dword ptr [g_858bf8], ebx
        je      L_e010
        mov     byte ptr [esp + 0x13], 1
        call    FUN_0070a920
L_e010:
        mov     ebp, dword ptr [g_76b4f4]
        push    1
        call    ebp
        mov     al, byte ptr [g_76b768]
        mov     byte ptr [esp + 0x60], al
        xor     eax, eax
        mov     ecx, 0x40
        lea     edi, [esp + 0x61]
        rep     stosd
        mov     ecx, dword ptr [g_858bf8]
        stosw
        lea     edx, [esp + 0x60]
        push    0x7a1c6c
        stosb
        mov     dword ptr [esp + 0x18], 0x4c
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x24], 0x7a1c50
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x38], 0x104
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x40], ebx
        mov     dword ptr [esp + 0x44], ebx
        mov     dword ptr [esp + 0x48], 0x7a1c40
        mov     word ptr [esp + 0x50], bx
        mov     word ptr [esp + 0x52], bx
        mov     dword ptr [esp + 0x54], 0x7a1c3c
        mov     dword ptr [esp + 0x4c], 0x28080c
        call    dword ptr [g_76b0c0]
        mov     esi, eax
        cmp     esi, ebx
        je      L_e145
        push    0x7a1c28
        push    esi
        call    dword ptr [g_76b0c8]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     dword ptr [g_85b498], eax
        call    eax
        push    esi
        mov     edi, eax
        call    dword ptr [g_76b0b8]
        cmp     edi, ebx
        jne     L_e0ef
        push    ebx
        call    ebp
        cmp     byte ptr [esp + 0x13], bl
        je      L_e0df
        call    FUN_0070abe0
L_e0df:
        call    FUN_00707e00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x154
        ret
L_e0ef:
        mov     edx, dword ptr [esp + 0x30]
        push    1
        push    edx
        call    FUN_0070ddb0
        test    al, al
        push    ebx
        jne     L_e11d
        call    ebp
        cmp     byte ptr [esp + 0x13], bl
        je      L_e10d
        call    FUN_0070abe0
L_e10d:
        call    FUN_00707e00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x154
        ret
L_e11d:
        call    ebp
        cmp     byte ptr [esp + 0x13], bl
        je      L_e12a
        call    FUN_0070abe0
L_e12a:
        mov     dword ptr [g_85b4a0], 1
        mov     byte ptr [g_87bc34], bl
        mov     byte ptr [g_87bc35], bl
        call    FUN_00709120
L_e145:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x154
        ret
    }
}
