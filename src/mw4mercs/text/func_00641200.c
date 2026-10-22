/*
 * FUN_00641200 (1476 B) — __thiscall HUD ("hud\\hud5") object constructor.
 * Sets up a HUD vtable, registers HUD elements via FUN_005614d0, computes
 * element geometry with FPU, allocates a set of child objects (loop over
 * EBP 0..0x28) dispatched through an in-function jump table, and wires up
 * a few more sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007ddde0;
extern float g_0076d070;
extern int g_007dab44;
extern int g_007dab40;
extern void *g_0076b2d4;

extern void FUN_00561430(void);
extern void FUN_005614d0(void);
extern void FUN_00561df0(void);
extern void FUN_00641050(void);
extern void FUN_00561a30(void);
extern void FUN_005619f0(void);
extern void FUN_00641000(void);
extern void FUN_00641010(void);
extern void FUN_0040c5d0(void);
extern void FUN_0040c410(void);
extern void FUN_004084d0(void);
extern void FUN_00560190(void);
extern void FUN_00560aa0(void);
extern void FUN_00560420(void);

__declspec(naked) void FUN_00641200(void)
{
    __asm {
        sub     esp, 0x4c
        mov     eax, dword ptr [g_007ddde0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        push    0x43800000
        push    0x43800000
        push    0x42400000
        push    0x41b00000
        push    0x420c0000
        push    0x40a00000
        push    0x2
        push    0x78f198
        mov     ecx, esi
        mov     dword ptr [esi], 0x7925e4
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0x43640000
        push    0x43790000
        push    0x41d80000
        push    0xa
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0x43640000
        push    0x43790000
        push    0x41d80000
        push    0xd
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x43780000
        push    0x43800000
        push    0x43740000
        push    0x437b0000
        mov     ebp, 0xb
        push    ebp
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x43100000
        push    0x41500000
        push    0x43060000
        push    0x40800000
        push    0xc
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        lea     ecx, [esp+0x10]
        push    ecx
        lea     edx, [esp+0x20]
        lea     edi, [esi+0x38]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esi+0x14], 0x43950000
        mov     dword ptr [esi+0x18], 0x421c0000
        mov     dword ptr [esi+0x1c], 0x3f666666
        mov     dword ptr [esp+0x18], 0xa
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     dword ptr [esp+0x14], eax
        jz      loc_133e
        mov     ecx, dword ptr [esp+0x10]
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_1379
loc_133e:
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x14]
        xor     ebx, ebx
        push    eax
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x28]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x14], eax
        jmp     loc_137b
loc_1379:
        xor     ebx, ebx
loc_137b:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     edx, [esp+0x10]
        fsub    dword ptr [eax+0x4]
        push    edx
        mov     dword ptr [esi+0x28], ebx
        fmul    dword ptr [eax+0x14]
        fld     dword ptr [eax+0x10]
        mov     dword ptr [esi+0x34], 0xfa00ff00
        fsub    dword ptr [eax+0x8]
        mov     dword ptr [esi+0x5c], 0x1b
        mov     dword ptr [esi+0x60], 0xe4
        fmul    dword ptr [eax+0x18]
        lea     eax, [esp+0x24]
        push    eax
        fstp    dword ptr [esp+0x50]
        mov     ecx, dword ptr [esp+0x50]
        mov     dword ptr [esi+0x24], ecx
        mov     ecx, edi
        fstp    dword ptr [esi+0x20]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     dword ptr [esp+0x14], eax
        jz      loc_13de
        mov     ecx, dword ptr [esp+0x10]
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_1415
loc_13de:
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x24]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x14], eax
loc_1415:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     edx, [esp+0x10]
        fsub    dword ptr [eax+0x4]
        push    edx
        fmul    dword ptr [eax+0x14]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        lea     eax, [esp+0x24]
        push    eax
        fstp    dword ptr [esp+0x50]
        mov     ecx, dword ptr [esp+0x50]
        mov     dword ptr [esp+0x44], ecx
        mov     ecx, edi
        fstp    dword ptr [esp+0x40]
        mov     dword ptr [esp+0x48], 0x0
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00561df0
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x1c]
        mov     dword ptr [esp+0x14], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x14]
        cmp     eax, dword ptr [ecx]
        jz      loc_147c
        mov     edx, dword ptr [esp+0x10]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_14b3
loc_147c:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x14]
        push    ecx
        lea     ecx, [esp+0x34]
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x2c]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x14], eax
loc_14b3:
        fld     dword ptr [esp+0x3c]
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [esp+0x38]
        lea     ecx, [esp+0x14]
        fmul    dword ptr [g_0076d070]
        push    ecx
        lea     edx, [esp+0x28]
        mov     ebp, 0xc
        fstp    dword ptr [eax+0x28]
        push    edx
        fstp    dword ptr [eax+0x2c]
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], ebp
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x14], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, dword ptr [edx]
        jz      loc_1509
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_1540
loc_1509:
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x34]
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x24]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x10], eax
loc_1540:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x44]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x54]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x50], 0x0
        fstp    dword ptr [esp+0x48]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x4c]
        call    FUN_0040c5d0
        lea     edx, [esp+0x50]
        push    edx
        lea     ecx, [esp+0x3c]
        call    FUN_0040c410
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x28]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], ebp
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x20]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x14], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, dword ptr [ecx]
        jz      loc_15bb
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_15f2
loc_15bb:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x34]
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x24]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x10], eax
loc_15f2:
        fld     dword ptr [esp+0x3c]
        mov     ecx, dword ptr [g_007dab44]
        fmul    dword ptr [g_0076d070]
        mov     edx, dword ptr [ecx]
        fld     dword ptr [esp+0x38]
        mov     ecx, dword ptr [g_007dab40]
        fmul    dword ptr [g_0076d070]
        mov     eax, dword ptr [eax+0x14]
        xor     edx, ecx
        mov     edi, dword ptr [edx+0xc]
        fstp    dword ptr [eax+0x28]
        xor     edi, 0x85739531
        fstp    dword ptr [eax+0x2c]
        xor     ebp, ebp
        jmp     loc_162e
loc_162c:
        xor     ebx, ebx
loc_162e:
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      loc_1649
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
loc_1649:
        mov     eax, dword ptr [ebx]
        push    0x0
        mov     ecx, ebx
        mov     dword ptr [esi+ebp*4+0x6c], ebx
        call    dword ptr [eax+0x4]
        cmp     ebp, 0x28
        ja      loc_1704
        xor     ecx, ecx
        mov     cl, byte ptr [ebp+0x6417e8]
        __emit 0xFF   /* __emit: MSVC6 re-bases [ecx*4+imm32] jump-table dispatch via EBX */
        __emit 0x24
        __emit 0x8D
        __emit 0xC4
        __emit 0x17
        __emit 0x64
        __emit 0x00
