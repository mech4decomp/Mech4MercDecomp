/*
 * FUN_007161a0 (1062 B) — Validate/process a batch of light/vertex
 * structures (0x30 bytes each) with FPU range checks and debug asserts.
 *
 * __stdcall RET 8, two params (count in EBP+0xc, base ptr in EBP+0x8).
 * For each element: fix up color channels, assert float ranges via
 * fnstsw/test-ah compares, and optionally call FUN_00704a80.
 *
 * Uses fnstsw ax (no-WAIT DF E0) + test ah,imm8 (F6 C4) which MSVC6
 * inline asm cannot encode natively -> __emit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006fabf0(void);
extern void FUN_00704a80(void);

extern int g_87c5dc;
extern int g_8aae5c;
extern char g_87bc35;
extern int g_87c298;
extern int g_858aa8;
extern int g_87c1fc;
extern int g_858940;
extern int g_858944;

extern float g_76c5b0;
extern float g_76d064;
extern float g_87c294;
extern float g_87c290;
extern float g_87c28c;
extern float g_87c288;
extern float g_87c2c8;
extern float g_87c2c4;

extern char g_7a2488[];
extern char g_7a247c[];
extern char g_7a2468[];
extern char g_7a2454[];
extern char g_7a240c[];
extern char g_7a23c4[];
extern char g_7a2494[];
extern char g_7a23bc[];
extern char g_7a23b4[];

__declspec(naked) void FUN_007161a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [g_87c5dc]
        mov     ecx, eax
        shl     ecx, 0x5
        add     edx, ecx
        test    eax, eax
        mov     dword ptr [g_87c5dc], edx
        jbe     L_65c7
        mov     edx, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        lea     esi, [edx + 0x10]
        mov     ebx, eax
        mov     edi, 0xff81ff81
    L_61d1:
        mov     eax, dword ptr [g_8aae5c]
        test    eax, eax
        jz      L_621a
        mov     cl, byte ptr [g_87bc35]
        test    cl, cl
        jnz     L_621a
        test    al, 0x1
        jz      L_61f2
        mov     ecx, dword ptr [esi]
        or      ecx, 0xff000000
        jmp     L_61fe
    L_61f2:
        test    al, 0x8
        jz      L_6200
        mov     ecx, dword ptr [esi]
        and     ecx, 0xff000000
    L_61fe:
        mov     dword ptr [esi], ecx
    L_6200:
        test    al, 0x2
        jz      L_620d
        mov     eax, dword ptr [esi]
        or      eax, 0xffffff
        jmp     L_6218
    L_620d:
        test    al, 0x4
        jz      L_621a
        mov     eax, dword ptr [esi]
        and     eax, 0xffffff
    L_6218:
        mov     dword ptr [esi], eax
    L_621a:
        fld     dword ptr [esi - 0x4]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF  /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_6245
        fld     dword ptr [esi - 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7a2488
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_6245
        int     3
    L_6245:
        fld     dword ptr [esi - 0x8]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_6265
        fld     dword ptr [esi - 0x8]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_6280
    L_6265:
        fld     dword ptr [esi - 0x8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7a247c
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_6280
        int     3
    L_6280:
        cmp     dword ptr [esi + 0x8], edi
        jz      L_628a
        cmp     dword ptr [esi + 0xc], edi
        jnz     L_629c
    L_628a:
        push    offset g_7a2468
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_629c
        int     3
    L_629c:
        cmp     dword ptr [esi + 0x10], edi
        jz      L_62a6
        cmp     dword ptr [esi + 0x14], edi
        jnz     L_62b8
    L_62a6:
        push    offset g_7a2454
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_62b8
        int     3
    L_62b8:
        mov     eax, dword ptr [g_87c298]
        test    eax, eax
        jz      L_649a
        mov     eax, dword ptr [g_858aa8]
        test    eax, eax
        jnz     L_649a
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_87c294]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_6312
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_87c290]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6312
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [g_87c28c]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_6312
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [g_87c288]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      L_636a
    L_6312:
        fld     dword ptr [g_87c28c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [g_87c294]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        fld     dword ptr [g_87c288]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x10]
        sub     esp, 0x8
        fld     dword ptr [g_87c290]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [esi + 0xc]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x8]
        fstp    qword ptr [esp]
        push    offset g_7a240c
        call    FUN_006fabf0
        add     esp, 0x34
        test    eax, eax
        jz      L_636a
        int     3
    L_636a:
        fld     dword ptr [esi + 0x10]
        fcomp   dword ptr [g_87c294]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_63aa
        fld     dword ptr [esi + 0x10]
        fcomp   dword ptr [g_87c290]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_63aa
        fld     dword ptr [esi + 0x14]
        fcomp   dword ptr [g_87c28c]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_63aa
        fld     dword ptr [esi + 0x14]
        fcomp   dword ptr [g_87c288]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      L_6402
    L_63aa:
        fld     dword ptr [g_87c28c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [g_87c294]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        fld     dword ptr [g_87c288]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x10]
        sub     esp, 0x8
        fld     dword ptr [g_87c290]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [esi + 0x14]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x10]
        fstp    qword ptr [esp]
        push    offset g_7a23c4
        call    FUN_006fabf0
        add     esp, 0x34
        test    eax, eax
        jz      L_6402
        int     3
    L_6402:
        fld     dword ptr [esi + 0x18]
        fcomp   dword ptr [g_87c294]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_6442
        fld     dword ptr [esi + 0x18]
        fcomp   dword ptr [g_87c290]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6442
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_87c28c]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_6442
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_87c288]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      L_649a
    L_6442:
        fld     dword ptr [g_87c28c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [g_87c294]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        fld     dword ptr [g_87c288]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x10]
        sub     esp, 0x8
        fld     dword ptr [g_87c290]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [esi + 0x1c]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x18]
        fstp    qword ptr [esp]
        push    offset g_7a2494
        call    FUN_006fabf0
        add     esp, 0x34
        test    eax, eax
        jz      L_649a
        int     3
    L_649a:
        mov     eax, dword ptr [g_87c1fc]
        test    eax, eax
        jnz     L_652a
        fld     dword ptr [esi - 0x10]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_64c7
        fild    dword ptr [g_858940]
        fcomp   dword ptr [esi - 0x10]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_64e2
    L_64c7:
        fld     dword ptr [esi - 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7a23bc
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_64e2
        int     3
    L_64e2:
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_6506
        fild    dword ptr [g_858944]
        fcomp   dword ptr [esi - 0xc]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_65ba
    L_6506:
        fld     dword ptr [esi - 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7a23b4
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_65ba
        int     3
        jmp     L_65ba
    L_652a:
        cmp     eax, 0x2
        jnz     L_65ba
        push    0x0
        push    0x0
        push    0x0
        push    0x1
        call    FUN_00704a80
        test    eax, eax
        jz      L_65ba
        fld     dword ptr [esi - 0x10]
        fcomp   dword ptr [g_87c2c8]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_6564
        fld     dword ptr [esi - 0x10]
        fcomp   dword ptr [g_87c2c4]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_657f
    L_6564:
        fld     dword ptr [esi - 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7a23bc
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_657f
        int     3
    L_657f:
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_87c2c8]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_659f
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_87c2c4]
        __emit 0xDF  /* fnstsw ax no-WAIT */
        __emit 0xE0
        __emit 0xF6  /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_65ba
    L_659f:
        fld     dword ptr [esi - 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7a23b4
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_65ba
        int     3
    L_65ba:
        add     esi, 0x30
        dec     ebx
        jnz     L_61d1
        pop     edi
        pop     esi
        pop     ebx
    L_65c7:
        pop     ebp
        ret     0x8
    }
}
