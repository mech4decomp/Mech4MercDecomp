/*
 * FUN_004CF4F0 (626 B) — __cdecl (ret 0xc). Builds a config/registry-style
 * structure, calls FUN_006f89f0 / FUN_006f5e50 / FUN_006f5b80 /
 * FUN_006f3c80, dispatches through IAT DAT_0076b318 and vtable pointers
 * ([ecx+0x38], [ecx+0x98], [ecx+0x34], [ecx+8]), and reads a block of
 * constants from 0x7a2f30..0x7a2fbc and 0x8589a4..0x8589b0.
 *
 * __cdecl, returns al, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b318;   /* IAT 0x0076b318 */
extern void *g_76b634;   /* 0x0076b634 */
extern void *g_7a2f30;   /* 0x007a2f30 */
extern void *g_7a2f34;   /* 0x007a2f34 */
extern void *g_7a2f38;   /* 0x007a2f38 */
extern void *g_7a2f3c;   /* 0x007a2f3c */
extern void *g_7a2f90;   /* 0x007a2f90 */
extern void *g_7a2f94;   /* 0x007a2f94 */
extern void *g_7a2f98;   /* 0x007a2f98 */
extern void *g_7a2f9c;   /* 0x007a2f9c */
extern void *g_7a2fb0;   /* 0x007a2fb0 */
extern void *g_7a2fb4;   /* 0x007a2fb4 */
extern void *g_7a2fb8;   /* 0x007a2fb8 */
extern void *g_7a2fbc;   /* 0x007a2fbc */
extern void *g_8589a4;   /* 0x008589a4 */
extern void *g_8589a8;   /* 0x008589a8 */
extern void *g_8589ac;   /* 0x008589ac */
extern void *g_8589b0;   /* 0x008589b0 */

extern void *__cdecl FUN_006f89f0(void *a, void *b);
extern void *__cdecl FUN_006f5e50(void *p);
extern void *__cdecl FUN_006f5b80(void *p);
extern void *__cdecl FUN_006f3c80(void *a, void *b);

__declspec(naked) void FUN_004CF4F0(void)
{
    __asm {
        sub     esp, 0xa8
        mov     eax, dword ptr [esp + 0xb0]
        push    ebx
        push    esi
        push    edi
        push    eax
        push    0x79fa10
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5e50
        mov     esi, eax
        push    0x79fa18
        push    esi
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        push    0x79fa54
        push    esi
        mov     ebx, eax
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        test    eax, eax
        je      L_4cf55e
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 4
        mov     dword ptr [esp + 0x14], eax
        jmp     L_4cf566
L_4cf55e:
        mov     dword ptr [esp + 0x14], 0
L_4cf566:
        mov     edi, dword ptr [g_76b634]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x7a2e00
        push    7
        push    0
        push    0x7a2e10
        call    edi
        test    eax, eax
        jl      L_4cf738
        mov     esi, dword ptr [esp + 0xc0]
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L_4cf5a2
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov     dword ptr [esi], 0
L_4cf5a2:
        mov     eax, dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7a2eb0
        push    7
        push    0
        push    0x7a2ed0
        mov     dword ptr [esi], eax
        call    edi
        test    eax, eax
        jl      L_4cf738
        mov     eax, dword ptr [g_7a2f34]
        mov     edx, dword ptr [g_7a2f30]
        mov     ecx, dword ptr [g_7a2f38]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [g_7a2f90]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [g_7a2f3c]
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [g_7a2f9c]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [g_7a2f94]
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [g_7a2f98]
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, dword ptr [g_7a2fb4]
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     dword ptr [esp + 0x2c], 0x10
        mov     dword ptr [esp + 0x30], 0x7a2e30
        mov     edi, ebx
        repne scasb
        mov     eax, dword ptr [g_7a2fb8]
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [esp + 0x54], eax
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x60], edx
        mov     edx, dword ptr [esp + 0x14]
        xor     eax, eax
        test    edx, edx
        setne   al
        not     ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [g_7a2fb0]
        push    0
        add     eax, 2
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x54], ecx
        mov     ecx, dword ptr [g_7a2fbc]
        push    esi
        lea     edx, [esp + 0x28]
        push    edx
        mov     dword ptr [esp + 0x58], ebx
        mov     dword ptr [esp + 0x68], ecx
        mov     dword ptr [esp + 0x6c], 4
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x38]
        mov     eax, dword ptr [esp + 0x18]
        push    0
        push    eax
        call    FUN_006f3c80
        lea     edx, [esp + 0x18]
        push    edx
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    edi
        push    esi
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x38]
        test    eax, eax
        jl      L_4cf738
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        push    0
        push    edi
        push    eax
        call    dword ptr [ecx + 0x98]
        test    eax, eax
        jl      L_4cf738
        mov     edx, dword ptr [g_8589a4]
        push    0xc2
        xor     eax, eax
        push    0
        mov     ecx, 0x14
        lea     edi, [esp + 0x6c]
        rep stosd
        mov     eax, dword ptr [g_8589a8]
        mov     ecx, dword ptr [g_8589ac]
        mov     dword ptr [esp + 0x84], edx
        mov     edx, dword ptr [g_8589b0]
        push    0x4cf4e0
        mov     dword ptr [esp + 0x94], edx
        push    0
        mov     dword ptr [esp + 0x90], eax
        mov     eax, dword ptr [esp + 0x1c]
        lea     edx, [esp + 0x74]
        push    edx
        mov     dword ptr [esp + 0x78], 0x50
        mov     dword ptr [esp + 0x98], ecx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x34]
        test    eax, eax
        jge     L_4cf754
L_4cf738:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_4cf746
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
L_4cf746:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0xa8
        ret     0xc
L_4cf754:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xa8
        ret     0xc
    }
}
