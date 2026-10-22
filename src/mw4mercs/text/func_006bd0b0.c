/*
 * FUN_006bd0b0 (6380 B) — __stdcall, RET 4 (one stack param).
 * Debug/dump routine: prints an object's properties (name, focus state,
 * child) then walks a linked list of property nodes (via [param+4]) and
 * dumps each node's contents according to its type byte (0x64..0x70,
 * jump table at 0x6be99c). Each node is a {next, count, type, ...} record;
 * the type selects INT/STRING/POSITION/BITMAP/OBJECT/FONT/SOUND/CUBE/
 * MOVIE/GAF/PANE/FONT3D/FLOAT formatting. Uses the log buffer helpers
 * FUN_00727660 / FUN_006be9e0 / FUN_00728fd0 and _ftol (FUN_0075db4a).
 *
 * The jump table DATA at 0x6be99c lies just past the function's 6380-byte
 * slice (ends 0x6be99b), so it is not part of the diffed bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_858944;   /* 0x00858944 */
extern int g_858940;   /* 0x00858940 */
extern int g_82f38c;   /* 0x0082f38c */
extern int g_82f3d4;   /* 0x0082f3d4 */
extern float g_79b7d0; /* 0x0079b7d0 */
extern float g_79b7cc; /* 0x0079b7cc */
extern int g_6be99c[]; /* jump table 0x006be99c */

extern void __cdecl FUN_00727630(void);
extern void __cdecl FUN_007274d0(void);
extern void __cdecl FUN_007275f0(void);
extern void __cdecl FUN_00727660(void);
extern void __cdecl FUN_006be9e0(void);
extern void __cdecl FUN_00728fd0(void);
extern void __cdecl FUN_00725810(void);
extern void __cdecl FUN_00733700(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void __stdcall FUN_006bd0b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xdc
        mov     eax, dword ptr [g_858944]
        mov     ecx, dword ptr [g_858940]
        push    ebx
        push    esi
        push    edi
        push    eax
        push    ecx
        push    0x0
        push    0x0
        call    FUN_00727630
        mov     edx, dword ptr [g_82f38c]
        push    0x0
        push    0x0
        push    0x0
        push    0x1
        push    0x1
        push    0x0
        push    0x3f800000
        push    0xff00ff00
        push    edx
        call    FUN_007274d0
        push    0x10
        push    0x10
        call    FUN_007275f0
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        jz      L_d1d8
        xor     ecx, ecx
        mov     cx, word ptr [eax + 0x8]
        test    cx, cx
        jz      L_d1d8
        xor     ebx, ebx
        and     ecx, 0xffff
        jle     L_d136
        mov     eax, dword ptr [eax + 0x4]
L_d12a:
        cmp     edi, dword ptr [eax]
        jz      L_d136
        inc     ebx
        add     eax, 0x4
        cmp     ebx, ecx
        jl      L_d12a
L_d136:
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        lea     ecx, [eax + 0x44]
        jnz     L_d145
        mov     ecx, 0x77008c
L_d145:
        cmp     edi, dword ptr [g_82f3d4]
        mov     eax, 0x79bc94
        jz      L_d157
        mov     eax, 0x79bc88
L_d157:
        push    ecx
        push    eax
        mov     eax, dword ptr [edi + 0x28]
        add     eax, 0xc
        push    eax
        push    ebx
        lea     esi, [edi + 0x44]
        push    esi
        push    0x79bc5c
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        add     esp, 0x20
        push    0x7f000000
        add     eax, 0x10
        push    eax
        add     ecx, 0x10
        push    ecx
        push    0x10
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        lea     ecx, [eax + 0x44]
        jnz     L_d1a9
        mov     ecx, 0x77008c
L_d1a9:
        cmp     edi, dword ptr [g_82f3d4]
        mov     eax, 0x79bc94
        jz      L_d1bb
        mov     eax, 0x79bc88
L_d1bb:
        mov     edx, dword ptr [edi + 0x28]
        push    ecx
        push    eax
        add     edx, 0xc
        push    edx
        push    ebx
        push    esi
        push    0x79bc5c
        call    FUN_00728fd0
        add     esp, 0x18
        jmp     L_d275
L_d1d8:
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        lea     ecx, [eax + 0x44]
        jnz     L_d1e7
        mov     ecx, 0x77008c
L_d1e7:
        cmp     edi, dword ptr [g_82f3d4]
        mov     eax, 0x79bc94
        jz      L_d1f9
        mov     eax, 0x79bc88
L_d1f9:
        push    ecx
        push    eax
        mov     eax, dword ptr [edi + 0x28]
        add     eax, 0xc
        push    eax
        lea     esi, [edi + 0x44]
        push    esi
        push    0x79bc34
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        add     esp, 0x1c
        push    0x7f000000
        add     eax, 0x10
        push    eax
        add     ecx, 0x10
        push    ecx
        push    0x10
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        jz      L_d247
        add     eax, 0x44
        jmp     L_d24c
L_d247:
        mov     eax, 0x77008c
L_d24c:
        cmp     edi, dword ptr [g_82f3d4]
        mov     ecx, 0x79bc94
        jz      L_d25e
        mov     ecx, 0x79bc88
L_d25e:
        mov     edx, dword ptr [edi + 0x28]
        push    eax
        push    ecx
        add     edx, 0xc
        push    edx
        push    esi
        push    0x79bc34
        call    FUN_00728fd0
        add     esp, 0x14
L_d275:
        mov     ecx, dword ptr [g_82f38c]
        mov     eax, dword ptr [esp + 0xc]
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x1
        push    0x0
        push    0x3f800000
        push    0xff00ff00
        push    ecx
        lea     esi, [eax + 0x10]
        call    FUN_007274d0
        mov     edi, dword ptr [edi + 0x4]
        test    edi, edi
        jz      L_e993
L_d2a9:
        push    esi
        push    0x10
        call    FUN_007275f0
        xor     eax, eax
        mov     al, byte ptr [edi + 0xa]
        add     eax, -0x64
        cmp     eax, 0xc
        ja      L_e989
        jmp     dword ptr [eax*4 + g_6be99c]
L_d2c9:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_d357
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_d2e1:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edx + ebx*0x4]
        push    eax
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bc24
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        add     esp, 0x18
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edx + ebx*0x4]
        push    eax
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bc24
        call    FUN_00728fd0
        mov     edx, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     cx, word ptr [edi + 0x8]
        add     esp, 0x10
        add     esi, edx
        inc     ebx
        cmp     ebx, ecx
        jl      L_d2e1
        jmp     L_e989
