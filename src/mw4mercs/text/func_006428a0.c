/*
 * FUN_006428a0 (1951 B) — __thiscall HUD ("hud\\hud5") object constructor.
 * Registers HUD elements via FUN_005614d0, computes element geometry with
 * FPU, and builds a set of child elements via repeated
 * FUN_00641010/FUN_00641000/FUN_00641050/FUN_00561a30/FUN_005619f0 lookup
 * blocks plus FUN_00640fa0/FUN_00642870 element-creation blocks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007ddde0;
extern float g_0076d070;

extern void FUN_00561430(void);
extern void FUN_005614d0(void);
extern void FUN_0040c9c0(void);
extern void FUN_0040c410(void);
extern void FUN_00641010(void);
extern void FUN_00641000(void);
extern void FUN_00641050(void);
extern void FUN_00561a30(void);
extern void FUN_005619f0(void);
extern void FUN_0040c5d0(void);
extern void FUN_0040ccd0(void);
extern void FUN_00640fa0(void);
extern void FUN_00642870(void);

__declspec(naked) void FUN_006428a0(void)
{
    __asm {
        sub     esp, 0x44
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
        push    0x42e40000
        push    0x42080000
        push    0x42680000
        push    0x40e00000
        xor     ebx, ebx
        push    ebx
        push    0x78f198
        mov     ecx, esi
        mov     dword ptr [esi], 0x792600
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x41e80000
        push    0x42a40000
        push    0x41400000
        push    0x42820000
        mov     ebp, 0x1
        push    ebp
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x41e80000
        push    0x42f00000
        push    0x41400000
        push    0x42ce0000
        push    0x2
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42860000
        push    0x42f00000
        push    0x42480000
        push    0x42ce0000
        push    0x3
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42860000
        push    0x42a40000
        push    0x42480000
        push    0x42820000
        push    0x4
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42860000
        push    0x42f20000
        push    0x41300000
        push    0x42800000
        push    0x5
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        push    0x3f666666
        push    0x43898000
        push    0x42040000
        lea     ecx, [esp+0x48]
        call    FUN_0040c9c0
        lea     ecx, [esp+0x3c]
        push    ecx
        lea     ecx, [esi+0x14]
        call    FUN_0040c410
        mov     dword ptr [esi+0x8], ebx
        lea     edx, [esp+0x10]
        push    edx
        lea     eax, [esp+0x20]
        lea     edi, [esi+0x38]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x18], ebx
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x20]
        mov     dword ptr [esp+0x14], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x14]
        cmp     eax, dword ptr [ecx]
        jz      loc_2a2c
        mov     edx, dword ptr [esp+0x10]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_2a63
loc_2a2c:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x14]
        push    ecx
        lea     ecx, [esp+0x30]
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
loc_2a63:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x3c]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x4c]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x48], 0x0
        fstp    dword ptr [esp+0x40]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x44]
        call    FUN_0040c5d0
        lea     edx, [esp+0x48]
        push    edx
        lea     ecx, [esi+0x20]
        call    FUN_0040ccd0
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x28]
        push    ecx
        mov     dword ptr [esi+0x58], ebx
        mov     ecx, edi
        mov     dword ptr [esi+0x5c], ebx
        mov     dword ptr [esi+0x60], 0xfa000000
        mov     dword ptr [esi+0x64], 0xfa0000ff
        mov     dword ptr [esi+0x68], 0xfaff0000
        mov     dword ptr [esi+0x74], ebx
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
        jz      loc_2afb
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_2b32
loc_2afb:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x30]
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
loc_2b32:
        mov     ecx, dword ptr [eax+0x14]
        lea     edx, [esp+0x14]
        mov     byte ptr [ecx+0x40], 0x1
        push    edx
        lea     eax, [esp+0x28]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], 0x2
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x20]
        mov     dword ptr [esp+0x10], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, dword ptr [ecx]
        jz      loc_2b77
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_2bae
loc_2b77:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x30]
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
loc_2bae:
        mov     ecx, dword ptr [eax+0x14]
        lea     edx, [esp+0x14]
        mov     byte ptr [ecx+0x40], 0x1
        push    edx
        lea     eax, [esp+0x28]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], 0x3
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x20]
        mov     dword ptr [esp+0x10], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, dword ptr [ecx]
        jz      loc_2bf3
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_2c2a
loc_2bf3:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x30]
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
loc_2c2a:
        mov     ecx, dword ptr [eax+0x14]
        lea     edx, [esp+0x14]
        mov     byte ptr [ecx+0x40], 0x1
        push    edx
        lea     eax, [esp+0x28]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], 0x4
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x20]
        mov     dword ptr [esp+0x10], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, dword ptr [ecx]
        jz      loc_2c6f
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_2ca6
loc_2c6f:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x30]
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
loc_2ca6:
        mov     ecx, dword ptr [eax+0x14]
        lea     edx, [esp+0x14]
        mov     byte ptr [ecx+0x40], 0x1
        push    edx
        lea     eax, [esp+0x28]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], ebp
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x20]
        mov     dword ptr [esp+0x10], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, dword ptr [ecx]
        jz      loc_2ce7
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_2d1e
loc_2ce7:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x30]
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
loc_2d1e:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x3c]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x4c]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x48], 0x0
        fstp    dword ptr [esp+0x40]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x44]
        call    FUN_0040c5d0
        lea     edx, [esp+0x48]
        push    edx
        lea     ecx, [esp+0x34]
        call    FUN_0040c5d0
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
        jz      loc_2d99
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_2dd0
loc_2d99:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x30]
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
loc_2dd0:
        mov     eax, dword ptr [eax+0x14]
        lea     ecx, [esp+0x14]
        push    ecx
        lea     edx, [esp+0x28]
        mov     dword ptr [eax+0x28], ebx
        mov     dword ptr [eax+0x2c], ebx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], 0x2
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x14], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, dword ptr [edx]
        jz      loc_2e17
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_2e4e
loc_2e17:
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x30]
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
loc_2e4e:
        fld     dword ptr [esp+0x30]
        mov     eax, dword ptr [eax+0x14]
        lea     ecx, [esp+0x14]
        push    ecx
        lea     edx, [esp+0x28]
        fstp    dword ptr [eax+0x28]
        mov     dword ptr [eax+0x2c], ebx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], 0x3
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x14], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, dword ptr [edx]
        jz      loc_2e99
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_2ed0
loc_2e99:
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x30]
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
loc_2ed0:
        fld     dword ptr [esp+0x34]
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [esp+0x30]
        lea     edx, [esp+0x18]
        fstp    dword ptr [eax+0x28]
        push    edx
        fstp    dword ptr [eax+0x2c]
        mov     ecx, dword ptr [esp+0x38]
        mov     dword ptr [esp+0x18], ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], 0x4
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp+0x14]
        mov     dword ptr [eax+0x2c], ecx
        mov     dword ptr [eax+0x28], ebx
        lea     edx, [esp+0x48]
        push    edx
        lea     eax, [esp+0x1c]
        mov     ebp, 0x5
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x20], ebp
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea     ecx, [esp+0x34]
        call    FUN_0040c410
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp+0x14]
        mov     dword ptr [esp+0x1c], ebp
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x18]
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [eax+0x28], edx
        mov     dword ptr [eax+0x2c], ecx
        lea     edx, [esp+0x48]
        push    edx
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea     ecx, [esp+0x34]
        call    FUN_0040ccd0
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp+0x14]
        mov     dword ptr [esp+0x1c], ebx
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x18]
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [eax+0x28], edx
        mov     dword ptr [eax+0x2c], ecx
        lea     edx, [esp+0x48]
        push    edx
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x48]
        push    edx
        lea     eax, [esp+0x1c]
        mov     dword ptr [esi+0x78], ecx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        mov     ecx, dword ptr [eax+0x4]
        mov     eax, 0x3f800000
        pop     edi
        mov     dword ptr [esi+0x90], eax
        mov     dword ptr [esi+0x98], eax
        mov     dword ptr [esi+0x94], ebx
        mov     dword ptr [esi+0x9c], ebx
        mov     byte ptr [esi+0x70], bl
        mov     dword ptr [esi+0x7c], ecx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret
    }
}
