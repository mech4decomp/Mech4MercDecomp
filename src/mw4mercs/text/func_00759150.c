/*
 * FUN_00759150 (1211 B) — __thiscall. Builds a grid/tile object list: computes
 * tile counts from [this+4]/[this+8] (aligned up to 16), derives step sizes
 * via FPU helpers FUN_0075db86/4a, allocates tile nodes (0x88 bytes each,
 * FUN_006f3c80) chained via [node+0x80], fills per-node float fields, and
 * deduplicates/merges nodes (FUN_00758f90, FUN_006f4230).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00758f90(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);

extern double g_77b640;   /* double constant @ 0x77b640 */
extern double g_7aee78;   /* double constant @ 0x7aee78 */
extern float  g_76d064;   /* float constant @ 0x76d064 */
extern int    g_8492fc;   /* data @ 0x8492fc */

__declspec(naked) void __cdecl FUN_00759150(void)
{
    __asm {
        sub     esp, 0x54
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 8]
        mov     ecx, dword ptr [edi + 4]
        mov     dword ptr [esp + 0x10], eax
        and     eax, 0xf
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x14], ecx
        je      L_917b
        mov     edx, 0x10
        sub     edx, eax
        add     dword ptr [esp + 0x10], edx
L_917b:
        mov     eax, ecx
        and     eax, 0xf
        je      L_918d
        mov     ecx, 0x10
        sub     ecx, eax
        add     dword ptr [esp + 0x14], ecx
L_918d:
        xor     ebp, ebp
        mov     ebx, 8
        mov     dword ptr [edi + 0xc], ebp
        mov     dword ptr [esp + 0x30], ebx
        cmp     dword ptr [edi + 0xc], ebp
        __emit  0x0F                 /* jne rel32 (MSVC6 miscomputes offset across reloc sites) */
        __emit  0x85
        __emit  0x81
        __emit  0x00
        __emit  0x00
        __emit  0x00
L_919b:
        fld     qword ptr [g_77b640]
        fild    dword ptr [esp + 0x30]
        call    FUN_0075db86
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x14]
        xor     edx, edx
        div     ecx
        test    edx, edx
        jne     L_9217
        mov     esi, 8
        mov     dword ptr [edi + 0x10], ecx
        mov     dword ptr [esp + 0x1c], esi
L_91d2:
        fld     qword ptr [g_77b640]
        fild    dword ptr [esp + 0x1c]
        call    FUN_0075db86
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x10]
        xor     edx, edx
        div     ecx
        test    edx, edx
        je      L_9200
        dec     esi
        cmp     esi, 3
        mov     dword ptr [esp + 0x1c], esi
        jg      L_91d2
        jmp     L_9217
L_9200:
        fld     qword ptr [g_77b640]
        fild    dword ptr [esp + 0x1c]
        call    FUN_0075db86
        call    FUN_0075db4a
        mov     dword ptr [edi + 0xc], eax
L_9217:
        dec     ebx
        cmp     ebx, 3
        mov     dword ptr [esp + 0x30], ebx
        __emit  0x0F                 /* jg rel32 (MSVC6 miscomputes offset across reloc sites) */
        __emit  0x8F
        __emit  0x76
        __emit  0xFF
        __emit  0xFF
        __emit  0xFF
L_9225:
        mov     eax, dword ptr [esp + 0x14]
        xor     ebx, ebx
        cmp     eax, ebp
        jbe     L_931c
L_9233:
        mov     eax, dword ptr [esp + 0x10]
        xor     esi, esi
        cmp     eax, ebp
        jbe     L_930b
L_9241:
        cmp     esi, dword ptr [edi + 8]
        ja      L_92fa
        cmp     ebx, dword ptr [esp + 0x2c]
        ja      L_92fa
        mov     edx, dword ptr [g_8492fc]
        push    edx
        push    0x88
        call    FUN_006f3c80
        mov     ecx, dword ptr [edi + 0x18]
        cmp     ecx, ebp
        jne     L_9271
        mov     dword ptr [edi + 0x18], eax
        jmp     L_9289
L_9271:
        cmp     ecx, ebp
        mov     edx, ecx
        je      L_9283
L_9277:
        mov     edx, ecx
        mov     ecx, dword ptr [ecx + 0x80]
        cmp     ecx, ebp
        jne     L_9277
L_9283:
        mov     dword ptr [edx + 0x80], eax
