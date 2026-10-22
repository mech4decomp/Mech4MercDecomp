/*
 * FUN_00643a30 (1811 B) — __thiscall HUD ("hud\\hud4"/"hud\\hud5") object
 * constructor. Sets up a HUD vtable, registers HUD elements via
 * FUN_005614d0, computes element geometry with FPU, builds child elements
 * via repeated FUN_00641010/FUN_00641000/FUN_00641050/FUN_00561a30/
 * FUN_005619f0 lookup blocks plus FUN_00640fa0/FUN_00642870/FUN_0055f510
 * element-creation blocks, and allocates a final sub-object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007ddde0;
extern float g_0076d070;
extern int g_007924c0;
extern int g_007924bc;

extern void FUN_00561430(void);
extern void FUN_0040c410(void);
extern void FUN_005614d0(void);
extern void FUN_00641010(void);
extern void FUN_00641050(void);
extern void FUN_00561a30(void);
extern void FUN_005619f0(void);
extern void FUN_0040c5d0(void);
extern void FUN_00641000(void);
extern void FUN_00640fa0(void);
extern void FUN_00642870(void);
extern void FUN_0055f510(void);
extern void FUN_00644150(void);
extern void FUN_004084d0(void);
extern void FUN_00560190(void);
extern void FUN_005603e0(void);
extern void FUN_00560400(void);

__declspec(naked) void FUN_00643a30(void)
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
        lea     ecx, [esp+0x2c]
        xor     ebx, ebx
        lea     ebp, [esi+0x58]
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esi], 0x792618
        mov     dword ptr [esi+0x50], ebx
        mov     dword ptr [esi+0x54], ebx
        mov     dword ptr [esp+0x30], 0x42040000
        mov     dword ptr [esp+0x34], 0x40a00000
        mov     dword ptr [esp+0x38], 0x3f666666
        call    FUN_0040c410
        lea     edx, [esp+0x2c]
        push    edx
        lea     ecx, [esi+0x64]
        mov     dword ptr [esp+0x30], 0x40a00000
        mov     dword ptr [esp+0x34], 0x41c80000
        mov     dword ptr [esp+0x38], 0x3f666666
        call    FUN_0040c410

        push    0x43800000
        push    0x43800000
        push    0x43730000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    ebx
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x43730000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    0x1
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x43730000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    0x2
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x43730000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    0x3
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42540000
        push    0x43090000
        push    0x41200000
        push    0x43040000
        push    0x4
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42540000
        push    0x43090000
        push    0x41200000
        push    0x43040000
        push    0x5
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0

        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x20]
        lea     edi, [esi+0x38]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x18], ebx
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     dword ptr [esp+0x14], eax
        jz      loc_3bd0
        mov     edx, dword ptr [esp+0x10]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_3c07
loc_3bd0:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x14]
        push    ecx
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
loc_3c07:
        mov     eax, dword ptr [eax+0x14]
        fld     dword ptr [eax+0xc]
        lea     ecx, [esp+0x2c]
        fsub    dword ptr [eax+0x4]
        push    ecx
        lea     ecx, [esp+0x48]
        fmul    dword ptr [eax+0x14]
        mov     dword ptr [esp+0x38], 0x0
        fstp    dword ptr [esp+0x30]
        fld     dword ptr [eax+0x10]
        fsub    dword ptr [eax+0x8]
        fmul    dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x34]
        call    FUN_0040c5d0
        lea     edx, [esp+0x44]
        push    edx
        lea     ecx, [esp+0x3c]
        call    FUN_0040c410
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x24]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x18], ebx
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x18], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x14]
        cmp     eax, dword ptr [ecx]
        jz      loc_3c82
        mov     edx, dword ptr [esp+0x10]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_3cb9
loc_3c82:
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
loc_3cb9:
        fld     dword ptr [esp+0x38]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x14]
        push    ecx
        lea     edx, [esp+0x28]
        fstp    dword ptr [eax+0x28]
        mov     dword ptr [eax+0x2c], ebx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], 0x1
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
        jz      loc_3d0a
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_3d41
loc_3d0a:
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
loc_3d41:
        fld     dword ptr [esp+0x38]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x14]
        push    ecx
        lea     edx, [esp+0x28]
        fstp    dword ptr [eax+0x28]
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
        jz      loc_3d92
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_3dc9
loc_3d92:
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
loc_3dc9:
        fld     dword ptr [esp+0x38]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_0076d070]
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
        jz      loc_3e1a
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_3e51
loc_3e1a:
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
loc_3e51:
        fld     dword ptr [esp+0x38]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x14]
        push    ecx
        lea     edx, [esp+0x28]
        fstp    dword ptr [eax+0x28]
        mov     dword ptr [eax+0x2c], ebx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], 0x4
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
        jz      loc_3ea2
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_3ed9
loc_3ea2:
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
loc_3ed9:
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
        mov     dword ptr [esp+0x1c], 0x4
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
        jz      loc_3f58
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, dword ptr [eax+0x10]
        jge     loc_3f8f
loc_3f58:
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
loc_3f8f:
        fld     dword ptr [esp+0x3c]
        mov     eax, dword ptr [eax+0x14]
        fmul    dword ptr [g_0076d070]
        mov     dword ptr [eax+0x28], ebx
        lea     ecx, [esp+0x18]
        push    ecx
        fstp    dword ptr [eax+0x2c]
        mov     ecx, edi
        fld     dword ptr [esp+0x40]
        mov     dword ptr [esp+0x1c], 0x5
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x18]
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [eax+0x28], ebx
        mov     dword ptr [eax+0x2c], edx
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+0x1c], 0x5
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
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
        fld     dword ptr [esp+0x54]
        lea     edx, [esp+0x50]
        fmul    dword ptr [g_0076d070]
        push    edx
        lea     eax, [esp+0x1c]
        push    eax
        fstp    dword ptr [ebp]
        mov     ebp, 0x5
        mov     ecx, edi
        mov     dword ptr [esp+0x20], ebp
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        fld     dword ptr [eax+0x4]
        mov     ecx, dword ptr [g_007924c0]
        fmul    dword ptr [g_0076d070]
        push    ecx
        lea     edx, [esp+0x1c]
        push    edx
        fstp    dword ptr [esi+0x68]
        mov     ecx, edi
        mov     dword ptr [esp+0x20], ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_0055f510
        fld     dword ptr [g_007924bc]
        fadd    dword ptr [g_007924c0]
        push    ecx
        lea     eax, [esp+0x1c]
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    eax
        mov     dword ptr [esp+0x20], 0x1
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_0055f510
        mov     ecx, dword ptr [g_007924bc]
        mov     dword ptr [esp+0x18], 0x2
        push    ecx
        lea     edx, [esp+0x1c]
        push    edx
        mov     ecx, edi
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_0055f510
        mov     eax, dword ptr [g_007924c0]
        push    eax
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+0x20], ebp
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_0055f510
        push    0xff
        push    ebx
        push    0xfa
        push    ebx
        mov     ecx, esi
        call    FUN_00644150
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      loc_44108
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        mov     edi, eax
        jmp     loc_4410a
loc_44108:
        xor     edi, edi
loc_4410a:
        mov     edx, dword ptr [esi+0x34]
        push    ebx
        mov     dword ptr [edi+0x104], edx
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi+0x88], edi
        mov     dword ptr [edi+0x10c], ebx
        call    FUN_005603e0
        push    0x459c4000
        push    0x459c4000
        mov     ecx, edi
        call    FUN_00560400
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
    }
}