L_d357:
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79bc18
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     ecx, dword ptr [edi + 0x4]
        push    ecx
        push    ebx
        push    0x79bc18
        call    FUN_00728fd0
        add     esp, 0xc
        jmp     L_e985
L_d3a9:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_d43f
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_d3c1:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     edx, dword ptr [edi + 0x4]
        fld     dword ptr [edx + ebx*0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bc04
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x2c]
        add     esp, 0x1c
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     ecx, dword ptr [edi + 0x4]
        fld     dword ptr [ecx + ebx*0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bc04
        call    FUN_00728fd0
        add     esi, dword ptr [esp + 0x20]
        xor     edx, edx
        mov     dx, word ptr [edi + 0x8]
        add     esp, 0x14
        inc     ebx
        cmp     ebx, edx
        jl      L_d3c1
        jmp     L_e989
L_d43f:
        fld     dword ptr [edi + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79bbf4
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        add     esp, 0x18
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        fld     dword ptr [edi + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    ebx
        push    0x79bbf4
        call    FUN_00728fd0
        add     esp, 0x10
        jmp     L_e985
L_d49b:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_d57b
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_d4b3:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     ecx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [ecx + ebx*0x4]
        test    eax, eax
        jz      L_d519
        push    eax
        push    ebx
        lea     ecx, [edi + 0xf]
        push    ecx
        push    0x79bbdc
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0x18
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [eax + ebx*0x4]
        push    ecx
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bbdc
        call    FUN_00728fd0
        add     esp, 0x10
        jmp     L_d563
L_d519:
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bbc0
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bbc0
        call    FUN_00728fd0
        add     esp, 0xc
L_d563:
        add     esi, dword ptr [esp + 0xc]
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        inc     ebx
        cmp     ebx, eax
        jl      L_d4b3
        jmp     L_e989
L_d57b:
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        lea     ebx, [edi + 0xf]
        jz      L_d5d1
        push    eax
        push    ebx
        push    0x79bbac
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        push    ebx
        push    0x79bbac
        call    FUN_00728fd0
        add     esp, 0xc
        jmp     L_e985
L_d5d1:
        push    ebx
        push    0x79bb94
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79bb94
        jmp     L_e97d
L_d610:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_d704
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_d628:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     ecx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [ecx + ebx*0x4]
        test    eax, eax
        jz      L_d6a2
        mov     edx, dword ptr [eax + 0x8]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    edx
        push    eax
        push    ebx
        lea     ecx, [edi + 0xf]
        push    ecx
        push    0x79bb70
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        add     esp, 0x20
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edx + ebx*0x4]
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bb70
        call    FUN_00728fd0
        add     esp, 0x18
        jmp     L_d6ec
L_d6a2:
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bb54
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79bb54
        call    FUN_00728fd0
        add     esp, 0xc
L_d6ec:
        add     esi, dword ptr [esp + 0xc]
        xor     edx, edx
        mov     dx, word ptr [edi + 0x8]
        inc     ebx
        cmp     ebx, edx
        jl      L_d628
        jmp     L_e989
L_d704:
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        lea     ebx, [edi + 0xf]
        jz      L_d76e
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        push    ebx
        push    0x79bb34
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        add     esp, 0x1c
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [edi + 0x4]
        mov     edx, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax + 0x4]
        push    edx
        mov     edx, dword ptr [eax]
        push    ecx
        push    edx
        push    ebx
        push    0x79bb34
        call    FUN_00728fd0
        add     esp, 0x14
        jmp     L_e985
L_d76e:
        push    ebx
        push    0x79bb1c
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79bb1c
        jmp     L_e97d
L_d7ad:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_d8aa
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_d7c5:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     ecx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [ecx + ebx*0x4]
        test    eax, eax
        jz      L_d846
        mov     ecx, dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        push    edx
        push    eax
        push    ecx
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        mov     dword ptr [esp + 0x28], ecx
        push    0x79baf8
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        add     esp, 0x20
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edx + ebx*0x4]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79baf8
        call    FUN_00728fd0
        add     esp, 0x18
        jmp     L_d890
