/*
 * FUN_00615100 (2759 B) — Campaign/mech config loader (__thiscall).
 *
 * Reads a config object (ECX = this), builds resource paths, and
 * populates a large structure at ESI. Contains a 4-entry jump table
 * (switch on campaign type) and many repeated refcount-decrement blocks.
 *
 * __thiscall (ECX = this), RET 8 (two stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8c10;   /* 0x007b8c10 */
extern int g_7dab44;   /* 0x007dab44 */
extern int g_7dab40;   /* 0x007dab40 */
extern int g_7db0b8;   /* 0x007db0b8 */
extern int g_7dd268;   /* 0x007dd268 */
extern int *g_76b320;  /* 0x0076b320 (IAT: strncpy) */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_00595c20(void);
extern void __cdecl FUN_0059f530(void);
extern void __cdecl FUN_0059e450(void);
extern void __cdecl FUN_0059c660(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00615be0(void);
extern void __cdecl FUN_0059b800(void);
extern void __cdecl FUN_005de030(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00596ab0(void);
extern void __cdecl FUN_0059f840(void);
extern void __cdecl FUN_0059e4f0(void);
extern void __cdecl FUN_0059c870(void);
extern void __cdecl FUN_0059b960(void);
extern void __cdecl FUN_005de170(void);
extern void __cdecl FUN_00618730(void);
extern void __cdecl FUN_00617790(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0041ef60(void);

__declspec(naked) void FUN_00615100(void)
{
    __asm {
        sub     esp, 0x4a8
        mov     eax, dword ptr [g_7b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        push    0x1
        lea     edi, [esi + 0x40]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        mov     dword ptr [esi + 0x10], ebx
        mov     byte ptr [esi + 0x14], 0x1
        mov     dword ptr [esi + 0x18], ebx
        call    FUN_00416990
        mov     dword ptr [edi], 0x78c3a8
        push    0x1
        lea     edi, [esi + 0x54]
        push    ebx
        mov     ecx, edi
        call    FUN_00416990
        lea     ebp, [esi + 0x74]
        mov     dword ptr [edi], 0x78c37c
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esi + 0x6c], ebx
        call    FUN_0041fc80
        mov     dword ptr [ebp], 0x78bfd0
        push    0x77a0c8
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esi], 0x78c378
        call    FUN_00412570
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x18]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0xb0]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x18]
        push    0x78c370
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x4bc]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x30], eax
        jz      L_521b
        inc     byte ptr [eax + -1]
L_521b:
        mov     edx, dword ptr [esp + 0x30]
        push    0x779f4c
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [g_7db0b8]
        push    ebx
        push    0x1
        push    ebx
        push    0x3f
        push    0x5
        push    ebx
        push    eax
        call    FUN_004d2d00
        mov     ecx, dword ptr [g_7dd268]
        mov     dword ptr [esp + 0x14], ebx
        mov     edx, dword ptr [ecx + 0x40ee8]
        mov     edi, eax
        mov     eax, dword ptr [edx + 0x70]
        add     eax, 0xffffec14
        cmp     eax, 0x3
        ja      L_52a3
        __emit 0xFF  /* jmp dword ptr [eax*4+0x615bc8] — MSVC6 re-bases via EBX for FF 24 85 form */
        __emit 0x24
        __emit 0x85
        __emit 0xC8
        __emit 0x5B
        __emit 0x61
        __emit 0x00
L_5280:
        push    0x78c4ec
        jmp     L_529a
L_5287:
        push    0x78c4dc
        jmp     L_529a
L_528e:
        push    0x78c4cc
        jmp     L_529a
L_5295:
        push    0x78c4bc
L_529a:
        lea     ecx, [esp + 0x18]
        call    FUN_00412780
L_52a3:
        push    edi
        mov     ecx, ebp
        call    FUN_0041fcd0
        mov     edi, dword ptr [esp + 0x4c0]
        push    edi
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        push    edi
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_004125e0
        mov     edx, dword ptr [esp + 0x40]
        push    0x78c4b0
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_004125e0
        lea     ecx, [esp + 0x40]
        call    FUN_0040d9b0
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x44]
        push    eax
        mov     byte ptr [esi + 0x70], 0x0
        call    FUN_00595c20
        mov     dword ptr [esi + 0x34], eax
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x4
        cmp     eax, ebx
        mov     dword ptr [esp + 0x2c], eax
        jz      L_5321
        inc     byte ptr [eax + -1]
