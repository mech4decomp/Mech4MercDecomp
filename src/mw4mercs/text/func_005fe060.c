/*
 * FUN_005fe060 (2630 B) — __thiscall (RET 0x10) mission/mech loader.
 *
 * Calls FUN_004f6ad0() (base init), initializes a large member block,
 * runs constructor loops (FUN_005fead0 x400 x2, FUN_0060ffa0 x0x20),
 * sets up mission-type flags by comparing the mission name against
 * "coliseum"/"factory"/"gladiatorpit"/"rubblepile"/"jungle"/"tropical",
 * builds an ABL script path (via FUN_005fd950 + jump tables), loads the
 * mission via FUN_0061c960, and finishes with a series of subsystem
 * inits. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004f6ad0(void);
extern void FUN_00416990(void);
extern void FUN_005fead0(void);
extern void FUN_0060ffa0(void);
extern void FUN_00602df0(void);
extern void FUN_00695640(void);
extern void FUN_00603360(void);
extern void FUN_006033c0(void);
extern void FUN_00603420(void);
extern void FUN_0065d2d0(void);
extern void *__cdecl FUN_004084d0(int n);
extern void __stdcall FUN_004084e0(void *p);
extern void FUN_006212f0(void);
extern float __cdecl FUN_00707e70(int n);
extern void FUN_00637ac0(void);
extern void FUN_00694600(void);
extern void FUN_006473c0(void);
extern void FUN_00412570(void);
extern void FUN_004128e0(void);
extern int __cdecl FUN_005fd950(void *p);
extern void FUN_00412950(void);
extern void *FUN_004125e0(void);
extern void FUN_00412740(void);
extern void FUN_00412780(void);
extern int __cdecl FUN_0061c960(void *a, void *b, void *c, void *d, void *e, void *f);
extern int __cdecl FUN_006fabf0(void *p);
extern void FUN_0064aff0(void);
extern int __cdecl FUN_006fab90(void *p);
extern void __cdecl FUN_0064b7b0(void *p);
extern void FUN_004d1f80(void);
extern void __cdecl FUN_006f4950(void *p);
extern void FUN_005d72b0(void);
extern void FUN_006f49a0(void);
extern void FUN_004d2330(void);
extern void FUN_004d21c0(void);
extern void FUN_00676060(void);
extern void FUN_005da9d0(void);
extern void FUN_005daac0(void);
extern void FUN_005e8080(void);
extern void FUN_005dd290(void);
extern void FUN_00600960(void);
extern void FUN_00659b70(void);

extern int g_007b8d8c;
extern int g_007b8d90;
extern int g_007b8d88;
extern int g_007dab44;
extern int g_007dab40;
extern char g_007f23dc;
extern char g_007dde2c;
extern short g_007db0ac;
extern short g_007db0ae;
extern int g_007f2440;
extern int g_007dd234;
extern int g_007b8c0c;
extern int g_0080590c;
extern int g_0076b2a0;
extern int g_0076b308;
extern int g_0076b320;
extern int g_0076b2d4;
extern int g_jt_5feaa8[];
extern int g_jt_5feabc[];

__declspec(naked) void *__stdcall FUN_005fe060(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x368
        mov     eax, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     ebx, ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_004f6ad0
        xor     esi, esi
        mov     word ptr [ebx + 0x1e8], 0xffff
        mov     word ptr [ebx + 0x1ea], si
        mov     dword ptr [ebx + 0x1f0], esi
        mov     dword ptr [ebx + 0x1ec], esi
        push    1
        lea     edi, [ebx + 0x2a4]
        mov     dword ptr [ebx + 0x284], esi
        mov     dword ptr [ebx + 0x280], esi
        push    esi
        mov     ecx, edi
        mov     dword ptr [ebx + 0x28c], esi
        mov     dword ptr [ebx + 0x288], esi
        mov     byte ptr [ebx + 0x2a0], 1
        mov     byte ptr [ebx + 0x2a1], 0
        call    FUN_00416990
        mov     dword ptr [edi], 0x78b328
        lea     edi, [ebx + 0x2b8]
        mov     dword ptr [ebp + 0x14], 0x190
L_e0ec:
        mov     ecx, edi
        call    FUN_005fead0
        mov     eax, dword ptr [ebp + 0x14]
        add     edi, 8
        dec     eax
        mov     dword ptr [ebp + 0x14], eax
        jnz     L_e0ec
        lea     edi, [ebx + 0xf38]
        mov     dword ptr [ebp + 0x14], 0x190
L_e10c:
        mov     ecx, edi
        call    FUN_005fead0
        mov     eax, dword ptr [ebp + 0x14]
        add     edi, 8
        dec     eax
        mov     dword ptr [ebp + 0x14], eax
        jnz     L_e10c
        lea     edi, [ebx + 0x1bb8]
        mov     dword ptr [ebp + 0x14], 0x20
L_e12c:
        mov     ecx, edi
        call    FUN_0060ffa0
        mov     eax, dword ptr [ebp + 0x14]
        add     edi, 0x30
        dec     eax
        mov     dword ptr [ebp + 0x14], eax
        jnz     L_e12c
        lea     ecx, [ebx + 0x21b8]
        call    FUN_0060ffa0
        lea     ecx, [ebx + 0x21e8]
        call    FUN_0060ffa0
        lea     ecx, [ebp + 0x17]
        push    ecx
        lea     edx, [ebp + 0x13]
        push    edx
        lea     ecx, [ebx + 0x221c]
        call    FUN_00602df0
        lea     ecx, [ebx + 0x2228]
        call    FUN_00695640
        mov     ecx, dword ptr [g_007b8d8c]
        mov     edx, dword ptr [g_007b8d90]
        or      eax, 0xffffffff
        mov     dword ptr [ebx + 0x2254], esi
        mov     dword ptr [ebx + 0x2280], ecx
        mov     dword ptr [ebx + 0x2250], esi
        mov     dword ptr [ebx + 0x2270], eax
        mov     dword ptr [ebx + 0x2274], eax
        mov     dword ptr [ebx + 0x2278], eax
        mov     eax, dword ptr [g_007b8d88]
        mov     dword ptr [ebx + 0x228c], ecx
        mov     dword ptr [ebx + 0x227c], eax
        lea     ecx, [ebx + 0x2294]
        mov     dword ptr [ebx + 0x2284], edx
        mov     dword ptr [ebx + 0x2288], eax
        push    esi
        mov     dword ptr [ebx + 0x2258], esi
        mov     dword ptr [ebx + 0x226c], esi
        mov     dword ptr [ebx + 0x2290], edx
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 4], esi
        call    FUN_00603360
        lea     ecx, [ebx + 0x229c]
        push    esi
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 4], esi
        call    FUN_006033c0
        lea     ecx, [ebx + 0x22a4]
        push    esi
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 4], esi
        call    FUN_00603420
        mov     dword ptr [ebx + 0x22b0], esi
        mov     dword ptr [ebx + 0x22ac], esi
        mov     dword ptr [ebx + 0x22b8], esi
        mov     dword ptr [ebx + 0x22b4], esi
        mov     dword ptr [ebx + 0x22c4], esi
        mov     dword ptr [ebx + 0x22c8], esi
        mov     dword ptr [ebx + 0x22cc], esi
        mov     dword ptr [ebx + 0x22d0], esi
        lea     ecx, [ebx + 0x22e0]
        mov     dword ptr [ebx + 0x22d4], esi
        mov     dword ptr [ebx + 0x22d8], esi
        call    FUN_0065d2d0
        push    0x2f8
        mov     dword ptr [ebx + 0x4ed0], esi
        mov     dword ptr [ebx], 0x78b268
        mov     byte ptr [ebx + 0x224c], 0
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, esi
        jz      L_e27c
        mov     ecx, eax
        call    FUN_006212f0
        jmp     L_e27e
L_e27c:
        xor     eax, eax
L_e27e:
        push    esi
        mov     dword ptr [ebx + 0x225c], eax
        call    FUN_00707e70
        fstp    dword ptr [ebx + 0x2260]
        push    esi
        call    FUN_00707e70
        fstp    dword ptr [ebx + 0x2268]
        push    esi
        call    FUN_00707e70
        fstp    dword ptr [ebx + 0x2264]
        mov     dword ptr [ebx + 0x22c0], esi
        mov     dword ptr [ebx + 0x22bc], esi
        mov     dword ptr [ebx + 0x290], 1
        mov     dword ptr [ebx + 0x294], 0x1e
        mov     dword ptr [ebx + 0x298], esi
        mov     dword ptr [ebx + 0x29c], esi
        call    FUN_00637ac0
        call    FUN_00694600
        call    FUN_006473c0
        xor     eax, eax
        mov     ecx, 0x3f
        lea     edi, [ebp - 0x160]
        rep     stosd
        stosw
        stosb
        mov     eax, dword ptr [ebx + 0x5c]
        push    0x5c
        push    eax
        call    dword ptr [g_0076b2a0]
        mov     edi, eax
        add     esp, 8
        cmp     edi, esi
        jz      L_e338
        push    0x2e
        push    edi
        call    dword ptr [g_0076b308]
        add     esp, 8
        cmp     eax, esi
        jz      L_e329
        sub     eax, edi
        dec     eax
        push    eax
        inc     edi
        push    edi
        lea     eax, [ebp - 0x160]
        push    eax
        jmp     L_e348
L_e329:
        push    0xff
        push    edi
        lea     ecx, [ebp - 0x160]
        push    ecx
        jmp     L_e348
L_e338:
        mov     eax, dword ptr [ebx + 0x5c]
        push    0xff
        push    eax
        lea     edx, [ebp - 0x160]
        push    edx
L_e348:
        call    dword ptr [g_0076b320]
        add     esp, 0xc
        lea     eax, [ebp - 0x160]
        push    eax
        lea     ecx, [ebp + 8]
        mov     byte ptr [ebp - 0x62], 0
        call    FUN_00412570
        lea     ecx, [ebp + 8]
        call    FUN_004128e0
        mov     edi, dword ptr [ebp + 8]

        /* "coliseum" */
        mov     eax, 0x78af94
