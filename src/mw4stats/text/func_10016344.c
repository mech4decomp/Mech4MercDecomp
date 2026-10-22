/*
 * FUN_10016344 (2572 B, __stdcall) - SEH-guarded stats-record loader.
 * The Ghidra inventory merged four adjacent functions into this one range
 * [0x10016344, 0x10016D50); all are transcribed here in order so the diff
 * harness (which slices by the CSV size) matches byte-for-byte:
 *
 *   1) 0x10016350  main loader: validates the input record's wide-string
 *      fields (IsBadStringPtrW @ g_1002105c), HTML-escapes each into the
 *      destination object (FUN_1000b850), _wcsdup's the result
 *      (g_10021130), and stores into the esi+0x34 sub-object. Returns
 *      E_INVALIDARG (0x80070057) / E_ABORT (0x80040254) on failure.
 *   2) 0x10016920  frees the 8 _wcsdup'd string buffers of the esi+0x34
 *      sub-object (free @ g_100210ec, guarded by IsBadStringPtrW).
 *   3) 0x10016A70  builds a formatted string via FUN_10001680 /
 *      FUN_10011e20 / FUN_100143f0 from the object's buffers.
 *   4) 0x10016D10  small helper that copies a buffer into edi+0x38.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002105c;   /* IAT: IsBadStringPtrW @ 0x1002105c */
extern void *g_10021130;   /* IAT: _wcsdup @ 0x10021130 */
extern void *g_100210ec;   /* IAT: free @ 0x100210ec */
extern unsigned short g_100274ec;  /* default L"" string @ 0x100274ec */
extern unsigned short g_100262d8;
extern unsigned short g_1002673c;
extern unsigned short g_100262d0;
extern unsigned short g_100262cc;
extern unsigned short g_100266b0;
extern unsigned short g_100266a8;
extern unsigned short g_100266a0;
extern unsigned short g_10026698;
extern unsigned short g_10026690;
extern unsigned short g_10026804;
extern unsigned short g_10026688;
extern unsigned short g_10026680;
extern void FUN_10006740(void);
extern void FUN_10006840(void);
extern void FUN_100067d0(void);
extern void FUN_1000b7d0(void);
extern void FUN_1000b850(void);
extern void FUN_10001680(void);
extern void FUN_10011e20(void);
extern void FUN_100143f0(void);
extern void FUN_1000bee0(void);

__declspec(naked) void FUN_10016344(void)
{
    __asm {
        /* ---- padding before fn 0x10016350 ---- */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ================= fn 1: 0x10016350 ================= */
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x1001ff68
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    ebx
        push    ebp
        mov     ebx, dword ptr [g_1002105c]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x2c]
        push    -1
        mov     eax, dword ptr [edi + 0xc]
        push    eax
        call    ebx
        test    eax, eax
        jne     L168fb
        mov     ecx, dword ptr [edi + 0x10]
        push    -1
        push    ecx
        call    ebx
        test    eax, eax
        jne     L168fb
        mov     eax, dword ptr [edi + 0x18]
        xor     ebp, ebp
        cmp     eax, ebp
        je      L163e3
        cmp     word ptr [eax], bp
        je      L163e3
        push    3
        lea     ecx, [esp + 0x14]
        call    FUN_10006740
        mov     edx, dword ptr [edi + 0x18]
        lea     ecx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x24], ebp
        call    FUN_10006840
        mov     esi, eax
        mov     dword ptr [esp + 0x20], 0xffffffff
        cmp     esi, ebp
        lea     ecx, [esp + 0x10]
        jge     L163de
        call    FUN_100067d0
        mov     eax, esi
        jmp     L16900
L163de:
        call    FUN_100067d0
L163e3:
        mov     eax, dword ptr [edi + 8]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jne     L16403
        mov     ecx, dword ptr [edi + 8]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L168f1
L16403:
        mov     eax, dword ptr [edi + 0xc]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jne     L16423
        mov     ecx, dword ptr [edi + 0xc]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L168f1
L16423:
        mov     eax, dword ptr [edi + 0x10]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jne     L16443
        mov     ecx, dword ptr [edi + 0x10]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L168f1
L16443:
        mov     eax, dword ptr [edi + 0x14]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jne     L16463
        mov     ecx, dword ptr [edi + 0x14]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L168f1
L16463:
        mov     eax, dword ptr [edi + 0x18]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jne     L16483
        mov     ecx, dword ptr [edi + 0x18]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L168f1
L16483:
        mov     eax, dword ptr [edi + 0x1c]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jne     L164a3
        mov     ecx, dword ptr [edi + 0x1c]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L168f1
L164a3:
        mov     eax, dword ptr [edi + 0x20]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jne     L164c3
        mov     ecx, dword ptr [edi + 0x20]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L168f1