L_d846:
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79badc
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79badc
        call    FUN_00728fd0
        add     esp, 0xc
L_d890:
        mov     eax, dword ptr [esp + 0xc]
        xor     edx, edx
        mov     dx, word ptr [edi + 0x8]
        add     esi, eax
        inc     ebx
        cmp     ebx, edx
        jl      L_d7c5
        jmp     L_e989
L_d8aa:
        mov     ebx, dword ptr [edi + 0x4]
        test    ebx, ebx
        jz      L_d926
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     edx, dword ptr [ebx + 0x4]
        mov     eax, dword ptr [ebx + 0x20]
        push    edx
        mov     edx, dword ptr [ebx + 0x8]
        push    edx
        push    eax
        lea     ecx, [edi + 0xf]
        push    ecx
        mov     dword ptr [esp + 0x24], eax
        push    0x79babc
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x2c]
        add     esp, 0x1c
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79babc
        call    FUN_00728fd0
        add     esp, 0x14
        jmp     L_e985
L_d926:
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79baa4
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79baa4
        jmp     L_e97d
L_d968:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_daf1
        mov     dword ptr [esp + 0x18], 0x0
        jbe     L_e989
L_d983:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [edx + eax*0x4]
        test    ebx, ebx
        jz      L_da80
        mov     eax, dword ptr [ebx + 0x28]
        test    eax, eax
        jz      L_d9ad
        add     eax, 0xc
        mov     dword ptr [esp + 0x14], eax
        jmp     L_d9b5
L_d9ad:
        mov     dword ptr [esp + 0x14], 0x79ba9c
L_d9b5:
        mov     ecx, dword ptr [ebx + 0x20]
        mov     eax, dword ptr [ebx + 0x24]
        lea     edx, [ebx + 0x44]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [ecx + 0x8]
        push    edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [eax + 0x10]
        push    ecx
        mov     ecx, dword ptr [eax + 0xc]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x14]
        push    edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x30]
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    edx
        mov     edx, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        push    edx
        push    0x79ba40
        lea     eax, [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x48]
        add     esp, 0x38
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [ebx + 0x28]
        test    eax, eax
        jz      L_da34
        add     eax, 0xc
        mov     dword ptr [esp + 0x14], eax
        jmp     L_da3c