L_e374:
        mov     dl, byte ptr [edi]
        mov     cl, dl
        cmp     dl, byte ptr [eax]
        jnz     L_e398
        test    cl, cl
        jz      L_e394
        mov     dl, byte ptr [edi + 1]
        mov     cl, dl
        cmp     dl, byte ptr [eax + 1]
        jnz     L_e398
        add     edi, 2
        add     eax, 2
        test    cl, cl
        jnz     L_e374
L_e394:
        xor     eax, eax
        jmp     L_e39d
L_e398:
        sbb     eax, eax
        sbb     eax, -1
L_e39d:
        cmp     eax, esi
        jnz     L_e3b0
        mov     dword ptr [ebx + 0x4ed0], 1
        jmp     L_e505
L_e3b0:
        /* "factory" */
        mov     edi, dword ptr [ebp + 8]
        mov     eax, 0x78af8c
L_e3b8:
        mov     dl, byte ptr [edi]
        mov     cl, dl
        cmp     dl, byte ptr [eax]
        jnz     L_e3dc
        test    cl, cl
        jz      L_e3d8
        mov     dl, byte ptr [edi + 1]
        mov     cl, dl
        cmp     dl, byte ptr [eax + 1]
        jnz     L_e3dc
        add     edi, 2
        add     eax, 2
        test    cl, cl
        jnz     L_e3b8