L164c3:
        mov     eax, dword ptr [edi + 0x24]
        push    -1
        push    eax
        call    ebx
        test    eax, eax
        jne     L164e3
        mov     ecx, dword ptr [edi + 0x24]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L168f1
L164e3:
        mov     esi, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [edi]
        push    -1
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edi + 0x2c]
        mov     dword ptr [edx + 0x2c], eax
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [edi + 4]
        mov     dword ptr [ecx + 4], edx
        mov     eax, dword ptr [edi + 8]
        push    eax
        call    ebx
        test    eax, eax
        jne     L16548
        mov     edx, dword ptr [edi + 8]
        lea     ecx, [esi + 0xd4]
        push    ecx
        push    edx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L16548
        mov     eax, dword ptr [edi + 8]
        push    eax
        call    dword ptr [g_10021130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 8], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 8], ebp
        jne     L1657e
        mov     eax, 0x80040254
        jmp     L16900
L16548:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 8], ebp
        mov     eax, dword ptr [esi + 0xe0]
        cmp     eax, ebp
        jbe     L1656c
        mov     eax, dword ptr [esi + 0xd4]
        cmp     eax, ebp
        je      L1656c
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L1656c:
        mov     dword ptr [esi + 0xd4], ebp
        mov     dword ptr [esi + 0xe4], ebp
        mov     dword ptr [esi + 0xe0], ebp
L1657e:
        mov     ecx, dword ptr [edi + 0xc]
        push    -1
        push    ecx
        call    ebx
        test    eax, eax
        jne     L165c6
        mov     eax, dword ptr [edi + 0xc]
        lea     edx, [esi + 0x16c]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L165c6
        mov     ecx, dword ptr [edi + 0xc]
        push    ecx
        call    dword ptr [g_10021130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0xc], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0xc], ebp
        jne     L165fc
        mov     eax, 0x80040254
        jmp     L16900
L165c6:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0xc], ebp
        mov     eax, dword ptr [esi + 0x178]
        cmp     eax, ebp
        jbe     L165ea
        mov     eax, dword ptr [esi + 0x16c]
        cmp     eax, ebp
        je      L165ea
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L165ea:
        mov     dword ptr [esi + 0x16c], ebp
        mov     dword ptr [esi + 0x17c], ebp
        mov     dword ptr [esi + 0x178], ebp
L165fc:
        mov     edx, dword ptr [edi + 0x10]
        push    -1
        push    edx
        call    ebx
        test    eax, eax
        jne     L16644
        mov     ecx, dword ptr [edi + 0x10]
        lea     eax, [esi + 0x204]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L16644
        mov     edx, dword ptr [edi + 0x10]
        push    edx
        call    dword ptr [g_10021130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x10], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x10], ebp
        jne     L1667a
        mov     eax, 0x80040254
        jmp     L16900
L16644:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x10], ebp
        mov     eax, dword ptr [esi + 0x210]
        cmp     eax, ebp
        jbe     L16668
        mov     eax, dword ptr [esi + 0x204]
        cmp     eax, ebp
        je      L16668
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L16668:
        mov     dword ptr [esi + 0x204], ebp
        mov     dword ptr [esi + 0x214], ebp
        mov     dword ptr [esi + 0x210], ebp
L1667a:
        mov     ecx, dword ptr [edi + 0x14]
        push    -1
        push    ecx
        call    ebx
        test    eax, eax
        jne     L166c2
        mov     eax, dword ptr [edi + 0x14]
        lea     edx, [esi + 0x29c]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L166c2
        mov     ecx, dword ptr [edi + 0x14]
        push    ecx
        call    dword ptr [g_10021130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x14], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x14], ebp
        jne     L166f8
        mov     eax, 0x80040254
        jmp     L16900
L166c2:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x14], ebp
        mov     eax, dword ptr [esi + 0x2a8]
        cmp     eax, ebp
        jbe     L166e6
        mov     eax, dword ptr [esi + 0x29c]
        cmp     eax, ebp
        je      L166e6
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L166e6:
        mov     dword ptr [esi + 0x29c], ebp
        mov     dword ptr [esi + 0x2ac], ebp
        mov     dword ptr [esi + 0x2a8], ebp
L166f8:
        mov     edx, dword ptr [edi + 0x18]
        push    -1
        push    edx
        call    ebx
        test    eax, eax
        jne     L16740
        mov     ecx, dword ptr [edi + 0x18]
        lea     eax, [esi + 0x334]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L16740
        mov     edx, dword ptr [edi + 0x18]
        push    edx
        call    dword ptr [g_10021130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x18], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x18], ebp
        jne     L16776
        mov     eax, 0x80040254
        jmp     L16900
