/*
 * MW4StatsDll_RecordGameSummary (956 B) - __stdcall (RET 0x5c).
 * SEH-guarded game-summary recorder. Computes FPU-derived summary
 * stats into global counters, then builds a set of string buffers
 * and writes them out.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001660(void);
extern void __cdecl FUN_1001ee10(void);
extern void __cdecl FUN_10005d50(void);
extern void __cdecl FUN_10004e50(void);
extern void __cdecl FUN_10001a10(void);
extern void __cdecl FUN_10005d20(void);
extern void __cdecl FUN_100027f0(void);

extern double g_100211e0;   /* FPU const @ 0x100211e0 */
extern float  g_100211dc;   /* FPU const @ 0x100211dc */
extern float  g_100211d8;   /* FPU const @ 0x100211d8 */
extern double g_100211d0;   /* FPU const @ 0x100211d0 */

extern int g_10026e80;
extern int g_10026e7c;
extern int g_10027044;
extern int g_10026e90;
extern int g_10026e70;
extern double g_10026e74;
extern int g_10026e6c;
extern int g_10026e68;
extern int g_10026e5c;
extern double g_10026e60;
extern int g_10026ed4;
extern int g_10026e84;
extern int g_10026f74;
extern int g_10026e8c;
extern int g_10026e88;
extern double g_10026e94;
extern int g_10026e9c;
extern int g_10026ea0;
extern int g_10026fa8;