L_e3d8:
        xor     eax, eax
        jmp     L_e3e1
L_e3dc:
        sbb     eax, eax
        sbb     eax, -1
L_e3e1:
        cmp     eax, esi
        jnz     L_e3f4
        mov     dword ptr [ebx + 0x4ed0], 2
        jmp     L_e505
L_e3f4:
        /* "gladiatorpit" */
        mov     edi, dword ptr [ebp + 8]
        mov     eax, 0x78b0d0
L_e3fc:
        mov     dl, byte ptr [edi]
        mov     cl, dl
        cmp     dl, byte ptr [eax]
        jnz     L_e420
        test    cl, cl
        jz      L_e41c
        mov     dl, byte ptr [edi + 1]
        mov     cl, dl
        cmp     dl, byte ptr [eax + 1]
        jnz     L_e420
        add     edi, 2
        add     eax, 2
        test    cl, cl
        jnz     L_e3fc
L_e41c:
        xor     eax, eax
        jmp     L_e425
L_e420:
        sbb     eax, eax
        sbb     eax, -1
L_e425:
        cmp     eax, esi
        jnz     L_e438
        mov     dword ptr [ebx + 0x4ed0], 1
        jmp     L_e505
L_e438:
        /* "rubblepile" */
        mov     edi, dword ptr [ebp + 8]
        mov     eax, 0x78b0c4