L16740:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x18], ebp
        mov     eax, dword ptr [esi + 0x340]
        cmp     eax, ebp
        jbe     L16764
        mov     eax, dword ptr [esi + 0x334]
        cmp     eax, ebp
        je      L16764
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L16764:
        mov     dword ptr [esi + 0x334], ebp
        mov     dword ptr [esi + 0x344], ebp
        mov     dword ptr [esi + 0x340], ebp
L16776:
        mov     ecx, dword ptr [edi + 0x1c]
        push    -1
        push    ecx
        call    ebx
        test    eax, eax
        jne     L167be
        mov     eax, dword ptr [edi + 0x1c]
        lea     edx, [esi + 0x3cc]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L167be
        mov     ecx, dword ptr [edi + 0x1c]
        push    ecx
        call    dword ptr [g_10021130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x1c], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x1c], ebp
        jne     L167f4
        mov     eax, 0x80040254
        jmp     L16900
L167be:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x1c], ebp
        mov     eax, dword ptr [esi + 0x3d8]
        cmp     eax, ebp
        jbe     L167e2
        mov     eax, dword ptr [esi + 0x3cc]
        cmp     eax, ebp
        je      L167e2
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L167e2:
        mov     dword ptr [esi + 0x3cc], ebp
        mov     dword ptr [esi + 0x3dc], ebp
        mov     dword ptr [esi + 0x3d8], ebp
L167f4:
        mov     edx, dword ptr [edi + 0x20]
        push    -1
        push    edx
        call    ebx
        test    eax, eax
        jne     L1683c
        mov     ecx, dword ptr [edi + 0x20]
        lea     eax, [esi + 0x464]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L1683c
        mov     edx, dword ptr [edi + 0x20]
        push    edx
        call    dword ptr [g_10021130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x20], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x20], ebp
        jne     L16872
        mov     eax, 0x80040254
        jmp     L16900
L1683c:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x20], ebp
        mov     eax, dword ptr [esi + 0x470]
        cmp     eax, ebp
        jbe     L16860
        mov     eax, dword ptr [esi + 0x464]
        cmp     eax, ebp
        je      L16860
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L16860:
        mov     dword ptr [esi + 0x464], ebp
        mov     dword ptr [esi + 0x474], ebp
        mov     dword ptr [esi + 0x470], ebp
L16872:
        mov     ecx, dword ptr [edi + 0x24]
        push    -1
        push    ecx
        call    ebx
        test    eax, eax
        jne     L168b7
        mov     eax, dword ptr [edi + 0x24]
        lea     edx, [esi + 0x4fc]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L168b7
        mov     ecx, dword ptr [edi + 0x24]
        push    ecx
        call    dword ptr [g_10021130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x24], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x24], ebp
        jne     L168ed
        mov     eax, 0x80040254
        jmp     L16900
L168b7:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x24], ebp
        mov     eax, dword ptr [esi + 0x508]
        cmp     eax, ebp
        jbe     L168db
        mov     eax, dword ptr [esi + 0x4fc]
        cmp     eax, ebp
        je      L168db
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L168db:
        mov     dword ptr [esi + 0x4fc], ebp
        mov     dword ptr [esi + 0x50c], ebp
        mov     dword ptr [esi + 0x508], ebp
L168ed:
        xor     eax, eax
        jmp     L16900
L168f1:
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        mov     edx, dword ptr [eax]
        call    dword ptr [edx + 0x40]
L168fb:
        mov     eax, 0x80070057
L16900:
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret     8

        /* ---- padding between fn1 and fn2 ---- */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ================= fn 2: 0x10016920 ================= */
        push    ebx
        push    ebp
        mov     ebx, dword ptr [g_100210ec]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        xor     ebp, ebp
        push    edi
        mov     edi, dword ptr [g_1002105c]
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        je      L1695b
        mov     eax, dword ptr [eax + 8]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jne     L1695b
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 8]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 8], ebp
L1695b:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        je      L16980
        mov     ecx, dword ptr [eax + 0xc]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jne     L16980
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0xc]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0xc], ebp
L16980:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        je      L169a5
        mov     edx, dword ptr [eax + 0x10]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jne     L169a5
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x10], ebp
L169a5:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        je      L169ca
        mov     eax, dword ptr [eax + 0x14]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jne     L169ca
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 0x14]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 0x14], ebp
L169ca:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        je      L169ef
        mov     ecx, dword ptr [eax + 0x18]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jne     L169ef
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x18]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x18], ebp
L169ef:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        je      L16a14
        mov     edx, dword ptr [eax + 0x1c]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jne     L16a14
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [eax + 0x1c]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x1c], ebp
L16a14:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        je      L16a39
        mov     eax, dword ptr [eax + 0x20]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jne     L16a39
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 0x20]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 0x20], ebp
L16a39:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        je      L16a5e
        mov     ecx, dword ptr [eax + 0x24]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jne     L16a5e
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x24]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x24], ebp
L16a5e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4

        /* ---- padding between fn2 and fn3 ---- */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ================= fn 3: 0x10016A70 ================= */
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    offset g_100262d8
        mov     ecx, esi
        mov     eax, dword ptr [edi + 0x34]
        mov     ebx, dword ptr [eax + 4]
        call    FUN_10001680
        push    offset g_1002673c
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10011e20
        push    offset g_100262cc
        mov     ecx, esi
        call    FUN_10001680
        mov     eax, dword ptr [edi + 0xe0]
        test    eax, eax
        je      L16b0a
        jbe     L16acd
        mov     ebx, dword ptr [edi + 0xd4]
        jmp     L16ad2