L_da34:
        mov     dword ptr [esp + 0x14], 0x79ba9c
L_da3c:
        mov     ecx, dword ptr [ebx + 0x20]
        mov     edx, dword ptr [ecx + 0x8]
        mov     eax, dword ptr [ebx + 0x24]
        push    edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [eax + 0x10]
        push    ecx
        mov     ecx, dword ptr [eax + 0xc]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x14]
        push    edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x30]
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    edx
        mov     edx, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        push    edx
        push    0x79ba40
        call    FUN_00728fd0
        add     esp, 0x30
        jmp     L_dacf
L_da80:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79ba24
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        push    ebx
        push    0x79ba24
        call    FUN_00728fd0
        add     esp, 0xc
L_dacf:
        mov     eax, dword ptr [esp + 0xc]
        xor     ecx, ecx
        mov     cx, word ptr [edi + 0x8]
        add     esi, eax
        mov     eax, dword ptr [esp + 0x18]
        inc     eax
        mov     dword ptr [esp + 0x18], eax
        cmp     eax, ecx
        jl      L_d983
        jmp     L_e989
L_daf1:
        mov     ebx, dword ptr [edi + 0x4]
        test    ebx, ebx
        jz      L_dbe0
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     eax, dword ptr [ebx + 0x28]
        test    eax, eax
        jz      L_db14
        add     eax, 0xc
        mov     dword ptr [esp + 0x14], eax
        jmp     L_db1c
L_db14:
        mov     dword ptr [esp + 0x14], 0x79ba9c
L_db1c:
        mov     ecx, dword ptr [ebx + 0x20]
        mov     eax, dword ptr [ebx + 0x24]
        lea     edx, [ebx + 0x44]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [ecx + 0x8]
        push    edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [eax + 0x10]
        push    ecx
        mov     ecx, dword ptr [eax + 0xc]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x14]
        push    edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x34]
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    edx
        push    eax
        push    ecx
        push    0x79b9cc
        lea     edx, [esp + 0x38]
        push    edx
        lea     eax, [esp + 0x40]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x44]
        add     esp, 0x34
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [ebx + 0x28]
        test    eax, eax
        jz      L_db96
        add     eax, 0xc
        mov     dword ptr [esp + 0x14], eax
        jmp     L_db9e
L_db96:
        mov     dword ptr [esp + 0x14], 0x79ba9c
L_db9e:
        mov     ecx, dword ptr [ebx + 0x20]
        mov     edx, dword ptr [ecx + 0x8]
        mov     eax, dword ptr [ebx + 0x24]
        push    edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [eax + 0x10]
        push    ecx
        mov     ecx, dword ptr [eax + 0xc]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x14]
        push    edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x34]
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    edx
        push    eax
        push    ecx
        push    0x79b9cc
        call    FUN_00728fd0
        add     esp, 0x2c
        jmp     L_e985
L_dbe0:
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b9b4
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79b9b4
        jmp     L_e97d
L_dc22:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_dd09
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_dc3a:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     eax, dword ptr [edi + 0x4]
        mov     eax, dword ptr [eax + ebx*0x4]
        test    eax, eax
        jz      L_dca5
        mov     eax, dword ptr [eax + 0x20]
        push    eax
        push    ebx
        lea     ecx, [edi + 0xf]
        push    ecx
        push    0x79b9a0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        add     esp, 0x18
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b9a0
        call    FUN_00728fd0
        add     esp, 0x10
        jmp     L_dcef
L_dca5:
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b988
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b988
        call    FUN_00728fd0
        add     esp, 0xc
L_dcef:
        mov     edx, dword ptr [esp + 0xc]
        xor     ecx, ecx
        mov     cx, word ptr [edi + 0x8]
        add     esi, edx
        inc     ebx
        cmp     ebx, ecx
        jl      L_dc3a
        jmp     L_e989
L_dd09:
        mov     ebx, dword ptr [edi + 0x4]
        test    ebx, ebx
        jz      L_dd6a
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     ebx, dword ptr [ebx + 0x20]
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b978
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b978
        call    FUN_00728fd0
        add     esp, 0xc
        jmp     L_e985
L_dd6a:
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b964
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79b964
        jmp     L_e97d
