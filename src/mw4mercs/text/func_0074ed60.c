/*
 * FUN_0074ed60 (2552 B) — String-formatting dispatcher.
 *
 * Dispatches on (code-1) via a jump table (0x74f758) indexed by a byte
 * table (0x74f86c). Each case formats a value into the shared buffer
 * 0x8ba114 (via sprintf at 0x76b4f8, or the double variant at 0x76b420)
 * and returns a pointer to it.
 *
 * __stdcall, RET 8 (two stack params: code, value).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT function pointers */
extern void *g_0076b4f8;   /* sprintf */
extern void *g_0076b420;   /* sprintf (double) */

/* Direct callees */
extern void *__cdecl FUN_0074df50(void *a);
extern void *__cdecl FUN_0074ea60(void *a);
extern void *__cdecl FUN_0074ea90(void *a);
extern void *__cdecl FUN_0074eac0(void *a);
extern void *__cdecl FUN_0074eb30(void *a);
extern void *__cdecl FUN_0074ebf0(void *a);
extern void *__cdecl FUN_0074ec60(void *a);
extern void *__cdecl FUN_0074ec90(void *a);
extern void *__cdecl FUN_0074ed10(void *a);
extern void *__cdecl FUN_0074e670(void *a);
extern void *__cdecl FUN_0074e6c0(void *a);

__declspec(naked) void *__stdcall FUN_0074ed60(int code, int value)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        lea     ecx, [esi - 1]
        cmp     ecx, 0x96
        mov     dword ptr [esp + 0xc], eax
        ja      L_74f73a
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x74f86c]
        jmp     dword ptr [edx * 4 + 0x74f758]
L_74ed8b:
        push    eax
        push    0x7ac988
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74eda8:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74edb6
        mov     eax, 0x7ac978
L_74edb6:
        push    eax
        push    0x7ac968
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74edd3:
        push    eax
        call    FUN_0074df50
        push    eax
        push    0x7ac954
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74edf6:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74ee04
        mov     eax, 0x7ac978
L_74ee04:
        push    eax
        push    0x7ac93c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74ee21:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74ee2f
        mov     eax, 0x7ac978
L_74ee2f:
        push    eax
        push    0x7ac930
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74ee4c:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74ee5a
        mov     eax, 0x7ac978
L_74ee5a:
        push    eax
        push    0x7ac924
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74ee77:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74ee85
        mov     eax, 0x7ac978
L_74ee85:
        push    eax
        push    0x7ac918
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74eea2:
        push    eax
        call    FUN_0074ea60
        push    eax
        push    0x7ac90c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74eec5:
        push    eax
        call    FUN_0074ea90
        push    eax
        push    0x7ac8fc
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74eee8:
        push    eax
        push    0x7ac8e8
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74ef05:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74ef13
        mov     eax, 0x7ac978
L_74ef13:
        push    eax
        push    0x7ac8d8
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74ef30:
        push    eax
        push    0x7ac8d0
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74ef4d:
        push    eax
        push    0x7ac8c0
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74ef6a:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74ef78
        mov     eax, 0x7ac978
L_74ef78:
        push    eax
        push    0x7ac8b0
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74ef95:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74efa3
        mov     eax, 0x7ac978
L_74efa3:
        push    eax
        push    0x7ac89c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74efc0:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74efce
        mov     eax, 0x7ac978
L_74efce:
        push    eax
        push    0x7ac88c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74efeb:
        push    eax
        call    FUN_0074eac0
        push    eax
        push    0x7ac87c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f00e:
        push    eax
        call    FUN_0074eac0
        push    eax
        push    0x7ac86c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f031:
        push    eax
        call    FUN_0074eb30
        push    eax
        push    0x7ac860
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f054:
        push    eax
        call    FUN_0074eb30
        push    eax
        push    0x7ac850
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f077:
        push    eax
        call    FUN_0074ebf0
        push    eax
        push    0x7ac83c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f09a:
        push    eax
        call    FUN_0074ec60
        push    eax
        push    0x7ac830
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f0bd:
        push    eax
        call    FUN_0074ec90
        push    eax
        push    0x7ac824
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f0e0:
        push    eax
        push    0x7ac814
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f0fd:
        push    eax
        call    FUN_0074ec90
        push    eax
        push    0x7ac804
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f120:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f12e
        mov     eax, 0x7ac978
L_74f12e:
        push    eax
        push    0x7ac7f4
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f14b:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f159
        mov     eax, 0x7ac978