L_e440:
        mov     dl, byte ptr [edi]
        mov     cl, dl
        cmp     dl, byte ptr [eax]
        jnz     L_e464
        test    cl, cl
        jz      L_e460
        mov     dl, byte ptr [edi + 1]
        mov     cl, dl
        cmp     dl, byte ptr [eax + 1]
        jnz     L_e464
        add     edi, 2
        add     eax, 2
        test    cl, cl
        jnz     L_e440
L_e460:
        xor     eax, eax
        jmp     L_e469
L_e464:
        sbb     eax, eax
        sbb     eax, -1
L_e469:
        cmp     eax, esi
        jnz     L_e47c
        mov     dword ptr [ebx + 0x4ed0], 2
        jmp     L_e505
L_e47c:
        /* "jungle" */
        mov     edi, dword ptr [ebp + 8]
        mov     eax, 0x78b0ec
L_e484:
        mov     dl, byte ptr [edi]
        mov     cl, dl
        cmp     dl, byte ptr [eax]
        jnz     L_e4a8
        test    cl, cl
        jz      L_e4a4
        mov     dl, byte ptr [edi + 1]
        mov     cl, dl
        cmp     dl, byte ptr [eax + 1]
        jnz     L_e4a8
        add     edi, 2
        add     eax, 2
        test    cl, cl
        jnz     L_e484
L_e4a4:
        xor     eax, eax
        jmp     L_e4ad
L_e4a8:
        sbb     eax, eax
        sbb     eax, -1
L_e4ad:
        cmp     eax, esi
        jnz     L_e4bd
        mov     dword ptr [ebx + 0x4ed0], 3
        jmp     L_e505
L_e4bd:
        /* "tropical" */
        mov     edi, dword ptr [ebp + 8]
        mov     esi, 0x78b0e0
L_e4c5:
        mov     cl, byte ptr [edi]
        mov     dl, byte ptr [esi]
        mov     al, cl
        cmp     cl, dl
        jnz     L_e4ed
        test    al, al
        jz      L_e4e9
        mov     dl, byte ptr [edi + 1]
        mov     cl, byte ptr [esi + 1]
        mov     al, dl
        cmp     dl, cl
        jnz     L_e4ed
        add     edi, 2
        add     esi, 2
        test    al, al
        jnz     L_e4c5
L_e4e9:
        xor     eax, eax
        jmp     L_e4f2
L_e4ed:
        sbb     eax, eax
        sbb     eax, -1
L_e4f2:
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        dec     ecx
        and     ecx, 3
        mov     dword ptr [ebx + 0x4ed0], ecx
        xor     esi, esi
