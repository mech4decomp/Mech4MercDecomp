/*
 * FUN_00625B50 (2256 B) — __thiscall (ECX = this). Complex rendering/
 * layout routine: reads a global counter pair (0x007DAB44/0x007DAB40),
 * builds a color/position struct, applies FPU scaling, and drives a
 * string/object renderer via a vtable (0x008825C0 gate), with several
 * helper calls (FUN_0075DB4A float->int, FUN_0055E7F0/55E740/55E7D0
 * string formatting, FUN_006264F0/6264B0 list helpers).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_007dab44;
extern unsigned long g_007dab40;
extern float g_0076d064;
extern float g_0077dff8;
extern float g_0077dff4;
extern float g_0076d5f0;
extern float g_0076d978;
extern float g_0078d010;
extern unsigned long g_008825c0;
extern unsigned long g_007b55f4;
extern float g_008816d8;

extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00697990(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_00626420(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_0076015c(void);
extern void __cdecl FUN_0075e118(void);
extern void __cdecl FUN_0072ce60(void);
extern void __cdecl FUN_0055e7f0(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_007275f0(void);
extern void __cdecl FUN_0055e740(void);
extern void __cdecl FUN_00727630(void);
extern void __cdecl FUN_0055e7d0(void);
extern void __cdecl FUN_0072bd40(void);
extern void __cdecl FUN_006264f0(void);
extern void __cdecl FUN_006264b0(void);

__declspec(naked) void FUN_00625B50(void)
{
    __asm {
        sub     esp, 0x288
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     eax, dword ptr [ecx + 0xc]
        push    esi
        push    edi
        lea     edx, [ebp + 0x14]
        xor     eax, 0x85739531
        push    edx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x38], eax
        call    FUN_0040c410
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_0076d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      l_5ba3
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x18]
    l_5ba3:
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_0076d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      l_5bc2
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x1c]
    l_5bc2:
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x68]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esp + 0x68]
        mov     eax, dword ptr [esp + 0x6c]
        mov     esi, dword ptr [ebp + 0x54]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00697990
        fstp    dword ptr [esp + 0x28]
        cmp     dword ptr [esi + 0x80], -1
        jne     l_6413
        mov     al, byte ptr [ebp + 0x6e]
        test    al, al
        je      l_5c2c
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x64], 0x43680000
        mov     dword ptr [esp + 0x68], 0x43960000
        mov     dword ptr [esp + 0x6c], 0x3f666666
        lea     esi, [ebp + 0x20]
        push    ecx
        jmp     l_5c4c
    l_5c2c:
        lea     edx, [esp + 0x64]
        mov     dword ptr [esp + 0x64], 0x43680000
        mov     dword ptr [esp + 0x68], 0x43160000
        mov     dword ptr [esp + 0x6c], 0x3f666666
        lea     esi, [ebp + 0x20]
        push    edx
    l_5c4c:
        mov     ecx, esi
        call    FUN_0040c410
        push    esi
        lea     ecx, [esp + 0x1c]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_0076d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      l_5c7c
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x18]
    l_5c7c:
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_0076d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      l_5c9b
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x1c]
    l_5c9b:
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x68]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esp + 0x64]
        mov     eax, dword ptr [esp + 0x6c]
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [esp + 0x4c], ecx
        xor     ecx, ecx
        mov     dword ptr [esp + 0x54], eax
        mov     eax, dword ptr [ebp + 0x34]
        mov     cl, ah
        mov     dword ptr [esp + 0x50], edx
        xor     edx, edx
        mov     dword ptr [esp + 0x30], eax
        mov     dl, byte ptr [esp + 0x32]
        mov     ebx, 0xff
        mov     dword ptr [esp + 0x3c], ebx
        mov     edi, ecx
        mov     ecx, eax
        shr     eax, 0x18
        mov     esi, eax
        lea     eax, [edx + edx]
        and     ecx, ebx
        cmp     eax, ebx
        ja      l_5cf1
        mov     dword ptr [esp + 0x3c], eax
    l_5cf1:
        add     edi, edi
        cmp     edi, ebx
        ja      l_5cf9
        mov     ebx, edi
    l_5cf9:
        add     ecx, ecx
        cmp     ecx, 0xff
        mov     edi, 0xff
        ja      l_5d0a
        mov     edi, ecx
    l_5d0a:
        push    0xc8050f05
        sub     esp, 0xc
        lea     edx, [esp + 0x5c]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        lea     eax, [esp + 0x34]
        push    eax
        call    FUN_00626420
        fld     dword ptr [esp + 0x64]
        mov     eax, dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x3c]
        shl     esi, 8
        add     esi, eax
        shl     esi, 8
        add     esi, ebx
        shl     esi, 8
        add     esi, edi
        push    esi
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x64]
        fadd    dword ptr [esp + 0x3c]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x44]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x44]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eb90
        fld     dword ptr [esp + 0x50]
        fadd    dword ptr [g_0076d5f0]
        mov     eax, dword ptr [ebp + 0x5c]
        add     esp, 0x28
        test    eax, eax
        fstp    dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x60], 0
        fld     dword ptr [esp + 0x24]
        fadd    dword ptr [g_0076d5f0]
        fst     dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x4c]
        fsub    dword ptr [g_0076d978]
        fstp    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x5c]
        je      l_62ea
        mov     al, byte ptr [ebp + 0x6d]
        test    al, al
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [ecx]
        je      l_5dd5
        push    0x2e7
        jmp     l_5dda
    l_5dd5:
        push    0x2e6
    l_5dda:
        call    dword ptr [edx + 0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x98]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x98]
        repne   scasb
        mov     edi, dword ptr [ebp + 0x5c]
        not     ecx
        dec     ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x98]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        push    eax
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [ebp + 0x58]
        push    eax
        lea     eax, [esp + 0xa0]
        push    eax
        mov     ecx, esi
        call    FUN_00560420
        mov     eax, dword ptr [g_008825c0]
        test    eax, eax
        je      l_5e97
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005603e0
        fld     dword ptr [esp + 0x5c]
        fadd    dword ptr [esp + 0x50]
        push    ecx
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esp + 0x60]
        fadd    dword ptr [esp + 0x54]
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp]
        jmp     l_5eac
    l_5e97:
        push    0
        push    0
        mov     ecx, esi
        call    FUN_005603e0
        push    0x461c4000
        push    0x461c4000
    l_5eac:
        mov     ecx, esi
        call    FUN_00560400
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [esp + 0x74]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        fld     dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [g_008825c0]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], 0
        fisub   dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x5c]
        je      l_5f6b
        mov     edi, dword ptr [esi]
        push    1
        sub     esp, 0xc
        lea     edx, [esp + 0x68]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        mov     ecx, esi
        call    dword ptr [edi + 0x14]
        mov     al, byte ptr [ebp + 0x6c]
        test    al, al
        je      l_62ea
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 8]
        mov     edx, dword ptr [esi]
        mov     edi, eax
        push    1
        lea     eax, [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        fld     dword ptr [esp + 0x58]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x5c]
        mov     esi, eax
        add     esi, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x44], esi
        call    FUN_0075db4a
        mov     edx, dword ptr [esp + 0x38]
        lea     eax, [eax + edx - 2]
        push    -1
        mov     ecx, eax
        sub     ecx, edi
        push    ecx
        push    esi
        push    eax
        push    esi
        mov     dword ptr [esp + 0x5c], eax
        call    FUN_0055eed0
        add     esp, 0x14
        jmp     l_62ea
    l_5f6b:
        cmp     dword ptr [g_007b55f4], -1
        jne     l_5f88
        call    FUN_0076015c
        sub     eax, 0x3b5
        neg     eax
        sbb     eax, eax
        inc     eax
        mov     dword ptr [g_007b55f4], eax
    l_5f88:
        fld     dword ptr [esp + 0x58]
        mov     byte ptr [esp + 0x13], 0
        fadd    dword ptr [esp + 0x4c]
        fsub    dword ptr [g_0076d5f0]
        call    FUN_0075db4a
        mov     dword ptr [esp + 0x30], eax
    l_5fa4:
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x30]
        cmp     dword ptr [esp + 0x38], edx
        jbe     l_600e
        mov     edi, dword ptr [ebp + 0x70]
        mov     eax, dword ptr [edi]
        add     eax, ebx
        lea     ecx, [esp + eax + 0x98]
        push    ecx
        lea     edx, [esp + 0x9c]
        push    edx
        mov     byte ptr [esp + 0x1b], 1
        call    FUN_0075e118
        mov     ecx, eax
        sub     ecx, ebx
        mov     byte ptr [eax], 0
        mov     eax, dword ptr [ebp + 0x5c]
        lea     edx, [esp + 0x98]
        sub     ecx, edx
        push    0
        mov     byte ptr [eax + ecx], 0
        push    0
        lea     eax, [esp + 0xa0]
        mov     dword ptr [edi], ecx
        push    eax
        mov     ecx, esi
        call    FUN_00560420
        jmp     l_5fa4
    l_600e:
        mov     ecx, dword ptr [ebp + 0x70]
        mov     edi, dword ptr [ebp + 0x68]
        mov     eax, dword ptr [ecx]
        cmp     dword ptr [edi], eax
        jle     l_601c
        mov     dword ptr [edi], eax
    l_601c:
        mov     eax, dword ptr [g_007b55f4]
        test    eax, eax
        je      l_6038
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        je      l_6038
        mov     edx, dword ptr [edi]
        cmp     edx, dword ptr [ecx]
        jne     l_6038
        call    FUN_0072ce60
    l_6038:
        mov     eax, dword ptr [edi]
        add     eax, ebx
        mov     cl, byte ptr [esp + eax + 0x98]
        lea     eax, [esp + eax + 0x98]
        push    0
        push    0
        lea     edx, [esp + 0xa0]
        mov     byte ptr [esp + 0x1b], cl
        push    edx
        mov     ecx, esi
        mov     byte ptr [eax], 0
        call    FUN_00560420
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [esp + 0x74]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     edi, dword ptr [esi]
        push    1
        sub     esp, 0xc
        lea     eax, [esp + 0x68]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, esi
        call    dword ptr [edi + 0x14]
        mov     edx, dword ptr [esi]
        push    0
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        fld     dword ptr [esp + 0x58]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x34], eax
        call    FUN_0075db4a
        lea     edx, [esp + 0x7c]
        mov     dword ptr [esp + 0x7c], eax
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        call    FUN_0055e7f0
        mov     ecx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x3c]
        add     eax, ecx
        add     esp, 8
        mov     dword ptr [esp + 0x34], eax
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        fld     dword ptr [esp + 0x58]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x1c], 0
        fisub   dword ptr [esp + 0x18]
        add     eax, ecx
        mov     dword ptr [esp + 0x44], eax
        call    FUN_0075db4a
        mov     dword ptr [esp + 0x48], eax
        mov     al, byte ptr [ebp + 0x6c]
        test    al, al
        je      l_6164
        push    0
        push    0
        push    0
        push    0x34
        call    FUN_00704a80
        test    eax, eax
        je      l_6164
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 8]
        mov     ecx, dword ptr [esp + 0x48]
        push    -1
        mov     edx, ecx
        sub     edx, eax
        mov     eax, dword ptr [esp + 0x48]
        push    edx
        push    eax
        push    ecx
        push    eax
        call    FUN_0055eed0
        add     esp, 0x14
    l_6164:
        fild    dword ptr [esp + 0x44]
        mov     eax, dword ptr [ebp + 0x68]
        mov     dl, byte ptr [esp + 0x13]
        mov     dword ptr [esp + 0x94], 0
        fstp    dword ptr [esp + 0x8c]
        push    0
        fild    dword ptr [esp + 0x4c]
        push    0
        fstp    dword ptr [esp + 0x98]
        mov     ecx, dword ptr [eax]
        add     ecx, ebx
        mov     byte ptr [esp + ecx + 0xa0], dl
        mov     eax, dword ptr [eax]
        add     eax, ebx
        lea     ecx, [esp + eax + 0xa0]
        push    ecx
        mov     ecx, esi
        call    FUN_00560420
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x74]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x7c]
        mov     eax, dword ptr [esp + 0x34]
        push    edx
        push    eax
        call    FUN_007275f0
        mov     edi, dword ptr [esi]
        push    0
        sub     esp, 0xc
        lea     edx, [esp + 0x9c]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        mov     ecx, esi
        call    dword ptr [edi + 0x14]
        fld     dword ptr [esp + 0x24]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x30], eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x4c]
        fadd    dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x38], eax
        fsub    dword ptr [g_0076d5f0]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x74], eax
        fsub    dword ptr [g_0076d5f0]
        call    FUN_0075db4a
        mov     dword ptr [esp + 0x78], eax
        lea     eax, [esp + 0x78]
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        lea     edx, [esp + 0x40]
        push    edx
        lea     eax, [esp + 0x3c]
        push    eax
        call    FUN_0055e740
        mov     ecx, dword ptr [esp + 0x88]
        mov     edx, dword ptr [esp + 0x84]
        mov     eax, dword ptr [esp + 0x48]
        add     esp, 0x10
        push    ecx
        mov     ecx, dword ptr [esp + 0x34]
        push    edx
        push    eax
        push    ecx
        call    FUN_00727630
        mov     edx, dword ptr [g_008816d8]
        mov     dword ptr [esp + 0x88], 0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx
        call    dword ptr [eax + 8]
        mov     dword ptr [esp + 0x80], eax
        fild    dword ptr [esp + 0x80]
        lea     ecx, [esp + 0x88]
        push    ecx
        push    offset g_008816d8
        fstp    dword ptr [g_008816d8]
        call    FUN_0055e7d0
        fld     dword ptr [g_008816d8]
        lea     edx, [esp + 0x50]
        fmul    dword ptr [g_0078d010]
        push    edx
        lea     eax, [esp + 0x50]
        push    eax
        fstp    dword ptr [g_008816d8]
        call    FUN_0055e7f0
        mov     ecx, dword ptr [esp + 0x58]
        mov     edx, dword ptr [esp + 0x54]
        add     esp, 0x10
        push    ecx
        push    edx
        call    FUN_0072bd40
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [g_008816d8], eax
    l_62ea:
        mov     edi, dword ptr [ebp + 0x50]
        mov     eax, dword ptr [edi]
        add     ebp, 0x50
        cmp     eax, edi
        mov     dword ptr [esp + 0x14], eax
        je      l_63c3
    l_62fe:
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [eax + 0x18]
        push    edx
        call    FUN_005603e0
        fld     dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esp + 0x54]
        mov     ecx, dword ptr [eax + 0x18]
        fadd    dword ptr [esp + 0x2c]
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov     ecx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ecx + 0x18]
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x40]
        push    eax
        lea     eax, [esp + 0x74]
        push    eax
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], 0
        fild    qword ptr [esp + 0x18]
        lea     ecx, [esp + 0x14]
        fsubr   dword ptr [esp + 0x5c]
        fstp    dword ptr [esp + 0x5c]
        call    FUN_006264f0
        mov     esi, dword ptr [eax + 0x10]
        mov     ebx, dword ptr [esi]
        push    1
        sub     esp, 0xc
        lea     edx, [esp + 0x68]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        mov     ecx, esi
        call    dword ptr [ebx + 0x14]
        fld     dword ptr [esp + 0x5c]
        fcomp   dword ptr [esp + 0x28]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     l_63b9
        mov     eax, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax]
        cmp     eax, edi
        mov     dword ptr [esp + 0x14], eax
        jne     l_62fe
        jmp     l_63c3
    l_63b9:
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x14], eax
    l_63c3:
        xor     esi, esi
        xor     ecx, ecx
        cmp     eax, edi
        je      l_6413
    l_63cb:
        cmp     ecx, 0xf
        je      l_63db
        mov     eax, dword ptr [eax]
        inc     ecx
        cmp     eax, edi
        mov     dword ptr [esp + 0x14], eax
        jne     l_63cb
    l_63db:
        cmp     eax, edi
        je      l_6413
    l_63df:
        mov     ecx, dword ptr [eax + 0x18]
        cmp     ecx, esi
        je      l_63f0
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x14]
    l_63f0:
        push    ecx
        mov     dword ptr [eax + 0x18], esi
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, esp
        lea     edx, [esp + 0x1c]
        mov     dword ptr [eax], ecx
        push    edx
        mov     ecx, ebp
        call    FUN_006264b0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebp]
        mov     dword ptr [esp + 0x14], eax
        jne     l_63df
    l_6413:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x288
        ret
    }
}