L_9289:
        mov     ecx, dword ptr [edi + 0xc]
        mov     edx, dword ptr [edi + 0x10]
        mov     dword ptr [esp + 0x3c], esi
        mov     dword ptr [esp + 0x40], ebp
        fild    qword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x34], ebp
        mov     dword ptr [esp + 0x24], ecx
        fst     dword ptr [eax]
        mov     dword ptr [esp + 0x28], ebp
        fild    qword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [eax + 0x80], ebp
        fst     dword ptr [eax + 4]
        mov     dword ptr [eax + 0x84], ebp
        fild    qword ptr [esp + 0x24]
        mov     dword ptr [eax + 8], ebp
        mov     dword ptr [eax + 0x28], ebp
        mov     dword ptr [eax + 0x48], ebp
        fadd    st(0), st(2)
        mov     dword ptr [eax + 0x68], ebp
        fst     dword ptr [eax + 0x20]
        fld     st(1)
        fstp    dword ptr [eax + 0x24]
        fstp    dword ptr [eax + 0x40]
        fiadd   dword ptr [esp + 0x1c]
        fst     dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x38]
        fstp    dword ptr [eax + 0x44]
        mov     dword ptr [eax + 0x64], ecx
        fstp    dword ptr [eax + 0x60]
L_92fa:
        mov     ecx, dword ptr [edi + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        add     esi, ecx
        cmp     esi, eax
        jb      L_9241
L_930b:
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        add     ebx, ecx
        cmp     ebx, eax
        jb      L_9233
L_931c:
        mov     ecx, dword ptr [esp + 0x2c]
        imul    ecx, dword ptr [edi + 8]
        mov     esi, dword ptr [edi + 0x18]
        xor     eax, eax
        cmp     esi, ebp
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x38], ebp
        je      L_9535
L_9345:
        mov     edx, dword ptr [esp + 0x18]
        cmp     dword ptr [esp + 0x14], edx
        jne     L_93ef
        mov     eax, dword ptr [edi + 0xc]
        mov     ebx, dword ptr [edi + 0x10]
        cmp     eax, ebx
        jbe     L_935f
        mov     ebx, eax
L_935f:
        fld     qword ptr [g_77b640]
        mov     dword ptr [esp + 0x30], ebx
        fld     qword ptr [g_7aee78]
        mov     dword ptr [esp + 0x1c], 8
        call    FUN_0075db86
        fild    dword ptr [esp + 0x30]
        fstp    qword ptr [esp + 0x3c]
        fcom    qword ptr [esp + 0x3c]
        __emit  0xDF                 /* fnstsw ax (no 9B WAIT prefix) */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 1 (MSVC6 rejects test ah,imm8) */
        __emit  0xC4
        __emit  0x01
        jne     L_93c4
L_938f:
        call    FUN_0075db4a
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebx, eax
        imul    eax, ebx
        sub     ecx, eax
        jns     L_93c6
        mov     eax, dword ptr [esp + 0x1c]
        fld     qword ptr [g_77b640]
        dec     eax
        mov     dword ptr [esp + 0x1c], eax
        fild    dword ptr [esp + 0x1c]
        call    FUN_0075db86
        fcom    qword ptr [esp + 0x3c]
        __emit  0xDF                 /* fnstsw ax (no 9B WAIT prefix) */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 1 */
        __emit  0xC4
        __emit  0x01
        je      L_938f
L_93c4:
        __emit  0xDD                 /* fstp st(0) (MSVC6 emits wrong form) */
        __emit  0xD8
L_93c6:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, ebx
        imul    edx, ebx
        sub     ecx, edx
        mov     dword ptr [esp + 0x24], ecx
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00758f90
        mov     dword ptr [esp + 0x38], eax
        xor     eax, eax
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x1c], eax
L_93ef:
        fild    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [edi + 0xc]
        mov     edx, dword ptr [edi + 0x10]
        lea     ebx, [ecx + eax]
        fdivr   dword ptr [g_76d064]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x44], ebx
        mov     dword ptr [esp + 0x48], ebp
        add     eax, edx
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x50], ebp
        mov     dword ptr [esp + 0x3c], eax
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x30]
        fild    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fild    qword ptr [esp + 0x44]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x2c]
        fild    qword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0x10]
        fld     dword ptr [esi + 0x40]
        call    FUN_0075db4a
        mov     ecx, dword ptr [edi + 8]
        cmp     eax, ecx
        jle     L_947b
        mov     dword ptr [esp + 0x54], ecx
        mov     dword ptr [esp + 0x58], ebp
        fild    qword ptr [esp + 0x54]
        fst     dword ptr [esi + 0x20]
        fst     dword ptr [esi + 0x40]
        fsub    dword ptr [esi]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x2c]