L_e505:
        call    FUN_005dd290
        mov     ecx, ebx
        mov     byte ptr [g_007f23dc], 0
        call    FUN_00600960
        call    FUN_00659b70
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [eax + 0x108]
        lea     edi, [eax + 0x88]
        cmp     byte ptr [edi], 0
        mov     dword ptr [ebx + 0x1f4], edx
        mov     dword ptr [ebx + 0x27c], esi
        mov     byte ptr [ebx + 0x168], 1
        mov     byte ptr [ebp - 0x368], 0
        mov     byte ptr [ebp - 0x269], 0
        mov     dword ptr [ebp - 0x168], esi
        mov     dword ptr [ebp - 0x164], esi
        jz      L_e981
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17fc]
        test    al, al
        jz      L_e981
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebx + 0x1f8]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        push    edx
        lea     ecx, [ebp + 0x14]
        mov     dword ptr [ebp + 0x14], 0
        call    FUN_00412780
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        lea     eax, [edx + 0xc]
        xor     ecx, 0x85739531
        mov     esi, dword ptr [ecx + 0x50]
        test    esi, esi
        jz      L_e75c
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17]
        test    al, al
        jz      L_e75c
        lea     eax, [ebp - 0x160]
        push    eax
        call    FUN_005fd950
        mov     edi, dword ptr [esi + 0xa4]
        add     esp, 4
        test    al, al
        jz      L_e709
        cmp     edi, 4
        ja      L_e73e
        jmp     dword ptr [edi*4 + g_jt_5feaa8]
