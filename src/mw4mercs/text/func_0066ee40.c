/*
 * FUN_0066ee40 (2419 B) — __fastcall HUD object constructor. Sets up
 * sub-objects, resolves a global object, and registers a large set of
 * HUD elements (hud\map, hud\hud4) with per-element float rects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007ddde0;
extern int g_007dab44;
extern int g_007dab40;
extern float g_0076d070;

extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00670df0(void);
extern void __cdecl FUN_005614d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00640fa0(void);
extern void __cdecl FUN_00642870(void);
extern void __cdecl FUN_0040ccd0(void);

__declspec(naked) void FUN_0066ee40(void)
{
    __asm {
        mov     eax, dword ptr [g_007ddde0]
        sub     esp, 0x64
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        lea     edi, [esi+0x50]
        xor     ebx, ebx
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi+0x58]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        lea     ecx, [esp+0x13]
        push    ecx
        lea     ecx, [esi+0x68]
        mov     dword ptr [edi], 0x77dfdc
        call    FUN_00670df0
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax+0x1c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax+0x78]
        lea     ecx, [eax+0x78]
        mov     dword ptr [esi], 0x7971c8
        call    dword ptr [edx+0x4]
        mov     cl, byte ptr [eax+0x38]
        add     eax, 0x38
        cmp     cl, bl
        push    0x43800000
        push    0x43800000
        jnz     L_66eeda
        push    0x43640000
        push    0x43640000
        push    0x41e00000
        push    0x41e00000
        push    ebx
        push    0x7971c0
        jmp     L_66eee8
L_66eeda:
        push    0x437f0000
        push    0x437f0000
        push    ebx
        push    ebx
        push    ebx
        push    eax
L_66eee8:
        mov     ecx, esi
        call    FUN_005614d0
        lea     eax, [esp+0x44]
        push    eax
        lea     ecx, [esi+0x14]
        mov     dword ptr [esp+0x48], 0x43968000
        mov     dword ptr [esp+0x4c], 0x43c78000
        mov     dword ptr [esp+0x50], 0x3f666666
        call    FUN_0040c410
        lea     ecx, [esp+0x44]
        push    ecx
        lea     ecx, [esi+0x20]
        mov     dword ptr [esp+0x48], 0x43480000
        mov     dword ptr [esp+0x4c], 0x43480000
        mov     dword ptr [esp+0x50], 0x3f666666
        call    FUN_0040c410
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x28]
        lea     edi, [esi+0x38]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00561df0
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x28]
        mov     dword ptr [esp+0x1c], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x1c]
        cmp     eax, dword ptr [ecx]
        jz      L_66ef76
        mov     edx, dword ptr [esp+0x18]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_66efad
L_66ef76:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x1c]
        push    ecx
        lea     ecx, [esp+0x44]
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
L_66efad:
        mov     ecx, dword ptr [eax+0x14]
        push    0x43800000
        push    0x43800000
        push    0x43460000
        push    0x437a0000
        push    0x43400000
        push    0x43750000
        mov     ebp, 0xb
        push    ebp
        mov     dword ptr [ecx+0x3c], 0x1
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
        push    0x43760000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    0x17
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x435e0000
        push    0x437f0000
        push    0x43580000
        push    0x437a0000
        push    0x18
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43640000
        push    0x437f0000
        push    0x435e0000
        push    0x437a0000
        push    0x19
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x436a0000
        push    0x437f0000
        push    0x43640000
        push    0x437a0000
        push    0x1a
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43760000
        push    0x437f0000
        push    0x43700000
        push    0x437a0000
        push    0x1b
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        mov     dword ptr [esp+0x14], 0x14
L_66f22b:
        lea     edx, [esp+0x14]
        push    edx
        lea     eax, [esp+0x30]
        push    eax
        mov     ecx, edi
        call    FUN_00561df0
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x28]
        mov     dword ptr [esp+0x1c], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x1c]
        cmp     eax, dword ptr [ecx]
        jz      L_66f261
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_66f298
L_66f261:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x4c]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x24]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x2c]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x1c], eax
L_66f298:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x5c]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x6c]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x68], 0x0
        fstp    dword ptr [esp+0x60]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x64]
        call    FUN_0040c5d0
        lea     edx, [esp+0x68]
        push    edx
        lea     ecx, [esp+0x54]
        call    FUN_0040c410
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x34]
        push    ecx
        mov     ecx, edi
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, edx
        mov     ecx, dword ptr [esp+0x14]
        jz      L_66f311
        cmp     ecx, dword ptr [eax+0x10]
        jge     L_66f33d
L_66f311:
        lea     edx, [esp+0x3c]
        push    edx
        push    ecx
        mov     dword ptr [esp+0x44], ecx
        lea     eax, [esp+0x20]
        mov     ecx, esp
        push    eax
        mov     dword ptr [esp+0x4c], ebx
        call    FUN_00561a30
        lea     ecx, [esp+0x40]
        push    ecx
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_66f33d:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [esp+0x50]
        mov     dword ptr [eax+0x2c], ebx
        fstp    dword ptr [eax+0x28]
        mov     eax, dword ptr [esp+0x14]
        inc     eax
        cmp     eax, 0x1b
        mov     dword ptr [esp+0x14], eax
        jle     L_66f22b
        lea     edx, [esp+0x1c]
        push    edx
        lea     eax, [esp+0x3c]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x34]
        mov     dword ptr [esp+0x18], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [ecx]
        jz      L_66f396
        mov     edx, dword ptr [esp+0x1c]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_66f3cd
L_66f396:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        lea     ecx, [esp+0x4c]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_66f3cd:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x5c]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x6c]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x68], 0x0
        fstp    dword ptr [esp+0x60]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x64]
        call    FUN_0040c5d0
        lea     edx, [esp+0x68]
        push    edx
        lea     ecx, [esp+0x54]
        call    FUN_0040c410
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x3c]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [ecx]
        jz      L_66f448
        mov     edx, dword ptr [esp+0x1c]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_66f47f
L_66f448:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        lea     ecx, [esp+0x4c]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_66f47f:
        fld     dword ptr [esp+0x54]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x1c]
        fld     dword ptr [esp+0x50]
        push    ecx
        fmul    dword ptr [g_0076d070]
        lea     edx, [esp+0x3c]
        mov     ebp, 0xc
        push    edx
        fstp    dword ptr [eax+0x28]
        mov     ecx, edi
        fstp    dword ptr [eax+0x2c]
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp+0x34]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [edx]
        jz      L_66f4db
        mov     ecx, dword ptr [esp+0x1c]
        cmp     ecx, dword ptr [eax+0x10]
        jge     L_66f512
L_66f4db:
        lea     edx, [esp+0x20]
        push    edx
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x4c]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_66f512:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x5c]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x6c]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x68], 0x0
        fstp    dword ptr [esp+0x60]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x64]
        call    FUN_0040c5d0
        lea     edx, [esp+0x68]
        push    edx
        lea     ecx, [esp+0x54]
        call    FUN_0040c410
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x3c]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [ecx]
        jz      L_66f58d
        mov     edx, dword ptr [esp+0x1c]
        cmp     edx, dword ptr [eax+0x10]
        jge     L_66f5c4
L_66f58d:
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        lea     ecx, [esp+0x4c]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_66f5c4:
        fld     dword ptr [esp+0x54]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x1c]
        fld     dword ptr [esp+0x50]
        push    ecx
        fmul    dword ptr [g_0076d070]
        lea     edx, [esp+0x3c]
        mov     ebp, 0xd
        push    edx
        fstp    dword ptr [eax+0x28]
        mov     ecx, edi
        fstp    dword ptr [eax+0x2c]
        mov     dword ptr [esp+0x24], ebp
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp+0x34]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, dword ptr [edx]
        jz      L_66f620
        mov     ecx, dword ptr [esp+0x1c]
        cmp     ecx, dword ptr [eax+0x10]
        jge     L_66f657
L_66f620:
        lea     edx, [esp+0x20]
        push    edx
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x4c]
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
L_66f657:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x5c]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x6c]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x68], 0x0
        fstp    dword ptr [esp+0x60]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x64]
        call    FUN_0040c5d0
        lea     edx, [esp+0x68]
        push    edx
        lea     ecx, [esp+0x54]
        call    FUN_0040c410
        fld     dword ptr [esp+0x54]
        fmul    dword ptr [g_0076d070]
        lea     eax, [esp+0x20]
        push    eax
        mov     ecx, edi
        fstp    dword ptr [esp+0x1c]
        mov     dword ptr [esp+0x24], ebp
        fld     dword ptr [esp+0x54]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x20]
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [eax+0x28], ecx
        mov     dword ptr [eax+0x2c], edx
        lea     eax, [esp+0x68]
        push    eax
        lea     ecx, [esp+0x24]
        push    ecx
        mov     ebx, 0xe
        mov     ecx, edi
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea     ecx, [esp+0x54]
        call    FUN_0040ccd0
        fld     dword ptr [esp+0x54]
        fmul    dword ptr [g_0076d070]
        lea     edx, [esp+0x20]
        push    edx
        mov     ecx, edi
        fstp    dword ptr [esp+0x1c]
        mov     dword ptr [esp+0x24], ebx
        fld     dword ptr [esp+0x54]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x20]
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [eax+0x28], ecx
        mov     dword ptr [eax+0x2c], edx
        lea     eax, [esp+0x68]
        push    eax
        lea     ecx, [esp+0x24]
        push    ecx
        mov     ebx, 0xf
        mov     ecx, edi
        mov     dword ptr [esp+0x28], ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea     ecx, [esp+0x54]
        call    FUN_0040ccd0
        fld     dword ptr [esp+0x54]
        fmul    dword ptr [g_0076d070]
        lea     edx, [esp+0x20]
        push    edx
        mov     ecx, edi
        fstp    dword ptr [esp+0x1c]
        mov     dword ptr [esp+0x24], ebx
        fld     dword ptr [esp+0x54]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x20]
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esp+0x18]
        pop     edi
        mov     dword ptr [eax+0x28], ecx
        mov     dword ptr [eax+0x2c], edx
        mov     dword ptr [esi+0x34], 0x96ffffff
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x64
        ret
    }
}