L_74f159:
        push    eax
        push    0x7ac7e0
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f176:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f184
        mov     eax, 0x7ac978
L_74f184:
        push    eax
        push    0x7ac7d0
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f1a1:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f1af
        mov     eax, 0x7ac978
L_74f1af:
        push    eax
        push    0x7ac7bc
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f1cc:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f1da
        mov     eax, 0x7ac978
L_74f1da:
        push    eax
        push    0x7ac7b0
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f1f7:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f205
        mov     eax, 0x7ac978
L_74f205:
        push    eax
        push    0x7ac7a4
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f222:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f230
        mov     eax, 0x7ac978
L_74f230:
        push    eax
        push    0x7ac794
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f24d:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f25b
        mov     eax, 0x7ac978
L_74f25b:
        push    eax
        push    0x7ac780
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f278:
        push    eax
        push    0x7ac770
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f295:
        push    eax
        call    FUN_0074ed10
        push    eax
        push    0x7ac760
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f2b8:
        fld     dword ptr [esp + 0xc]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7ac74c
        push    0x8ba114
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f2de:
        fld     dword ptr [esp + 0xc]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7ac73c
        push    0x8ba114
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f304:
        fld     dword ptr [esp + 0xc]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7ac728
        push    0x8ba114
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f32a:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f338
        mov     eax, 0x7ac978
L_74f338:
        push    eax
        push    0x7ac714
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f355:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f363
        mov     eax, 0x7ac978
L_74f363:
        push    eax
        push    0x7ac700
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f380:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f38e
        mov     eax, 0x7ac978
L_74f38e:
        push    eax
        push    0x7ac6ec
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f3ab:
        push    eax
        push    0x7ac15c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f3c8:
        push    eax
        call    FUN_0074e670
        push    eax
        push    0x7ac6d8
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f3eb:
        push    eax
        call    FUN_0074e670
        push    eax
        push    0x7ac6c4
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f40e:
        fld     dword ptr [esp + 0xc]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7ac118
        push    0x8ba114
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f434:
        push    eax
        push    0x7ac6b8
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f451:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f45f
        mov     eax, 0x7ac978
L_74f45f:
        push    eax
        push    0x7ac6a4
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f47c:
        push    eax
        push    0x7ac694
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f499:
        push    0x7ac688
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0x8
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f4b5:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f4c3
        mov     eax, 0x7ac978
L_74f4c3:
        push    eax
        push    0x7ac668
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f4e0:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f4ee
        mov     eax, 0x7ac978
L_74f4ee:
        push    eax
        push    0x7ac654
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f50b:
        push    eax
        call    FUN_0074e6c0
        push    eax
        push    0x7ac644
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f52e:
        push    eax
        call    FUN_0074e6c0
        push    eax
        push    0x7ac634
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f551:
        push    eax
        call    FUN_0074e6c0
        push    eax
        push    0x7ac6a4
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f574:
        push    eax
        call    FUN_0074ec90
        push    eax
        push    0x7ac624
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f597:
        push    eax
        push    0x7ac614
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f5b4:
        push    eax
        push    0x7ac600
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f5d1:
        push    eax
        push    0x7ac5e8
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f5ee:
        push    eax
        push    0x7ac5d4
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f60b:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f619
        mov     eax, 0x7ac978
L_74f619:
        push    eax
        push    0x7ac5c8
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f636:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f644
        mov     eax, 0x7ac978
L_74f644:
        push    eax
        push    0x7ac5b8
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f661:
        push    eax
        push    0x7ac5a8
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f67e:
        test    eax, eax
        mov     eax, 0x7ac980
        jnz     L_74f68c
        mov     eax, 0x7ac978
L_74f68c:
        push    eax
        push    0x7ac59c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f6a9:
        push    eax
        push    0x7ac58c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f6c6:
        push    eax
        push    0x7ac580
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f6e3:
        push    eax
        push    0x7ac574
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f700:
        push    eax
        push    0x7ac55c
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f71d:
        push    eax
        push    0x7ac548
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0xc
        mov     eax, 0x8ba114
        pop     esi
        ret     8
L_74f73a:
        push    eax
        push    esi
        push    0x7ac534
        push    0x8ba114
        call    dword ptr [g_0076b4f8]
        add     esp, 0x10
        mov     eax, 0x8ba114
        pop     esi
        ret     8
    }
}