L_ddac:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_de9f
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_ddc4:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     ecx, dword ptr [edi + 0x4]
        lea     eax, [ecx + ebx*0x4]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      L_de3b
        lea     edx, [esp + 0x28]
        push    edx
        mov     eax, ecx
        push    eax
        call    FUN_00725810
        mov     ecx, dword ptr [esp + 0x28]
        push    ecx
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b950
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0x18
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b950
        call    FUN_00728fd0
        add     esp, 0x10
        jmp     L_de85
L_de3b:
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b934
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b934
        call    FUN_00728fd0
        add     esp, 0xc
L_de85:
        mov     eax, dword ptr [esp + 0xc]
        xor     edx, edx
        mov     dx, word ptr [edi + 0x8]
        add     esi, eax
        inc     ebx
        cmp     ebx, edx
        jl      L_ddc4
        jmp     L_e989
L_de9f:
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        jz      L_df05
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    eax
        call    FUN_00725810
        mov     edx, dword ptr [esp + 0x4c]
        push    edx
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b924
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     ecx, dword ptr [esp + 0x4c]
        push    ecx
        push    ebx
        push    0x79b924
        call    FUN_00728fd0
        add     esp, 0xc
        jmp     L_e985
L_df05:
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b90c
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79b90c
        jmp     L_e97d
L_df47:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_e045
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_df5f:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     eax, dword ptr [edi + 0x4]
        mov     eax, dword ptr [eax + ebx*0x4]
        test    eax, eax
        jz      L_dfe1
        mov     edx, dword ptr [eax + 0x10]
        push    edx
        mov     edx, dword ptr [eax + 0xc]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    edx
        push    eax
        push    ebx
        lea     ecx, [edi + 0xf]
        push    ecx
        push    0x79b8e8
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x30]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        add     esp, 0x24
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edx + ebx*0x4]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0xc]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        push    edx
        mov     edx, dword ptr [eax]
        push    ecx
        push    edx
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b8e8
        call    FUN_00728fd0
        add     esp, 0x1c
        jmp     L_e02b
L_dfe1:
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b934
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b934
        call    FUN_00728fd0
        add     esp, 0xc
L_e02b:
        mov     edx, dword ptr [esp + 0xc]
        xor     ecx, ecx
        mov     cx, word ptr [edi + 0x8]
        add     esi, edx
        inc     ebx
        cmp     ebx, ecx
        jl      L_df5f
        jmp     L_e989
L_e045:
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        lea     ebx, [edi + 0xf]
        jz      L_e0b7
        mov     edx, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax + 0xc]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        push    ebx
        push    0x79b8c8
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        add     esp, 0x20
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [edi + 0x4]
        mov     edx, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax + 0xc]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        push    ebx
        push    0x79b8c8
        call    FUN_00728fd0
        add     esp, 0x18
        jmp     L_e985
L_e0b7:
        push    ebx
        push    0x79b8b4
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79b8b4
        jmp     L_e97d
L_e0f6:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_e1e8
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_e10e:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     edx, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edx + ebx*0x4]
        test    ecx, ecx
        lea     eax, [edx + ebx*0x4]
        jz      L_e186
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x70]
        push    ecx
        push    edx
        call    FUN_00733700
        mov     ecx, dword ptr [esp + 0x70]
        push    ecx
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b8a0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0x18
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [esp + 0x70]
        push    eax
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b8a0
        call    FUN_00728fd0
        add     esp, 0x10
        jmp     L_e1d0
L_e186:
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b884
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b884
        call    FUN_00728fd0
        add     esp, 0xc
L_e1d0:
        add     esi, dword ptr [esp + 0xc]
        xor     edx, edx
        mov     dx, word ptr [edi + 0x8]
        inc     ebx
        cmp     ebx, edx
        jl      L_e10e
        jmp     L_e989
L_e1e8:
        mov     ebx, dword ptr [edi + 0x4]
        test    ebx, ebx
        jz      L_e260
        push    esi
        push    0x10
        call    FUN_007275f0
        lea     eax, [esp + 0xac]
        push    eax
        push    ebx
        call    FUN_00733700
        mov     ecx, dword ptr [esp + 0xac]
        push    ecx
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b874
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [esp + 0xac]
        push    eax
        push    ebx
        push    ebx
        push    0x79b874
        call    FUN_00728fd0
        add     esp, 0x10
        jmp     L_e985
L_e260:
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b85c
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79b85c
        jmp     L_e97d
