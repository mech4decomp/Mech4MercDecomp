/*
 * FUN_005f2d50 (2041 B) — MechWarrior4::Vehicle static constructor.
 *
 * Allocates a 0xa8-byte Vehicle object, registers it via FUN_00501a20,
 * stores it in DAT_007f25c0, then allocates and registers a series of
 * state/parameter objects (ExecutionState, SpeedDemandMPS, ... TreadLength)
 * into the Vehicle at +0x44 (FUN_005016b0) and +0x74 (FUN_00500ec0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern void FUN_00501a20(void);
extern void FUN_00501500(void);
extern void FUN_005016b0(void);
extern void FUN_005013f0(void);
extern void FUN_005008e0(void);
extern void FUN_00500ec0(void);

extern int DAT_007f25bc;
extern int DAT_007f268c;
extern int DAT_007f25c0;

__declspec(naked) void FUN_005f2d50(void)
{
    __asm {
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_alloc_fail1
        mov     eax, dword ptr [DAT_007f25bc]
        mov     ecx, dword ptr [DAT_007f268c]
        push    0x00502c60
        push    0x005028b0
        push    0x0066a3c0
        push    0x0062ec80
        push    0x0066a150
        push    eax
        push    0x0062df30
        push    0x005f3580
        push    0x0
        push    0x0
        push    ecx
        push    0x0078a600
        push    0x423
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x006039e0
        mov     dword ptr [DAT_007f25c0], esi
        jmp     l_after1
    l_alloc_fail1:
        mov     dword ptr [DAT_007f25c0], 0x00000000
    l_after1:
        push    0x20
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      l_2f
        push    0xe0
        push    0x424
        push    0x00773250
        push    0x1
        mov     ecx, eax
        call    FUN_00501500
        jmp     l_2g
    l_2f:
        xor     eax, eax
    l_2g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    eax
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_3f
        push    0x43c
        push    0x2
        push    0x0078a5f0
        push    0xd
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x007731fc
        jmp     l_3g
    l_3f:
        xor     esi, esi
    l_3g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_4f
        push    0x440
        push    0x2
        push    0x0078a5e0
        push    0xe
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x007731fc
        jmp     l_4g
    l_4f:
        xor     esi, esi
    l_4g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_5f
        push    0x474
        push    0x2
        push    0x0078a5cc
        push    0xf
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x007731fc
        jmp     l_5g
    l_5f:
        xor     esi, esi
    l_5g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_6f
        push    0x478
        push    0x2
        push    0x0078a5bc
        push    0x10
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x007731fc
        jmp     l_6g
    l_6f:
        xor     esi, esi
    l_6g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_7f
        push    0x47c
        push    0x2
        push    0x0078a5a8
        push    0x11
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x007731fc
        jmp     l_7g
    l_7f:
        xor     esi, esi
    l_7g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_8f
        push    0x480
        push    0x2
        push    0x0078a594
        push    0x12
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x007731fc
        jmp     l_8g
    l_8f:
        xor     esi, esi
    l_8g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_9f
        push    0x41c
        push    0x1
        push    0x0078a580
        push    0x13
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x00773234
        jmp     l_9g
    l_9f:
        xor     esi, esi
    l_9g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_10f
        push    0x420
        push    0x1
        push    0x0078a570
        push    0x14
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x00773234
        jmp     l_10g
    l_10f:
        xor     esi, esi
    l_10g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_11f
        push    0x424
        push    0x1
        push    0x0078a560
        push    0x15
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x00773234
        jmp     l_11g
    l_11f:
        xor     esi, esi
    l_11g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_12f
        push    0x2b4
        push    0x3
        push    0x0078a54c
        push    0x1f
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x0077cabc
        jmp     l_12g
    l_12f:
        xor     esi, esi
    l_12g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_13f
        push    0x2b0
        push    0x3
        push    0x0078a538
        push    0x1e
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x0077cabc
        jmp     l_13g
    l_13f:
        xor     esi, esi
    l_13g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_14f
        push    0x2c4
        push    0x2
        push    0x0078a528
        push    0x20
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_14g
    l_14f:
        xor     esi, esi
    l_14g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_15f
        push    0x2c0
        push    0x2
        push    0x0078a518
        push    0x21
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_15g
    l_15f:
        xor     esi, esi
    l_15g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_16f
        push    0x2bc
        push    0x2
        push    0x0078a50c
        push    0x22
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_16g
    l_16f:
        xor     esi, esi
    l_16g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_17f
        push    0x2c8
        push    0x2
        push    0x0078a500
        push    0x23
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_17g
    l_17f:
        xor     esi, esi
    l_17g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_18f
        push    0x2b8
        push    0x2
        push    0x0078a4f4
        push    0x24
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_18g
    l_18f:
        xor     esi, esi
    l_18g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_19f
        push    0x2d4
        push    0x2
        push    0x0078a4e4
        push    0x25
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_19g
    l_19f:
        xor     esi, esi
    l_19g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_20f
        push    0x2d8
        push    0x2
        push    0x0078a4d4
        push    0x26
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_20g
    l_20f:
        xor     esi, esi
    l_20g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_21f
        push    0x2dc
        push    0x2
        push    0x0078a4b4
        push    0x27
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_21g
    l_21f:
        xor     esi, esi
    l_21g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_22f
        push    0x2e0
        push    0x2
        push    0x0078a494
        push    0x28
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_22g
    l_22f:
        xor     esi, esi
    l_22g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_23f
        push    0x2e4
        push    0x2
        push    0x00789234
        push    0x29
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_23g
    l_23f:
        xor     esi, esi
    l_23g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_24f
        push    0x2cc
        push    0x2
        push    0x0078a484
        push    0x2a
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_24g
    l_24f:
        xor     esi, esi
    l_24g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_25f
        push    0x2d0
        push    0x2
        push    0x0078a46c
        push    0x2b
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_25g
    l_25f:
        xor     esi, esi
    l_25g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_26f
        push    0x29c
        push    0x2
        push    0x0078a460
        push    0x2c
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_26g
    l_26f:
        xor     esi, esi
    l_26g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_27f
        push    0x2a0
        push    0x2
        push    0x0078a448
        push    0x2d
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_27g
    l_27f:
        xor     esi, esi
    l_27g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_28f
        push    0x2a4
        push    0x2
        push    0x0078a43c
        push    0x2e
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_28g
    l_28f:
        xor     esi, esi
    l_28g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_29f
        push    0x2a8
        push    0x2
        push    0x0078a430
        push    0x2f
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_29g
    l_29f:
        xor     esi, esi
    l_29g:
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_30f
        push    0x2ac
        push    0x2
        push    0x0078a424
        push    0x30
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775948
        jmp     l_30g
    l_30f:
        xor     esi, esi
    l_30g:
        mov     eax, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_31f
        push    0x2f0
        push    0x1
        push    0x0078a418
        push    0x31
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x00775588
        jmp     l_31g
    l_31f:
        xor     esi, esi
    l_31g:
        mov     ecx, dword ptr [DAT_007f25c0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_32f
        push    0x2f4
        push    0x2
        push    0x0078a40c
        push    0x32
        mov     ecx, esi
        call    FUN_005008e0
        mov     edx, dword ptr [DAT_007f25c0]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x00775948
        call    FUN_00500ec0
        pop     esi
        ret
    l_32f:
        mov     edx, dword ptr [DAT_007f25c0]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }
}