loc_166e:
        mov     edx, dword ptr [edi]
        push    0x0
        push    0x0
        push    0x2ca
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        jmp     loc_1723
loc_1683:
        mov     eax, dword ptr [edi]
        push    0x0
        push    0x0
        push    0x2cb
        mov     ecx, edi
        call    dword ptr [eax+0x34]
        jmp     loc_1723
loc_1698:
        mov     edx, dword ptr [edi]
        push    0x0
        push    0x0
        push    0x2cc
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        jmp     loc_1723
loc_16aa:
        mov     eax, dword ptr [edi]
        push    0x0
        push    0x0
        push    0x2cd
        mov     ecx, edi
        call    dword ptr [eax+0x34]
        jmp     loc_1723
loc_16bc:
        mov     edx, dword ptr [edi]
        push    0x0
        push    0x0
        push    0x2ce
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        jmp     loc_1723
loc_16ce:
        mov     eax, dword ptr [edi]
        push    0x0
        push    0x0
        push    0x2cf
        mov     ecx, edi
        call    dword ptr [eax+0x34]
        jmp     loc_1723
loc_16e0:
        mov     edx, dword ptr [edi]
        push    0x0
        push    0x0
        push    0x2d0
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        jmp     loc_1723
loc_16f2:
        mov     eax, dword ptr [edi]
        push    0x0
        push    0x0
        push    0x2d1
        mov     ecx, edi
        call    dword ptr [eax+0x34]
        jmp     loc_1723
loc_1704:
        push    0xa
        lea     ecx, [esp+0x30]
        lea     edx, [ebp+ebp*4]
        push    ecx
        shl     edx, 0x1
        push    edx
        call    dword ptr [g_0076b2d4]
        add     esp, 0xc
        push    0x0
        push    0x0
        lea     eax, [esp+0x34]
loc_1723:
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        inc     ebp
        cmp     ebp, 0x29
        jl      loc_162c
        push    0x138
        call    FUN_004084d0
        xor     ebp, ebp
        add     esp, 0x4
        cmp     eax, ebp
        jz      loc_1752
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        jmp     loc_1754
loc_1752:
        xor     eax, eax
loc_1754:
        push    0x138
        mov     dword ptr [esi+0x64], eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      loc_1773
        mov     ecx, eax
        call    FUN_00560aa0
        mov     ebx, eax
        jmp     loc_1775
loc_1773:
        xor     ebx, ebx
loc_1775:
        push    0x138
        mov     dword ptr [esi+0x68], ebx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      loc_1794
        mov     ecx, eax
        call    FUN_00560aa0
        mov     edi, eax
        jmp     loc_1796
loc_1794:
        xor     edi, edi
loc_1796:
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        mov     dword ptr [esi+0x110], edi
        call    dword ptr [edx+0x4]
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     dword ptr [esi+0x318], ebp
        pop     edi
        mov     dword ptr [esi+0x31c], ebp
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
    }
}