L_947b:
        fld     dword ptr [esi + 0x44]
        call    FUN_0075db4a
        mov     ecx, dword ptr [edi + 4]
        cmp     eax, ecx
        jle     L_94a9
        __emit  0xDD                 /* fstp st(0) (MSVC6 emits wrong form) */
        __emit  0xD8
        mov     dword ptr [esp + 0x5c], ecx
        mov     dword ptr [esp + 0x60], ebp
        fild    qword ptr [esp + 0x5c]
        fst     dword ptr [esi + 0x44]
        fst     dword ptr [esi + 0x64]
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x1c]
L_94a9:
        mov     ecx, dword ptr [esp + 0x38]
        fst     dword ptr [esi + 0x5c]
        mov     eax, dword ptr [esp + 0x1c]
        fstp    dword ptr [esi + 0x7c]
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [esi + 0x84], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x18], edx
        mov     edx, eax
        mov     eax, ecx
        mov     dword ptr [esi + 0x58], eax
        or      eax, 0xffffffff
        mov     dword ptr [esi + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esi + 0x70], eax
        mov     dword ptr [esi + 0x50], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x10], eax
        mov     eax, 0x3f800000
        mov     dword ptr [esi + 0x78], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x6c], eax
        mov     dword ptr [esi + 0x4c], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0xc], eax
        mov     eax, ebx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x3c], edx
        mov     dword ptr [esi + 0x74], ebp
        mov     dword ptr [esi + 0x54], ebp
        mov     dword ptr [esi + 0x34], ebp
        mov     dword ptr [esi + 0x14], ebp
        mov     dword ptr [esp + 0x1c], eax
        jl      L_9527
        mov     edx, dword ptr [esp + 0x3c]
        xor     eax, eax
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x14], edx
L_9527:
        mov     esi, dword ptr [esi + 0x80]
        cmp     esi, ebp
        jne     L_9345
L_9535:
        mov     ebx, dword ptr [edi + 0x18]
        cmp     ebx, ebp
        je      L_9603
L_9540:
        mov     edx, dword ptr [ebx + 0x80]
        cmp     edx, ebp
        je      L_95f9
        mov     eax, dword ptr [ebx + 0x84]
        cmp     eax, dword ptr [edx + 0x84]
        jne     L_95f9
        fld     dword ptr [ebx + 0x20]
        lea     edi, [ebx + 0x20]
        fcomp   dword ptr [edx]
        __emit  0xDF                 /* fnstsw ax (no 9B WAIT prefix) */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x40 */
        __emit  0xC4
        __emit  0x40
        je      L_95f9
        fld     dword ptr [ebx + 0x40]
        fcomp   dword ptr [edx + 0x60]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x40 */
        __emit  0xC4
        __emit  0x40
        je      L_95f9
        fld     dword ptr [ebx + 0x24]
        fcomp   dword ptr [edx + 4]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x40 */
        __emit  0xC4
        __emit  0x40
        je      L_95f9
        fld     dword ptr [ebx + 0x44]
        fcomp   dword ptr [edx + 0x64]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x40 */
        __emit  0xC4
        __emit  0x40
        je      L_95f9
        fld     dword ptr [ebx + 0x38]
        fcomp   dword ptr [edx + 0x18]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x40 */
        __emit  0xC4
        __emit  0x40
        je      L_95f9
        fld     dword ptr [ebx + 0x58]
        fcomp   dword ptr [edx + 0x78]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x40 */
        __emit  0xC4
        __emit  0x40
        je      L_95f9
        fld     dword ptr [ebx + 0x3c]
        fcomp   dword ptr [edx + 0x1c]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x40 */
        __emit  0xC4
        __emit  0x40
        je      L_95f9
        fld     dword ptr [ebx + 0x5c]
        fcomp   dword ptr [edx + 0x7c]
        __emit  0xDF                 /* fnstsw ax */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 0x40 */
        __emit  0xC4
        __emit  0x40
        je      L_95f9
        lea     esi, [edx + 0x20]
        mov     ecx, 8
        rep     movsd
        lea     esi, [edx + 0x40]
        mov     ecx, 8
        lea     edi, [ebx + 0x40]
        rep     movsd
        mov     ecx, dword ptr [edx + 0x80]
        push    edx
        mov     dword ptr [ebx + 0x80], ecx
        call    FUN_006f4230
        mov     edx, ebx
L_95f9:
        cmp     edx, ebp
        mov     ebx, edx
        jne     L_9540
L_9603:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x54
        ret
    }
}
