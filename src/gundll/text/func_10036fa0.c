/*
 * FUN_10036FA0 (828 B) - __stdcall, RET 0xc.  Large switch dispatcher on
 * arg0 (a message/opcode): builds a local struct, then jumps through the
 * in-function jump table at 0x10037294 (18 cases).  Cases call virtual
 * methods, IAT timeGetTime (g_10049204) / lstrlenW (g_100490b8), and
 * module fns FUN_100363E0/FUN_10036520/FUN_100366A0/FUN_100366D0
 * (thiscall) and FUN_10033480 (cdecl).  Returns HRESULT-style codes
 * (0x8007000e E_OUTOFMEMORY, 0x15800e, etc.).
 * (Transcribed from reference bytes; gaptext.  Covers batch candidates
 * 0x10036fa0, 0x1003704c, 0x1003708d, 0x100370ab, 0x100370c1, 0x100370d7,
 * 0x100370ed, 0x1003711e, 0x1003714a, 0x10037218, 0x1003722d, 0x10037279 —
 * all are case handlers of this one switch function.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049204;   /* IAT: timeGetTime */
extern void *g_100490b8;   /* IAT: lstrlenW */
extern void __cdecl FUN_100363E0(void);   /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_10036520(void);   /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_100366A0(void);   /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_100366D0(void);   /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_10033480(void);   /* rel32 call */
extern void *g_10037294;   /* in-function jump table base */

__declspec(naked) void __stdcall FUN_10036FA0(void)
{
    __asm {
        sub     esp, 0x3c
        mov     eax, dword ptr [esp + 0x44]
        push    ebx
        push    ebp
        xor     ebp, ebp
        xor     ecx, ecx
        cmp     eax, 0xffff0011
        setne   cl
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        push    edi
        mov     edi, dword ptr [esp + 0x50]
        mov     ebx, dword ptr [edi + 0x18]
        mov     dword ptr [esp + 0x20], eax
        add     ecx, 0xc350
        add     eax, 0xfffb
        cmp     eax, 0x11
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x50], ebp
        ja      L_37286
        jmp     dword ptr [eax*4 + g_10037294]
L_36ff9:
        call    dword ptr [g_10049204]
        mov     dword ptr [esi + 4], eax
        mov     esi, dword ptr [esi + 8]
        cmp     esi, ebp
        je      L_3700e
        lea     eax, [esi + 4]
        jmp     L_37010
L_3700e:
        xor     eax, eax
L_37010:
        mov     dword ptr [esp + 0x24], 0x18
        mov     dword ptr [esp + 0x50], 0x15800e
L_37020:
        cmp     eax, ebp
        je      L_3702f
L_37024:
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x10], edx
L_3702b:
        mov     ebx, dword ptr [esp + 0x10]
L_3702f:
        cmp     ebx, ebp
        je      L_3703e
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    ebx
        call    dword ptr [eax + 0xc]
L_3703e:
        mov     eax, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_3704c:
        mov     esi, dword ptr [esi + 8]
        mov     al, byte ptr [esi + 8]
        test    al, al
        je      L_37075
        mov     eax, dword ptr [esi]
        cmp     eax, ebp
        je      L_37069
        add     eax, 4
        mov     dword ptr [esp + 0x24], 0x14
        jmp     L_37020
L_37069:
        xor     eax, eax
        mov     dword ptr [esp + 0x24], 0x14
        jmp     L_37020
L_37075:
        mov     edi, dword ptr [edi + 0x10]
        mov     edx, dword ptr [edi]
        push    esi
        push    edi
        call    dword ptr [edx + 0x14]
        mov     eax, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_3708d:
        mov     ecx, dword ptr [esi + 8]
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi]
        sub     ecx, 0xc
        push    ecx
        push    edi
        call    dword ptr [eax + 0x14]
        mov     eax, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_370ab:
        push    esi
        mov     ecx, edi
        call    FUN_100363E0
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [esp + 0x44], eax
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_370c1:
        push    esi
        mov     ecx, edi
        call    FUN_10036520
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [esp + 0x44], eax
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_370d7:
        push    esi
        mov     ecx, edi
        call    FUN_100366A0
        mov     eax, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_370ed:
        push    esi
        mov     ecx, edi
        call    FUN_100366D0
        cmp     eax, ebp
        je      L_370fe
        add     eax, 4
        jmp     L_37100
L_370fe:
        xor     eax, eax