L_5321:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x2c]
        push    0x78c4a4
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        call    FUN_0059f530
        mov     dword ptr [esi + 0x24], eax
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x4
        cmp     eax, ebx
        mov     dword ptr [esp + 0x28], eax
        jz      L_538c
        inc     byte ptr [eax + -1]
L_538c:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_53c4
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_53c4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_53c4:
        mov     ecx, dword ptr [esp + 0x28]
        push    0x78c494
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        call    FUN_0059e450
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x4
        cmp     eax, ebx
        mov     dword ptr [esp + 0x34], eax
        jz      L_5409
        inc     byte ptr [eax + -1]
L_5409:
        mov     eax, dword ptr [esp + 0x34]
        push    0x78c47c
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_5441
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5441
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5441:
        mov     ecx, dword ptr [esp + 0x34]
        push    ecx
        call    FUN_0059c660
        mov     edx, dword ptr [g_7dd268]
        mov     edi, eax
        mov     eax, dword ptr [edx + 0x40ee8]
        mov     ecx, dword ptr [eax + 0x70]
        add     esp, 0x4
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esi + 0x1c], edi
        jz      L_546d
        mov     dword ptr [edi + 0x1c], ecx
L_546d:
        mov     eax, dword ptr [eax + 0x78]
        cmp     eax, ebx
        jz      L_5477
        mov     dword ptr [edi + 0x18], eax
L_5477:
        push    0x64
        call    FUN_004084d0
        mov     ebx, eax
        mov     eax, dword ptr [g_7dd268]
        mov     eax, dword ptr [eax + 0x40ee8]
        mov     edx, dword ptr [eax + 0x6c]
        add     esp, 0x4
        test    edx, edx
        jz      L_54cb
        mov     eax, edx
        test    eax, eax
        jnz     L_549f
        xor     ecx, ecx
        jmp     L_54af
L_549f:
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov     edi, dword ptr [esp + 0x10]
        not     ecx
        dec     ecx
L_54af:
        inc     ecx
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [g_76b320]
        add     esp, 0x8
        mov     ecx, esp
        push    ebx
        call    FUN_00412570
        mov     ecx, edi
        call    FUN_00615be0
L_54cb:
        push    ebx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x4
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jz      L_54e3
        inc     byte ptr [eax + -1]
L_54e3:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_551b
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_551b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_551b:
        mov     eax, dword ptr [esp + 0x24]
        push    0x78c474
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_5553
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5553
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5553:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        call    FUN_0059b800
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x4
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jz      L_5572
        inc     byte ptr [eax + -1]