L_e2a2:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_e3b6
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_e2ba:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     edx, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edx + ebx*0x4]
        test    ecx, ecx
        jz      L_e354
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x10]
        push    edx
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0x4]
        push    edx
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x8]
        push    edx
        mov     edx, dword ptr [ecx + 0x20]
        push    eax
        push    edx
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b82c
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x38]
        add     esp, 0x28
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     ecx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [ecx + ebx*0x4]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        mov     edx, dword ptr [eax + 0x10]
        push    edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx + 0x8]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx + 0x20]
        push    ecx
        push    eax
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b82c
        call    FUN_00728fd0
        add     esp, 0x20
        jmp     L_e39e
L_e354:
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b814
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b814
        call    FUN_00728fd0
        add     esp, 0xc
L_e39e:
        add     esi, dword ptr [esp + 0xc]
        xor     edx, edx
        mov     dx, word ptr [edi + 0x8]
        inc     ebx
        cmp     ebx, edx
        jl      L_e2ba
        jmp     L_e989
L_e3b6:
        mov     ebx, dword ptr [edi + 0x4]
        test    ebx, ebx
        jz      L_e44b
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [eax + 0x10]
        push    edx
        mov     edx, dword ptr [ebx + 0x10]
        push    edx
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x8]
        push    edx
        mov     edx, dword ptr [ebx + 0x4]
        push    eax
        mov     eax, dword ptr [edx + 0x20]
        push    eax
        lea     ecx, [edi + 0xf]
        push    ecx
        push    0x79b7e8
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x30]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        add     esp, 0x24
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        mov     edx, dword ptr [eax + 0x10]
        push    edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx + 0x8]
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx + 0x20]
        push    ecx
        push    eax
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b7e8
        call    FUN_00728fd0
        add     esp, 0x1c
        jmp     L_e985
L_e44b:
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b7d4
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79b7d4
        jmp     L_e97d
L_e48d:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_e68f
        xor     ebx, ebx
        test    ax, ax
        mov     dword ptr [esp + 0x18], ebx
        jbe     L_e989
L_e4a9:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edx + ebx*0x4]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      L_e629
        mov     ebx, dword ptr [eax + 0x44]
        fld     dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        add     ebx, 0x20
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_0075db4a
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x10]
        call    FUN_0075db4a
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        fld     dword ptr [eax + 0x38]
        sub     esp, 0x8
        fmul    dword ptr [g_79b7d0]
        sub     esp, 0x8
        sub     esp, 0x8
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x34]
        fmul    dword ptr [g_79b7d0]
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [eax + 0x30]
        fmul    dword ptr [g_79b7d0]
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp]
        fld     dword ptr [eax + 0x1c]
        call    FUN_0075db4a
        mov     ecx, dword ptr [esp + 0x3c]
        fld     dword ptr [ecx + 0x18]
        push    eax
        call    FUN_0075db4a
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x14]
        push    edx
        push    eax
        push    ebx
        mov     ebx, dword ptr [esp + 0x4c]
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b778
        lea     ecx, [esp + 0x4c]
        push    ecx
        lea     edx, [esp + 0x54]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x54]
        mov     ecx, dword ptr [esp + 0x58]
        add     esp, 0x48
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     edx, dword ptr [edi + 0x4]
        mov     ebx, dword ptr [edx + ebx*0x4]
        mov     eax, dword ptr [ebx + 0x44]
        fld     dword ptr [ebx + 0x14]
        mov     dword ptr [esp + 0x14], eax
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x10]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x38]
        fmul    dword ptr [g_79b7d0]
        push    eax
        sub     esp, 0x8
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp]
        fld     dword ptr [ebx + 0x34]
        fmul    dword ptr [g_79b7d0]
        sub     esp, 0x8
        sub     esp, 0x8
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x30]
        fmul    dword ptr [g_79b7d0]
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp]
        fld     dword ptr [ebx + 0x1c]
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x18]
        push    eax
        call    FUN_0075db4a
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [esp + 0x48]
        push    ecx
        mov     ecx, dword ptr [esp + 0x44]
        push    edx
        push    eax
        push    ecx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b778
        call    FUN_00728fd0
        mov     ebx, dword ptr [esp + 0x58]
        add     esp, 0x40
        jmp     L_e673
