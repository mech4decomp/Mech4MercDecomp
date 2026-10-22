/*
 * FUN_00706870 (629 B) — __cdecl (ret 0xc). Structurally similar to
 * FUN_004CF4F0: builds a config/registry structure, calls FUN_006f89f0 /
 * FUN_006f5e50 / FUN_006f5b80 / FUN_006f3c80 / FUN_006f4230, dispatches
 * through IAT DAT_0076b318 and vtable pointers ([edx+0x38], [ecx+0x98],
 * [ecx+0x34], [ecx+8]), and reads constants from 0x7a2f30..0x7a2fbc and
 * 0x8589a4..0x8589b0. A small trailing function at 0x00706AE0 (mov al,1;
 * ret 4) is included in the slice.
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
extern void __cdecl FUN_006f4230(void *p);

__declspec(naked) void FUN_00706870(void)
{
    __asm {
        sub     esp, 0xa8
        mov     eax, dword ptr [esp + 0xb0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        xor     ebp, ebp
        push    0x79fa10
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x18], ebp
        xor     ebx, ebx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5e50
        push    0x79fa54
        push    eax
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        cmp     eax, ebp
        je      L_7068c5
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 4
        mov     dword ptr [esp + 0x18], eax
        jmp     L_7068c9
L_7068c5:
        mov     dword ptr [esp + 0x18], ebp
L_7068c9:
        mov     edi, dword ptr [g_76b634]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x7a2e00
        push    7
        push    ebp
        push    0x7a2e10
        call    edi
        test    eax, eax
        jl      L_706a9b
        mov     esi, dword ptr [esp + 0xc4]
        mov     eax, dword ptr [esi]
        cmp     eax, ebp
        je      L_706900
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov     dword ptr [esi], ebp
L_706900:
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7a2eb0
        push    7
        push    ebp
        push    0x7a2ed0
        mov     dword ptr [esi], eax
        call    edi
        test    eax, eax
        jl      L_706a9b
        mov     edx, dword ptr [g_7a2f30]
        mov     eax, dword ptr [g_7a2f34]
        mov     ecx, dword ptr [g_7a2f38]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [g_7a2f3c]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esp + 0xbc]
        mov     ecx, dword ptr [eax + 0x74]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [g_7a2f94]
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, dword ptr [g_7a2f90]
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [g_7a2f9c]
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [g_7a2f98]
        mov     dword ptr [esp + 0x44], ecx
        or      ecx, 0xffffffff
        mov     dword ptr [esp + 0x40], edx
        lea     edx, [eax + 0x2c]
        xor     eax, eax
        mov     edi, edx
        repne scasb
        mov     eax, dword ptr [g_7a2fb4]
        not     ecx
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [g_7a2fb8]
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x58], ecx
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x64], eax
        mov     eax, dword ptr [esp + 0x18]
        xor     ecx, ecx
        cmp     eax, ebp
        mov     eax, dword ptr [esp + 0x10]
        setne   cl
        mov     dword ptr [esp + 0x4c], edx
        mov     edx, dword ptr [g_7a2fb0]
        mov     dword ptr [esp + 0x50], edx
        mov     edx, dword ptr [g_7a2fbc]
        mov     dword ptr [esp + 0x30], 0x10
        mov     dword ptr [esp + 0x5c], edx
        add     ecx, 2
        mov     esi, ecx
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    ebp
        push    esi
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     dword ptr [esp + 0x70], 4
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x38]
        mov     edx, dword ptr [esp + 0x1c]
        push    ebp
        push    edx
        call    FUN_006f3c80
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    ebx
        push    esi
        lea     edx, [esp + 0x2c]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x38]
        test    eax, eax
        jl      L_706a9b
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    ebp
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x98]
        test    eax, eax
        jl      L_706a9b
        mov     edx, dword ptr [g_8589a4]
        push    0xc2
        xor     eax, eax
        push    ebp
        mov     ecx, 0x14
        lea     edi, [esp + 0x70]
        rep stosd
        mov     eax, dword ptr [g_8589a8]
        mov     ecx, dword ptr [g_8589ac]
        mov     dword ptr [esp + 0x88], edx
        mov     edx, dword ptr [g_8589b0]
        push    0x706860
        mov     dword ptr [esp + 0x98], edx
        push    ebp
        mov     dword ptr [esp + 0x94], eax
        mov     eax, dword ptr [esp + 0x24]
        lea     edx, [esp + 0x78]
        push    edx
        mov     dword ptr [esp + 0x7c], 0x50
        mov     dword ptr [esp + 0x9c], ecx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x34]
        test    eax, eax
        jge     L_706ac6
L_706a9b:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        je      L_706aad
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     dword ptr [esp + 0x10], ebp
L_706aad:
        cmp     ebx, ebp
        je      L_706ab7
        push    ebx
        call    FUN_006f4230
L_706ab7:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xa8
        ret     0xc
L_706ac6:
        cmp     ebx, ebp
        je      L_706ad0
        push    ebx
        call    FUN_006f4230
L_706ad0:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xa8
        ret     0xc
        nop

        /* ---- small trailing function @ 0x00706AE0 ---- */
        mov     al, 1
        ret     4
    }
}