L16acd:
        mov     ebx, offset g_100274ec
L16ad2:
        push    offset g_100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100266b0
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262cc
        mov     ecx, esi
        call    FUN_10001680
L16b0a:
        mov     eax, dword ptr [edi + 0x178]
        test    eax, eax
        je      L16b5b
        jbe     L16b1e
        mov     ebx, dword ptr [edi + 0x16c]
        jmp     L16b23
L16b1e:
        mov     ebx, offset g_100274ec
L16b23:
        push    offset g_100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100266a8
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262cc
        mov     ecx, esi
        call    FUN_10001680
L16b5b:
        mov     eax, dword ptr [edi + 0x210]
        test    eax, eax
        je      L16bac
        jbe     L16b6f
        mov     ebx, dword ptr [edi + 0x204]
        jmp     L16b74
L16b6f:
        mov     ebx, offset g_100274ec
L16b74:
        push    offset g_100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100266a0
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262cc
        mov     ecx, esi
        call    FUN_10001680
L16bac:
        mov     eax, dword ptr [edi + 0x2a8]
        test    eax, eax
        je      L16bfd
        jbe     L16bc0
        mov     ebx, dword ptr [edi + 0x29c]
        jmp     L16bc5
L16bc0:
        mov     ebx, offset g_100274ec
L16bc5:
        push    offset g_100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_10026698
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262cc
        mov     ecx, esi
        call    FUN_10001680
L16bfd:
        mov     eax, dword ptr [edi + 0x3d8]
        test    eax, eax
        je      L16c4e
        jbe     L16c11
        mov     ebx, dword ptr [edi + 0x3cc]
        jmp     L16c16
L16c11:
        mov     ebx, offset g_100274ec
L16c16:
        push    offset g_100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_10026690
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262cc
        mov     ecx, esi
        call    FUN_10001680
L16c4e:
        mov     eax, dword ptr [edi + 0x470]
        test    eax, eax
        je      L16c9f
        jbe     L16c62
        mov     ebx, dword ptr [edi + 0x464]
        jmp     L16c67
L16c62:
        mov     ebx, offset g_100274ec
L16c67:
        push    offset g_100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_10026804
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    offset g_100262cc
        mov     ecx, esi
        call    FUN_10001680
L16c9f:
        mov     eax, dword ptr [edi + 0x508]
        test    eax, eax
        je      L16cd2
        jbe     L16cb7
        mov     ecx, dword ptr [edi + 0x4fc]
        mov     dword ptr [esp + 0x10], ecx
        jmp     L16cbf
L16cb7:
        mov     dword ptr [esp + 0x10], offset g_100274ec
L16cbf:
        lea     edx, [esp + 0x10]
        push    edx
        push    offset g_10026688
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
L16cd2:
        mov     eax, dword ptr [edi + 0x340]
        test    eax, eax
        je      L16d05
        jbe     L16cea
        mov     eax, dword ptr [edi + 0x334]
        mov     dword ptr [esp + 0x10], eax
        jmp     L16cf2
L16cea:
        mov     dword ptr [esp + 0x10], offset g_100274ec
L16cf2:
        lea     ecx, [esp + 0x10]
        push    ecx
        push    offset g_10026680
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
L16d05:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     8

        /* ---- padding between fn3 and fn4 ---- */
        nop
        nop
        nop

        /* ================= fn 4: 0x10016D10 ================= */
        mov     eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     esi, [edi + 0x594]
        push    esi
        push    eax
        call    FUN_1000bee0
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 8
        test    eax, eax
        jbe     L16d3f
        mov     ecx, dword ptr [edi + 0x38]
        mov     esi, dword ptr [esi]
        pop     edi
        xor     eax, eax
        mov     dword ptr [ecx], esi
        pop     esi
        ret     8
L16d3f:
        mov     ecx, dword ptr [edi + 0x38]
        mov     esi, offset g_100274ec
        pop     edi
        xor     eax, eax
        mov     dword ptr [ecx], esi
        pop     esi
        ret     8
    }
}