L_e629:
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b760
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     ecx, esi
        push    ecx
        add     edx, 0x10
        push    edx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b760
        call    FUN_00728fd0
        add     esp, 0xc
L_e673:
        add     esi, dword ptr [esp + 0xc]
        xor     eax, eax
        mov     ax, word ptr [edi + 0x8]
        inc     ebx
        mov     dword ptr [esp + 0x18], ebx
        cmp     ebx, eax
        jl      L_e4a9
        jmp     L_e989
L_e68f:
        mov     ebx, dword ptr [edi + 0x4]
        test    ebx, ebx
        jz      L_e7e6
        push    esi
        push    0x10
        call    FUN_007275f0
        fld     dword ptr [ebx + 0x14]
        mov     eax, dword ptr [ebx + 0x44]
        mov     dword ptr [esp + 0x14], eax
        add     eax, 0x20
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x10]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x38]
        fmul    dword ptr [g_79b7d0]
        push    eax
        sub     esp, 0x8
        sub     esp, 0x8
        fmul    dword ptr [g_79b7cc]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [ebx + 0x34]
        fmul    dword ptr [g_79b7d0]
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x30]
        fmul    dword ptr [g_79b7d0]
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp]
        fld     dword ptr [ebx + 0x1c]
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x18]
        push    eax
        call    FUN_0075db4a
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [esp + 0x44]
        push    ecx
        push    edx
        push    eax
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b710
        lea     ecx, [esp + 0x48]
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [esp + 0x54]
        add     esp, 0x44
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        mov     ebx, dword ptr [edi + 0x4]
        fld     dword ptr [ebx + 0x38]
        mov     edx, dword ptr [ebx + 0x44]
        fmul    dword ptr [g_79b7d0]
        mov     dword ptr [esp + 0x14], edx
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp + 0x20]
        fld     dword ptr [ebx + 0x14]
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x10]
        push    eax
        call    FUN_0075db4a
        mov     ecx, dword ptr [esp + 0x24]
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        push    eax
        push    ecx
        fld     dword ptr [ebx + 0x34]
        sub     esp, 0x8
        fmul    dword ptr [g_79b7d0]
        fmul    dword ptr [g_79b7cc]
        fstp    qword ptr [esp]
        push    eax
        fld     dword ptr [ebx + 0x1c]
        push    ecx
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x18]
        push    eax
        call    FUN_0075db4a
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [esp + 0x44]
        push    ecx
        push    edx
        push    eax
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b710
        call    FUN_00728fd0
        add     esp, 0x3c
        jmp     L_e985
L_e7e6:
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b6fc
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79b6fc
        jmp     L_e97d
L_e828:
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jz      L_e8f2
        xor     ebx, ebx
        test    ax, ax
        jbe     L_e989
L_e840:
        push    esi
        push    0x10
        call    FUN_007275f0
        mov     edx, dword ptr [edi + 0x4]
        cmp     dword ptr [edx + ebx*0x4], 0x0
        lea     eax, [edi + 0xf]
        push    ebx
        push    eax
        jz      L_e895
        push    0x79b6e0
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b6e0
        jmp     L_e8d2
L_e895:
        push    0x79b6c4
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x14
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        lea     eax, [edi + 0xf]
        push    eax
        push    0x79b6c4
L_e8d2:
        call    FUN_00728fd0
        add     esi, dword ptr [esp + 0x18]
        xor     edx, edx
        mov     dx, word ptr [edi + 0x8]
        add     esp, 0xc
        inc     ebx
        cmp     ebx, edx
        jl      L_e840
        jmp     L_e989
L_e8f2:
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        jz      L_e940
        push    esi
        push    0x10
        call    FUN_007275f0
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b6ac
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     edx, esi
        push    edx
        add     eax, 0x10
        push    eax
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79b6ac
        jmp     L_e97d
L_e940:
        lea     ebx, [edi + 0xf]
        push    ebx
        push    0x79b694
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0x10
        push    0x7f000000
        add     eax, esi
        push    eax
        add     ecx, 0x10
        push    ecx
        push    esi
        push    0x10
        call    FUN_006be9e0
        push    ebx
        push    0x79b694
L_e97d:
        call    FUN_00728fd0
        add     esp, 0x8
L_e985:
        add     esi, dword ptr [esp + 0xc]
L_e989:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     L_d2a9
L_e993:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