L_e61e:
        lea     ecx, [ebp + 0x14]
        call    FUN_00412950
        mov     ecx, dword ptr [ebp + 0x14]
        push    0x78b254
        push    ecx
        lea     ecx, [ebp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [ebp + 0x10]
L_e643:
        test    eax, eax
        jz      L_e73e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e73e
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_e73e
L_e667:
        lea     ecx, [ebp + 0x14]
        call    FUN_00412950
        mov     edx, dword ptr [ebp + 0x14]
        push    0x78b23c
        push    edx
        lea     ecx, [ebp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [ebp + 0x10]
        jmp     L_e643
L_e68e:
        lea     ecx, [ebp + 0x14]
        call    FUN_00412950
        mov     eax, dword ptr [ebp + 0x14]
        push    0x78b230
        push    eax
        lea     ecx, [ebp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [ebp + 0x10]
        jmp     L_e643
L_e6b5:
        lea     ecx, [ebp + 0x14]
        call    FUN_00412950
        mov     ecx, dword ptr [ebp + 0x14]
        push    0x78b220
        push    ecx
        lea     ecx, [ebp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [ebp + 0x10]
        jmp     L_e643
L_e6df:
        lea     ecx, [ebp + 0x14]
        call    FUN_00412950
        mov     edx, dword ptr [ebp + 0x14]
        push    0x78b20c
        push    edx
        lea     ecx, [ebp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [ebp + 0x10]
        jmp     L_e643
L_e709:
        cmp     edi, 4
        ja      L_e73e
        jmp     dword ptr [edi*4 + g_jt_5feabc]
L_e715:
        push    0x78b1d4
        jmp     L_e736
L_e71c:
        push    0x78b198
        jmp     L_e736
L_e723:
        push    0x78b164
        jmp     L_e736
L_e72a:
        push    0x78b12c
        jmp     L_e736
L_e731:
        push    0x78b0f4
L_e736:
        lea     ecx, [ebp + 0x14]
        call    FUN_00412780
L_e73e:
        cmp     edi, 6
        jl      L_e75c
        cmp     edi, 0xa
        jle     L_e74d
        cmp     edi, 0xc
        jnz     L_e75c
L_e74d:
        add     esi, 0x7f8
        push    esi
        lea     ecx, [ebp + 0x14]
        call    FUN_00412780
L_e75c:
        mov     ecx, dword ptr [ebp + 0x14]
        push    0
        push    0
        push    0
        push    0
        lea     eax, [ebp - 0x368]
        push    eax
        push    ecx
        call    FUN_0061c960
        mov     esi, eax
        xor     edi, edi
        add     esp, 0x18
        cmp     esi, edi
        mov     dword ptr [ebx + 0x278], esi
        jge     L_e8ee
        mov     al, byte ptr [g_007dde2c]
        test    al, al
        jz      L_e8e0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76cb8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x7dde30
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        lea     edi, [ebp - 0x269]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x7dde30
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77e7dc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7dde30
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    0xa
        lea     eax, [ebp - 0x60]
        rep     movsb
        mov     ecx, dword ptr [ebp - 0x168]
        push    eax
        push    ecx
        call    dword ptr [g_0076b2d4]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebp - 0x60]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7dde30
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x77e7d8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     edi, 0x7dde30
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x7884c4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7dde30
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        lea     edi, [ebp - 0x368]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7dde30
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    0x7dde30
        rep     movsb
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      L_e8de
        int     3
L_e8de:
        xor     edi, edi
L_e8e0:
        mov     dword ptr [ebx + 0x278], edi
        mov     dword ptr [ebx + 0x27c], edi
        jmp     L_e965
L_e8ee:
        push    0x40
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_e92f
        mov     dword ptr [eax], 0xffffffff
        mov     byte ptr [eax + 4], 0
        mov     dword ptr [eax + 0x20], 0xffffffff
        mov     dword ptr [eax + 0x24], edi
        mov     byte ptr [eax + 0x2c], 0
        mov     dword ptr [eax + 0x30], edi
        mov     dword ptr [eax + 0x34], edi
        mov     dword ptr [eax + 0x38], edi
        mov     byte ptr [eax + 0x3c], 0
        mov     byte ptr [eax + 0x3d], 0
        mov     byte ptr [eax + 0x3e], 0
        mov     byte ptr [eax + 0x3f], 0
        jmp     L_e931
L_e92f:
        xor     eax, eax
L_e931:
        push    esi
        mov     ecx, eax
        mov     dword ptr [ebx + 0x27c], eax
        call    FUN_0064aff0
        test    eax, eax
        jz      L_e955
        push    0x788314
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_e955
        int     3
L_e955:
        mov     ecx, dword ptr [ebx + 0x27c]
        push    0x78aee4
        call    FUN_0064b7b0
L_e965:
        mov     eax, dword ptr [ebp + 0x14]
        cmp     eax, edi
        jz      L_e996
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e996
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_e996
L_e981:
        mov     dword ptr [ebx + 0x278], esi
        mov     dword ptr [ebx + 0x27c], esi
        mov     byte ptr [ebx + 0x1f8], 0
        xor     edi, edi
L_e996:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dx, word ptr [ecx + 0x84]
        lea     eax, [ebx + 0x1e8]
        mov     word ptr [eax], dx
        mov     dx, word ptr [ecx + 0x86]
        mov     word ptr [eax + 2], dx
        mov     dx, word ptr [ecx + 0x84]
        cmp     dx, word ptr [g_007db0ac]
        mov     dword ptr [g_007f2440], edi
        jnz     L_e9da
        mov     cx, word ptr [ecx + 0x86]
        cmp     cx, word ptr [g_007db0ae]
        jz      L_ea47
L_e9da:
        push    1
        push    eax
        lea     ecx, [ebp - 0x44]
        call    FUN_004d1f80
        mov     eax, dword ptr [ebp - 0x44]
        push    4
        lea     edx, [ebp + 0xc]
        push    edx
        lea     ecx, [ebp - 0x44]
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [g_007dd234]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [g_007b8c0c]
        mov     esi, dword ptr [edx + ecx*4]
        push    eax
        call    FUN_006f4950
        push    0x54
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_ea2c
        lea     ecx, [ebp - 0x44]
        push    ecx
        push    esi
        mov     ecx, eax
        call    FUN_005d72b0
        mov     dword ptr [g_007f2440], eax
        jmp     L_ea32
L_ea2c:
        mov     dword ptr [g_007f2440], edi
L_ea32:
        call    FUN_006f49a0
        lea     ecx, [ebp - 0x44]
        call    FUN_004d2330
        lea     ecx, [ebp - 0x44]
        call    FUN_004d21c0
L_ea47:
        mov     dword ptr [g_0080590c], 0x580230
        mov     dword ptr [ebx + 0x4ed4], 1
        mov     dword ptr [ebx + 0x4ed8], edi
        call    FUN_00676060
        call    FUN_005da9d0
        call    FUN_005daac0
        mov     dword ptr [ebx + 0x22c0], edi
        mov     dword ptr [ebx + 0x22dc], edi
        call    FUN_005e8080
        mov     eax, dword ptr [ebp + 8]
        cmp     eax, edi
        jz      L_ea9b
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_ea9b
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_ea9b:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