__declspec(naked) void __cdecl MW4StatsDll_RecordGameSummary(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x1001f23b
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xa28
        push    esi
        push    edi
        push    0x100274e8
        mov     ecx, 0x10026ed8
        call    FUN_10001660
        mov     eax, dword ptr [g_10026e80]
        mov     ecx, dword ptr [g_10026e7c]
        xor     edi, edi
        add     ecx, eax
        cmp     ecx, edi
        mov     dword ptr [g_10027044], edi
        mov     dword ptr [g_10026e90], edi
        jz      L2491
        mov     eax, dword ptr [g_10026e70]
        cdq
        idiv    ecx
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        fstp    qword ptr [g_10026e74]
L2491:
        mov     edx, dword ptr [g_10026e6c]
        mov     eax, dword ptr [g_10026e68]
        add     eax, edx
        cmp     eax, edi
        mov     dword ptr [esp + 0x8], eax
        jz      L24b6
        fild    dword ptr [g_10026e5c]
        fidiv   dword ptr [esp + 0x8]
        fstp    qword ptr [g_10026e60]
L24b6:
        mov     ecx, dword ptr [g_10026ed4]
        mov     edx, dword ptr [g_10026e84]
        mov     eax, dword ptr [g_10026f74]
        lea     esi, [ecx + edx*1]
        lea     ecx, [esi + eax*1]
        add     ecx, dword ptr [g_10026e8c]
        mov     dword ptr [esp + 0x8], ecx
        jz      L24f5
        fild    dword ptr [g_10026e8c]
        fmul    dword ptr [g_100211dc]
        fidiv   dword ptr [esp + 0x8]
        call    FUN_1001ee10
        mov     dword ptr [g_10026e88], eax
        jmp     L24fb
L24f5:
        mov     dword ptr [g_10026e88], edi
L24fb:
        fld     qword ptr [g_10026e94]
        fcomp   qword ptr [g_100211e0]
        fnstsw ax
        test ah, 0x40
        jnz     L252c
        fild    dword ptr [g_10026e9c]
        fmul    dword ptr [g_100211d8]
        fdiv    qword ptr [g_10026e94]
        call    FUN_1001ee10
        mov     dword ptr [g_10026ea0], eax
        jmp     L2532
L252c:
        mov     dword ptr [g_10026ea0], edi
L2532:
        lea     eax, [esi + 0x1]
        cmp     eax, edi
        mov     dword ptr [esp + 0x8], eax
        jz      L2559
        fld     qword ptr [g_10026e94]
        fmul    qword ptr [g_100211d0]
        fidiv   dword ptr [esp + 0x8]
        call    FUN_1001ee10
        mov     dword ptr [g_10026fa8], eax
        jmp     L255f
L2559:
        mov     dword ptr [g_10026fa8], edi
L255f:
        push    0x10026ba0
        mov     ecx, 0x10027080
        call    FUN_10005d50
        lea     ecx, [esp + 0xc]
        call    FUN_10004e50
        cmp     dword ptr [esp + 0xa40], edi
        mov     dword ptr [esp + 0xa38], edi
        jz      L258e
        push    0x10024084
        jmp     L2593
L258e:
        push    0x10024094
L2593:
        lea     ecx, [esp + 0x18]
        call    FUN_10001660
        cmp     dword ptr [esp + 0xa44], edi
        jz      L25ac
        push    0x100240a8
        jmp     L25b1
L25ac:
        push    0x100240b8
L25b1:
        lea     ecx, [esp + 0xb0]
        call    FUN_10001660
        cmp     dword ptr [esp + 0xa48], edi
        jz      L25dc
        mov     edx, dword ptr [esp + 0xa4c]
        push    edx
        lea     ecx, [esp + 0x148]
        call    FUN_10001a10
        jmp     L25ed
L25dc:
        push    0x100240cc
        lea     ecx, [esp + 0x148]
        call    FUN_10001660
L25ed:
        cmp     dword ptr [esp + 0xa50], edi
        jz      L25fd
        push    0x100240e0
        jmp     L2602
L25fd:
        push    0x100240f0
L2602:
        lea     ecx, [esp + 0x310]
        call    FUN_10001660
        mov     eax, dword ptr [esp + 0xa54]
        mov     dword ptr [esp + 0x3a4], eax
        cmp     dword ptr [esp + 0xa58], edi
        jz      L262c
        push    0x10024104
        jmp     L2631
L262c:
        push    0x10024114
L2631:
        lea     ecx, [esp + 0x3ac]
        call    FUN_10001660
        cmp     dword ptr [esp + 0xa5c], edi
        jz      L265c
        mov     ecx, dword ptr [esp + 0xa60]
        push    ecx
        lea     ecx, [esp + 0x444]
        call    FUN_10001a10
        jmp     L266d
L265c:
        push    0x10024128
        lea     ecx, [esp + 0x444]
        call    FUN_10001660
L266d:
        cmp     dword ptr [esp + 0xa64], edi
        jz      L268c
        mov     edx, dword ptr [esp + 0xa68]
        push    edx
        lea     ecx, [esp + 0x6a4]
        call    FUN_10001a10
        jmp     L269d
L268c:
        push    0x1002413c
        lea     ecx, [esp + 0x6a4]
        call    FUN_10001660
L269d:
        cmp     dword ptr [esp + 0xa6c], edi
        jz      L26ad
        push    0x10024150
        jmp     L26b2
L26ad:
        push    0x10024160
L26b2:
        lea     ecx, [esp + 0x73c]
        call    FUN_10001660
        mov     eax, dword ptr [esp + 0xa70]
        push    eax
        lea     ecx, [esp + 0x7d4]
        call    FUN_10001a10
        cmp     dword ptr [esp + 0xa74], edi
        jz      L26e2
        push    0x10024174
        jmp     L26e7
L26e2:
        push    0x10024184
L26e7:
        lea     ecx, [esp + 0x86c]
        call    FUN_10001660
        mov     ecx, dword ptr [esp + 0xa78]
        push    ecx
        lea     ecx, [esp + 0x4dc]
        call    FUN_10001660
        cmp     dword ptr [esp + 0xa7c], edi
        jz      L2717
        push    0x10024198
        jmp     L271c
L2717:
        push    0x100241a8
L271c:
        lea     ecx, [esp + 0x1e0]
        call    FUN_10001660
        mov     edx, dword ptr [esp + 0xa80]
        push    edx
        lea     ecx, [esp + 0x278]
        call    FUN_10001a10
        mov     eax, dword ptr [esp + 0xa84]
        push    eax
        lea     ecx, [esp + 0x574]
        call    FUN_10001660
        cmp     dword ptr [esp + 0xa88], edi
        jz      L2770
        mov     ecx, dword ptr [esp + 0xa8c]
        inc     ecx
        push    ecx
        lea     ecx, [esp + 0x99c]
        call    FUN_10001a10
        jmp     L2784
L2770:
        mov     edx, dword ptr [esp + 0xa90]
        push    edx
        lea     ecx, [esp + 0x99c]
        call    FUN_10001660
L2784:
        mov     eax, dword ptr [esp + 0xa94]
        push    eax
        lea     ecx, [esp + 0x60c]
        call    FUN_10001660
        mov     ecx, dword ptr [esp + 0xa98]
        push    ecx
        lea     ecx, [esp + 0x904]
        call    FUN_10001660
        lea     edx, [esp + 0xc]
        push    edx
        mov     ecx, 0x10027080
        call    FUN_10005d20
        lea     ecx, [esp + 0xc]
        mov     esi, eax
        mov     dword ptr [esp + 0xa38], 0xffffffff
        call    FUN_100027f0
        mov     ecx, dword ptr [esp + 0xa30]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0xa34
        ret     0x5c
    }
}
