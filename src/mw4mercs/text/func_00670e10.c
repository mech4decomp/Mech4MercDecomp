/*
 * FUN_00670e10 (2647 B) — __fastcall HUD object constructor (variant of
 * FUN_0066ee40). Sets up sub-objects, allocates a 0x138-byte object,
 * and registers a large set of HUD elements (hud\hud4) with per-element
 * float rects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007ddde0;
extern float g_0076d070;

extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_006746c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_005614d0(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00640fa0(void);
extern void __cdecl FUN_00642870(void);

__declspec(naked) void FUN_00670e10(void)
{
    __asm {
        mov     eax, dword ptr [g_007ddde0]
        sub     esp, 0x60
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        lea     edi, [esi+0x64]
        xor     ebx, ebx
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        lea     ecx, [esp+0x13]
        push    ecx
        lea     ecx, [esi+0x84]
        mov     dword ptr [edi], 0x773328
        call    FUN_006746c0
        mov     dword ptr [esi+0x70], ebx
        push    0x138
        mov     dword ptr [esi], 0x797200
        mov     dword ptr [esi+0x74], ebx
        mov     dword ptr [esi+0x78], ebx
        mov     dword ptr [esi+0x50], 0x44480000
        mov     dword ptr [esi+0x7c], ebx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_670e7b
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_670e7d
L_670e7b:
        xor     eax, eax
L_670e7d:
        lea     edx, [esp+0x40]
        push    edx
        lea     ecx, [esi+0x14]
        mov     dword ptr [esi+0x6c], eax
        mov     dword ptr [eax+0x10c], ebx
        mov     dword ptr [esp+0x44], 0x43a80000
        mov     dword ptr [esp+0x48], 0x43e18000
        mov     dword ptr [esp+0x4c], 0x3f666666
        call    FUN_0040c410
        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0x43750000
        push    0x43760000
        push    0x436c0000
        push    ebx
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0x43680000
        push    0x43030000
        push    0x42d60000
        mov     ebp, 0xa
        push    ebp
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43460000
        push    0x437a0000
        push    0x43400000
        push    0x43750000
        push    0xb
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x434a0000
        push    0x43790000
        push    0x43460000
        push    0x43750000
        push    0xc
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43510000
        push    0x437c0000
        push    0x434a0000
        push    0x43750000
        push    0xd
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43550000
        push    0x43780000
        push    0x43510000
        push    0x43750000
        push    0xe
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43580000
        push    0x43780000
        push    0x43550000
        push    0x43750000
        push    0xf
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43200000
        push    0x426c0000
        push    0x42ca0000
        push    0x40800000
        push    0x10
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x435e0000
        push    0x437a0000
        push    0x43580000
        push    0x43750000
        push    0x14
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43640000
        push    0x437a0000
        push    0x435e0000
        push    0x43750000
        push    0x15
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x436a0000
        push    0x437a0000
        push    0x43640000
        push    0x43750000
        push    0x16
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x435e0000
        push    0x437f0000
        push    0x43580000
        push    0x437a0000
        push    0x17
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43640000
        push    0x437f0000
        push    0x435e0000
        push    0x437a0000
        push    0x18
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x436a0000
        push    0x437f0000
        push    0x43640000
        push    0x437a0000
        push    0x19
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        mov     dword ptr [esp+0x14], 0x14
        lea     edi, [esi+0x38]
L_671121:
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x28]
        push    ecx
        mov     ecx, edi
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     dword ptr [esp+0x1c], eax
        jz      L_671145
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_67117c
L_671145:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x48]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x24]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x30]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x1c], eax
L_67117c:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x58]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x68]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x64], 0x0
        fstp    dword ptr [esp+0x5c]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x60]
        call    FUN_0040c5d0
        lea     edx, [esp+0x64]
        push    edx
        lea     ecx, [esp+0x50]
        call    FUN_0040c410
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x30]
        push    ecx
        mov     ecx, edi
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x30]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, edx
        mov     ecx, dword ptr [esp+0x14]
        jz      L_6711f5
        cmp     ecx, dword ptr [eax+0x10]
        jge     L_671221
L_6711f5:
        lea     edx, [esp+0x38]
        push    edx
        push    ecx
        mov     dword ptr [esp+0x40], ecx
        lea     eax, [esp+0x20]
        mov     ecx, esp
        push    eax
        mov     dword ptr [esp+0x48], ebx
        call    FUN_00561a30
        lea     ecx, [esp+0x3c]
        push    ecx
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_671221:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [esp+0x50]
        fstp    dword ptr [eax+0x2c]
        mov     dword ptr [eax+0x28], ebx
        mov     eax, dword ptr [esp+0x14]
        inc     eax
        cmp     eax, 0x19
        mov     dword ptr [esp+0x14], eax
        jle     L_671121
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x20], ebp
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x30]
        mov     dword ptr [esp+0x1c], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x1c]
        cmp     eax, dword ptr [ecx]
        jz      L_67127a
        mov     edx, dword ptr [esp+0x18]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_6712b1
L_67127a:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x1c]
        push    ecx
        lea     ecx, [esp+0x48]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x24]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x1c], eax
L_6712b1:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x58]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x68]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x64], 0x0
        fstp    dword ptr [esp+0x5c]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x60]
        call    FUN_0040c5d0
        lea     edx, [esp+0x64]
        push    edx
        lea     ecx, [esi+0x20]
        call    FUN_0040ccd0
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x38]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x30]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [ecx]
        jz      L_67132b
        mov     edx, dword ptr [esp+0x1c]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_671362
L_67132b:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        lea     ecx, [esp+0x48]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_671362:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x58]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x68]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x64], 0x0
        fstp    dword ptr [esp+0x5c]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x60]
        call    FUN_0040c5d0
        lea     edx, [esp+0x64]
        push    edx
        lea     ecx, [esp+0x50]
        call    FUN_0040c410
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x38]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x30]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [ecx]
        jz      L_6713dd
        mov     edx, dword ptr [esp+0x1c]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_671414
L_6713dd:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        lea     ecx, [esp+0x48]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_671414:
        mov     eax, dword ptr [eax+0x14]
        mov     ecx, 0x42740000
        mov     dword ptr [eax+0x28], ecx
        mov     dword ptr [eax+0x2c], ecx
        lea     ecx, [esp+0x1c]
        push    ecx
        lea     edx, [esp+0x38]
        mov     ebp, 0xb
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp+0x30]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [edx]
        jz      L_671461
        mov     ecx, dword ptr [esp+0x1c]
        cmp     ecx, dword ptr [eax+0x10]
        jge     L_671498
L_671461:
        lea     edx, [esp+0x20]
        push    edx
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x48]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_671498:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x58]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x68]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x64], 0x0
        fstp    dword ptr [esp+0x5c]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x60]
        call    FUN_0040c5d0
        lea     edx, [esp+0x64]
        push    edx
        lea     ecx, [esp+0x50]
        call    FUN_0040c410
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x38]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x30]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [ecx]
        jz      L_671513
        mov     edx, dword ptr [esp+0x1c]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_67154a
L_671513:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        lea     ecx, [esp+0x48]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_67154a:
        fld     dword ptr [esp+0x50]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x1c]
        fld     dword ptr [esp+0x4c]
        push    ecx
        fmul    dword ptr [g_0076d070]
        lea     edx, [esp+0x38]
        mov     ebp, 0xc
        push    edx
        fstp    dword ptr [eax+0x28]
        mov     ecx, edi
        fstp    dword ptr [eax+0x2c]
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp+0x30]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [edx]
        jz      L_6715a6
        mov     ecx, dword ptr [esp+0x1c]
        cmp     ecx, dword ptr [eax+0x10]
        jge     L_6715dd
L_6715a6:
        lea     edx, [esp+0x20]
        push    edx
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x48]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_6715dd:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x58]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x68]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x64], 0x0
        fstp    dword ptr [esp+0x5c]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x60]
        call    FUN_0040c5d0
        lea     edx, [esp+0x64]
        push    edx
        lea     ecx, [esp+0x50]
        call    FUN_0040c410
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x38]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x30]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [ecx]
        jz      L_671658
        mov     edx, dword ptr [esp+0x1c]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_67168f
L_671658:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        lea     ecx, [esp+0x48]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_67168f:
        fld     dword ptr [esp+0x50]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x20]
        fld     dword ptr [esp+0x4c]
        push    ecx
        fmul    dword ptr [g_0076d070]
        mov     ebx, 0xd
        mov     ecx, edi
        fstp    dword ptr [eax+0x28]
        fstp    dword ptr [eax+0x2c]
        mov     dword ptr [esp+0x24], ebx
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        fld     dword ptr [eax+0xc]
        lea     edx, [esp+0x58]
        fsub    dword ptr [eax+0x4]
        push    edx
        lea     ecx, [esp+0x68]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x64], 0x0
        fstp    dword ptr [esp+0x5c]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x60]
        call    FUN_0040c5d0
        lea     eax, [esp+0x64]
        push    eax
        lea     ecx, [esp+0x50]
        call    FUN_0040ccd0
        fld     dword ptr [esp+0x50]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp+0x1c]
        mov     dword ptr [esp+0x24], ebx
        fld     dword ptr [esp+0x50]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x20]
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esp+0x1c]
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [eax+0x28], edx
        mov     dword ptr [eax+0x2c], ecx
        lea     edx, [esp+0x64]
        push    edx
        lea     eax, [esp+0x24]
        mov     ebx, 0xe
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea     ecx, [esp+0x50]
        call    FUN_0040ccd0
        fld     dword ptr [esp+0x50]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp+0x1c]
        mov     dword ptr [esp+0x24], ebx
        fld     dword ptr [esp+0x50]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x20]
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esp+0x1c]
        mov     dword ptr [eax+0x28], edx
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [eax+0x2c], ecx
        lea     edx, [esp+0x64]
        push    edx
        lea     eax, [esp+0x24]
        mov     ebx, 0xf
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea     ecx, [esp+0x50]
        call    FUN_0040ccd0
        fld     dword ptr [esp+0x50]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp+0x1c]
        mov     dword ptr [esp+0x24], ebx
        fld     dword ptr [esp+0x50]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x20]
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esp+0x1c]
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [eax+0x28], edx
        mov     dword ptr [eax+0x2c], ecx
        lea     edx, [esp+0x64]
        push    edx
        lea     eax, [esp+0x24]
        mov     ebx, 0x10
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea     ecx, [esp+0x50]
        call    FUN_0040ccd0
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x24], ebx
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        pop     edi
        mov     dword ptr [eax+0x28], 0x41e80000
        mov     dword ptr [eax+0x2c], 0x426c0000
        mov     dword ptr [esi+0x34], 0x9600af00
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret
    }
}