L_5572:
        mov     edx, dword ptr [esp + 0x20]
        push    0x78c468
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_55aa
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_55aa
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_55aa:
        mov     eax, dword ptr [esp + 0x20]
        push    0x78c45c
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_55e2
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_55e2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_55e2:
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        call    FUN_005de030
        mov     edx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     dword ptr [esi + 0x38], eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     ebx, 0x1
        add     esp, 0x4
        mov     dword ptr [ecx + 0x3508], ebx
        mov     edi, dword ptr [esp + 0x30]
        push    0x0
        mov     ecx, ebp
        mov     dword ptr [esi + 0x30], 0x0
        mov     dword ptr [esi + 0x7c], ebx
        call    FUN_0041fd80
        push    eax
        push    edi
        lea     ecx, [esp + 0x480]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0x164]
        call    FUN_0041ee70
        push    0x76b768
        lea     ecx, [esp + 0x40]
        call    FUN_00412570
        lea     edx, [esp + 0x3c]
        push    edx
        lea     eax, [esp + 0x164]
        push    eax
        call    FUN_00412a50
        add     esp, 0x8
        push    0x0
        lea     ecx, [esp + 0x164]
        push    ecx
        lea     ecx, [esp + 0x47c]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c450
        lea     ecx, [esp + 0x3f8]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0x114]
        call    FUN_0041ee70
        push    0x773040
        lea     ecx, [esp + 0x3c]
        call    FUN_00412570
        lea     edx, [esp + 0x38]
        push    edx
        lea     eax, [esp + 0x114]
        push    eax
        call    FUN_00412a50
        add     esp, 0x8
        push    0x0
        lea     ecx, [esp + 0x114]
        push    ecx
        lea     ecx, [esp + 0x3f4]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c444
        lea     ecx, [esp + 0x370]
        call    FUN_004d2110
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x36c]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c438
        lea     ecx, [esp + 0x2e8]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0xc4]
        call    FUN_0041ee70
        mov     ecx, dword ptr [esi + 0x34]
        lea     edx, [esp + 0xc0]
        push    edx
        call    FUN_00596ab0
        push    0x0
        lea     eax, [esp + 0xc4]
        push    eax
        lea     ecx, [esp + 0x2e4]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c42c
        lea     ecx, [esp + 0x260]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0x74]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, dword ptr [esi + 0x24]
        call    FUN_0059f840
        push    0x0
        lea     edx, [esp + 0x74]
        push    edx
        lea     ecx, [esp + 0x25c]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c41c
        lea     ecx, [esp + 0x1d8]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0xec]
        call    FUN_0041ee70
        mov     ecx, dword ptr [esi + 0x2c]
        lea     eax, [esp + 0xe8]
        push    eax
        call    FUN_0059e4f0
        push    0x0
        lea     ecx, [esp + 0xec]
        push    ecx
        lea     ecx, [esp + 0x1d4]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c40c
        lea     ecx, [esp + 0x32c]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0x4c]
        call    FUN_0041ee70
        mov     ecx, dword ptr [esi + 0x1c]
        lea     edx, [esp + 0x48]
        push    edx
        call    FUN_0059c870
        push    0x0
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x328]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c3fc
        lea     ecx, [esp + 0x3b4]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0x9c]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x98]
        push    ecx
        mov     ecx, dword ptr [esi + 0x20]
        call    FUN_0059b960
        push    0x0
        lea     edx, [esp + 0x9c]
        push    edx
        lea     ecx, [esp + 0x3b0]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c3ec
        lea     ecx, [esp + 0x2a4]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0x13c]
        call    FUN_0041ee70
        mov     ecx, dword ptr [esi + 0x38]
        lea     eax, [esp + 0x138]
        push    eax
        call    FUN_005de170
        push    0x0
        lea     ecx, [esp + 0x13c]
        push    ecx
        lea     ecx, [esp + 0x2a0]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c2f4
        lea     ecx, [esp + 0x194]
        call    FUN_004d2110
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x190]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c3e0
        lea     ecx, [esp + 0x21c]
        call    FUN_004d2110
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x218]
        call    FUN_004d2680
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        push    0x78c3d4
        lea     ecx, [esp + 0x43c]
        call    FUN_004d2110
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x438]
        call    FUN_004d2680
        mov     edx, dword ptr [esp + 0x4bc]
        push    edx
        lea     ecx, [esi + 0x6c]
        call    FUN_00412780
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi + 0x80], 0x0
        call    FUN_00618730
        push    0x8
        mov     ecx, esi
        call    FUN_00617790
        lea     ecx, [esp + 0x430]
        mov     byte ptr [esi + 0x71], 0x0
        mov     byte ptr [esi + 0x68], bl
        call    FUN_004d21c0
        lea     ecx, [esp + 0x210]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x188]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x138]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x298]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x98]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x3a8]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x48]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x320]
        call    FUN_004d21c0
        lea     ecx, [esp + 0xe8]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x1cc]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x70]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x254]
        call    FUN_004d21c0
        lea     ecx, [esp + 0xc0]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x2dc]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x364]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x38]
        test    eax, eax
        jz      L_5a5f
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5a5f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5a5f:
        lea     ecx, [esp + 0x110]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x3ec]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x3c]
        test    eax, eax
        jz      L_5a92
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5a92
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5a92:
        lea     ecx, [esp + 0x160]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x474]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L_5ac5
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5ac5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5ac5:
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jz      L_5ae0
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5ae0
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5ae0:
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        jz      L_5afb
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5afb
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5afb:
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      L_5b16
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5b16
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5b16:
        mov     eax, dword ptr [esp + 0x2c]
        test    eax, eax
        jz      L_5b31
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5b31
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5b31:
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        jz      L_5b4c
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5b4c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5b4c:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_5b67
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5b67
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5b67:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_5b82
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5b82
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5b82:
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        jz      L_5b9d
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5b9d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5b9d:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_5bb8
        mov     cl, byte ptr [eax + -1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_5bb8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5bb8:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4a8
        ret     0x8
    }
}
