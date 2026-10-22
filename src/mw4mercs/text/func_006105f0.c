/*
 * FUN_006105f0 (1341 B) — __thiscall (ECX=this). Animation-blend system
 * constructor/initializer. Sets up a vtable pointer, calls FUN_00561600
 * ~11 times with a series of float blend parameters (bone/limb weights),
 * builds a 3-component vector via matrix math, dispatches on a 4-way
 * jump table (0x610b30) to select a scale factor, then allocates three
 * 0x138-byte sub-objects (FUN_004084d0 + FUN_00560190), initializes
 * color/flag fields, and zero-fills a block with rep stosd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7ddde0;
extern float g_76d070;
extern float g_76c5b0;
extern float g_78c138;
extern float g_78c134;
extern float g_78c130;
extern float g_78c12c;
extern float g_77dea8;

extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_00561600(void);
extern void __cdecl FUN_00562170(void);
extern void __cdecl FUN_00612060(void);
extern void __cdecl FUN_00561a80(void);
extern void __cdecl FUN_00561a40(void);
extern void __cdecl FUN_00612010(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00560190(void);

__declspec(naked) void FUN_006105f0(void)
{
    __asm {
        sub     esp, 0x28
        mov     eax, dword ptr [g_7ddde0]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        push    1
        push    0x43800000
        push    0x43800000
        push    0x41a00000
        push    0x437f0000
        xor     ebx, ebx
        push    ebx
        push    0x435d0000
        push    0x14
        push    0x78c154
        mov     ecx, esi
        mov     dword ptr [esi], 0x78c13c
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    0x43680000
        push    0x426c0000
        push    0x434b0000
        push    0x41d80000
        push    ebx
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    0x434b0000
        push    0x426c0000
        push    0x432e0000
        push    0x41d80000
        push    1
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    0x42e80000
        push    0x426c0000
        push    0x42ae0000
        push    0x41d80000
        push    2
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    0x43110000
        push    0x426c0000
        push    0x42e80000
        push    0x41d80000
        push    3
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    0x42ae0000
        push    0x426c0000
        push    0x42680000
        push    0x41d80000
        push    4
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    0x42680000
        push    0x426c0000
        push    0x41e80000
        push    0x41d80000
        push    5
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    0x432e0000
        push    0x426c0000
        push    0x43110000
        push    0x41d80000
        push    6
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    7
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    0x41e80000
        push    0x426c0000
        push    ebx
        push    0x41d80000
        push    8
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    9
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        push    1
        push    0x43800000
        push    0x43800000
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    0xa
        push    0x78c154
        mov     ecx, esi
        call    FUN_00561600
        lea     ecx, [esp+0xc]
        push    ecx
        lea     edx, [esp+0x1c]
        lea     edi, [esi+0x44]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp+0x14], 0x14
        call    FUN_00562170
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     dword ptr [esp+0x10], eax
        jz      L_829
        mov     ecx, dword ptr [esp+0xc]
        cmp     ecx, dword ptr [eax+0x10]
        jge     L_860
    L_829:
        lea     edx, [esp+0x14]
        push    edx
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x1c], ebx
        call    FUN_00612060
        push    eax
        push    ecx
        lea     edx, [esp+0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a80
        lea     eax, [esp+0x24]
        push    eax
        mov     ecx, edi
        call    FUN_00561a40
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x10], eax
    L_860:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0xc]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     edx, [esp+0x20]
        fmul    dword ptr [eax+0x14]
        push    edx
        mov     ecx, edi
        fstp    dword ptr [esp+0x30]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        mov     dword ptr [esp+0x14], 0x14
        fstp    dword ptr [esp+0x34]
        call    FUN_00562170
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     dword ptr [esp+0x10], eax
        jz      L_8A9
        mov     ecx, dword ptr [esp+0xc]
        cmp     ecx, dword ptr [eax+0x10]
        jge     L_8E0
    L_8A9:
        lea     edx, [esp+0x14]
        push    edx
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x1c], ebx
        call    FUN_00612060
        push    eax
        push    ecx
        lea     edx, [esp+0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a80
        lea     eax, [esp+0x20]
        push    eax
        mov     ecx, edi
        call    FUN_00561a40
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x10], eax
    L_8E0:
        fld     dword ptr [esp+0x28]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_76d070]
        lea     ecx, [esp+0x10]
        push    ecx
        lea     edx, [esp+0x20]
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [esp+0x30]
        push    edx
        fmul    dword ptr [g_76d070]
        mov     ecx, edi
        fstp    dword ptr [eax+0x2c]
        mov     dword ptr [esp+0x18], 0x14
        call    FUN_00562170
        mov     eax, dword ptr [eax]
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x10], eax
        call    FUN_00612010
        mov     edx, eax
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [esp+0xc]
        cmp     eax, ecx
        mov     ecx, dword ptr [esp+0x10]
        jz      L_93D
        cmp     ecx, dword ptr [eax+0x10]
        jge     L_969
    L_93D:
        lea     eax, [esp+0x20]
        push    eax
        push    ecx
        mov     dword ptr [esp+0x28], ecx
        lea     edx, [esp+0x14]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp+0x30], ebx
        call    FUN_00561a80
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, edi
        call    FUN_00561a40
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0xc], eax
    L_969:
        mov     ecx, dword ptr [eax+0x14]
        fld     dword ptr [g_76c5b0]
        mov     eax, dword ptr [esp+0x38]
        mov     byte ptr [ecx+0x40], 1
        mov     ecx, eax
        and     ecx, 0x3
        cmp     ecx, 0x3
        mov     dword ptr [esi+0x50], eax
        mov     dword ptr [esp+0x38], 0
        ja      L_A3E
        __emit 0xFF /* __emit: jmp dword ptr [ecx*4+0x610b30] -> MSVC6 re-bases this dispatch via EBX; ref uses FF 24 8D */
        __emit 0x24
        __emit 0x8D
        __emit 0x30
        __emit 0x0B
        __emit 0x61
        __emit 0x00
    case0:
        cdq
        fstp    st(0)
        fld     dword ptr [g_78c138]
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        mov     ecx, eax
        shl     ecx, 0x4
        add     ecx, eax
        lea     edx, [ecx+ecx*2]
        shl     edx, 0x1
        mov     dword ptr [esp+0x38], edx
        fild    dword ptr [esp+0x38]
        jmp     L_A34
    case1:
        cdq
        fstp    st(0)
        fld     dword ptr [g_78c134]
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        mov     ecx, eax
        shl     ecx, 0x4
        add     ecx, eax
        lea     eax, [ecx+ecx*2]
        shl     eax, 0x1
        mov     dword ptr [esp+0x38], eax
        fild    dword ptr [esp+0x38]
        jmp     L_A34
    case2:
        cdq
        fstp    st(0)
        fld     dword ptr [g_78c130]
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        mov     ecx, eax
        shl     ecx, 0x4
        add     ecx, eax
        lea     ecx, [ecx+ecx*2]
        shl     ecx, 0x1
        mov     dword ptr [esp+0x38], ecx
        fild    dword ptr [esp+0x38]
        jmp     L_A34
    case3:
        cdq
        fstp    st(0)
        fld     dword ptr [g_78c12c]
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        mov     ecx, eax
        shl     ecx, 0x4
        add     ecx, eax
        lea     edx, [ecx+ecx*2]
        shl     edx, 0x1
        mov     dword ptr [esp+0x38], edx
        fild    dword ptr [esp+0x38]
    L_A34:
        fadd    dword ptr [g_77dea8]
        fstp    dword ptr [esp+0x38]
    L_A3E:
        mov     eax, dword ptr [esp+0x38]
        fstp    dword ptr [esp+0x28]
        lea     ecx, [esp+0x28]
        push    ecx
        lea     ecx, [esi+0x14]
        mov     dword ptr [esp+0x30], eax
        mov     dword ptr [esp+0x34], 0x3f666666
        call    FUN_0040c410
        push    0x138
        mov     dword ptr [esi+0x20], 0x429e0000
        mov     dword ptr [esi+0x24], 0x42b40000
        mov     dword ptr [esi+0x28], 0x3f666666
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_A8F
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_A91
    L_A8F:
        xor     eax, eax
    L_A91:
        push    0x138
        mov     dword ptr [esi+0xa8], eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_AB2
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_AB4
    L_AB2:
        xor     eax, eax
    L_AB4:
        push    0x138
        mov     dword ptr [esi+0xb8], eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_AD5
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_AD7
    L_AD5:
        xor     eax, eax
    L_AD7:
        mov     dword ptr [esi+0xbc], eax
        mov     dword ptr [esi+0x54], ebx
        mov     dword ptr [esi+0x58], ebx
        mov     dword ptr [esi+0x5c], ebx
        mov     byte ptr [esi+0x60], bl
        mov     byte ptr [esi+0x61], bl
        lea     edi, [esi+0x7c]
        xor     eax, eax
        mov     dword ptr [esi+0x64], 0xe164e164
        mov     dword ptr [esi+0x68], 0xc8e1e100
        mov     dword ptr [esi+0x6c], 0xafff9600
        mov     dword ptr [esi+0x70], 0x96ff3200
        mov     dword ptr [esi+0x74], 0x7dff3200
        mov     dword ptr [esi+0x78], 0x64000000
        mov     ecx, 0xb
        rep     stosd
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x28
        ret     0x4
    }
}