L_37100:
        cmp     eax, ebp
        mov     dword ptr [esp + 0x24], 0xc
        jne     L_37024
        mov     eax, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_3711e:
        mov     esi, dword ptr [esi + 8]
        cmp     esi, ebp
        mov     dword ptr [esp + 0x24], 0x10
        je      L_3703e
        lea     eax, [esi + 4]
        cmp     eax, ebp
        jne     L_37024
        mov     eax, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_3714a:
        mov     ecx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [ecx + 0x30]
        test    eax, eax
        lea     ebp, [esi + 0xc]
        lea     ebx, [ecx + 0x30]
        mov     dword ptr [esp + 0x58], ecx
        je      L_37173
        push    eax
        call    dword ptr [g_100490b8]
        mov     ecx, dword ptr [esp + 0x58]
        lea     edx, [eax + eax + 2]
        mov     dword ptr [esp + 0x54], edx
        jmp     L_3717b
L_37173:
        mov     dword ptr [esp + 0x54], 0
L_3717b:
        lea     eax, [ecx + 0x34]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     dword ptr [esp + 0x58], eax
        je      L_37199
        push    ecx
        call    dword ptr [g_100490b8]
        lea     ecx, [eax + eax + 2]
        mov     eax, dword ptr [esp + 0x58]
        jmp     L_3719b
L_37199:
        xor     ecx, ecx
L_3719b:
        mov     edi, dword ptr [edi + 0x10]
        movzx   edx, word ptr [esp + 0x54]
        mov     dword ptr [esp + 0x3c], eax
        xor     eax, eax
        mov     ax, cx
        push    edi
        push    4
        mov     dword ptr [esp + 0x40], edx
        mov     edx, dword ptr [esi + 0x14]
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esp + 0x34], ebp
        mov     dword ptr [esp + 0x48], eax
        lea     eax, [esp + 0x34]
        push    eax
        push    0x20
        push    esi
        mov     dword ptr [esp + 0x44], 0x48
        mov     dword ptr [esp + 0x48], ebx
        mov     dword ptr [esp + 0x58], ecx
        mov     dword ptr [esp + 0x5c], edx
        call    FUN_10033480
        test    eax, eax
        mov     dword ptr [esp + 0x28], eax
        jne     L_37200
        pop     edi
        pop     esi
        mov     dword ptr [esp + 0x48], 0x8007000e
        mov     eax, dword ptr [esp + 0x48]
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_37200:
        mov     esi, dword ptr [esi + 4]
        mov     dword ptr [esp + 0x18], 4
        mov     ecx, dword ptr [esi]
        push    esi
        call    dword ptr [ecx + 4]
        xor     ebp, ebp
        jmp     L_3702b
L_37218:
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esi + 0x14]
        push    edi
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esi + 0x10]
        push    0x18
        jmp     L_37240
L_3722d:
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esi + 8]
        push    0x10
L_37240:
        push    esi
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], eax
        call    FUN_10033480
        cmp     eax, ebp
        mov     dword ptr [esp + 0x28], eax
        jne     L_3726c
        pop     edi
        pop     esi
        mov     dword ptr [esp + 0x48], 0x8007000e
        mov     eax, dword ptr [esp + 0x48]
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
L_3726c:
        mov     dword ptr [esp + 0x18], 4
        jmp     L_3702f
L_37279:
        mov     dword ptr [esp + 0x24], 0xc
        jmp     L_3702f
L_37286:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x3c
        ret     0xc
        mov     edi, edi
        /* in-function jump table (18 relocated dword entries) at 0x10037294 */
        __emit 0x18
        __emit 0x72
        __emit 0x03
        __emit 0x10
        __emit 0x86
        __emit 0x72
        __emit 0x03
        __emit 0x10
        __emit 0xed
        __emit 0x70
        __emit 0x03
        __emit 0x10
        __emit 0x86
        __emit 0x72
        __emit 0x03
        __emit 0x10
        __emit 0x1e
        __emit 0x71
        __emit 0x03
        __emit 0x10
        __emit 0xab
        __emit 0x70
        __emit 0x03
        __emit 0x10
        __emit 0x4a
        __emit 0x71
        __emit 0x03
        __emit 0x10
        __emit 0x86
        __emit 0x72
        __emit 0x03
        __emit 0x10
        __emit 0x79
        __emit 0x72
        __emit 0x03
        __emit 0x10
        __emit 0xc1
        __emit 0x70
        __emit 0x03
        __emit 0x10
        __emit 0xd7
        __emit 0x70
        __emit 0x03
        __emit 0x10
        __emit 0x86
        __emit 0x72
        __emit 0x03
        __emit 0x10
        __emit 0xf9
        __emit 0x6f
        __emit 0x03
        __emit 0x10
        __emit 0x86
        __emit 0x72
        __emit 0x03
        __emit 0x10
        __emit 0x8d
        __emit 0x70
        __emit 0x03
        __emit 0x10
        __emit 0x4c
        __emit 0x70
        __emit 0x03
        __emit 0x10
        __emit 0x86
        __emit 0x72
        __emit 0x03
        __emit 0x10
        __emit 0x2d
        __emit 0x72
        __emit 0x03
        __emit 0x10
    }
}
