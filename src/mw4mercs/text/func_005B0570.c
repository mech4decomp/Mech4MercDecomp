/*
 * FUN_005B0570 (373 B) — __thiscall (this in ECX). Reads object fields at
 * +0xd8/+0x9c/+0x8c/+0x540, computes a few FP values, and calls several
 * helper functions (0x40cb00, 0x40c410, 0x4e2f40, 0x40ca40, 0x40c9e0).
 * Writes results back into the object at +0x5d0..+0x5e4 and +0x5cd/+0x514.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_770168;
extern float g_785f28;
extern float g_76d064;
extern float g_7b8d08;
extern float g_7b8d0c;
extern float g_7b8d10;
extern int   g_7dc728;

extern void __cdecl FUN_0040CB00(void);
extern void __cdecl FUN_0040C410(void);
extern void __cdecl FUN_004E2F40(void);
extern void __cdecl FUN_0040CA40(void);
extern void __cdecl FUN_0040C9E0(void);

__declspec(naked) void FUN_005B0570(void)
{
    __asm {
        sub     esp, 0x58
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        mov     edx, dword ptr [eax + 0x9c]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esi + 0x5e0], edx
        fld     dword ptr [esi + 0x5e0]
        fsub    dword ptr [g_770168]
        mov     dword ptr [esi + 0x5dc], ecx
        mov     dword ptr [esp + 4], ecx
        mov     edx, eax
        fstp    dword ptr [esp + 8]
        mov     ecx, offset g_7b8d08
        fld     dword ptr [esi + 0x540]
        mov     dword ptr [esi + 0x5e4], eax
        fadd    dword ptr [g_785f28]
        mov     dword ptr [esp + 0xc], edx
        fstp    dword ptr [esp + 0x58]
        call    FUN_0040CB00
        fsqrt
        lea     eax, [esp + 4]
        push    eax
        lea     ecx, [esp + 0x44]
        fdivr   dword ptr [g_76d064]
        fld     dword ptr [g_7b8d08]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [g_7b8d0c]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [g_7b8d10]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x58]
        fstp    st(0)
        call    FUN_0040C410
        lea     ecx, [esp + 0x40]
        lea     eax, [esp + 0x28]
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [g_7dc728]
        lea     edx, [esp + 0x1c]
        push    eax
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x34], 0
        mov     dword ptr [esp + 0x3c], 0
        mov     dword ptr [esp + 0x40], 0x1000
        call    FUN_004E2F40
        fld     dword ptr [esp + 0x58]
        push    ecx
        lea     ecx, [esp + 0x50]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0040CA40
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0040C9E0
        fld     dword ptr [esi + 0x5dc]
        fld     dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x5e4]
        mov     dword ptr [esi + 0x5d0], ecx
        mov     ecx, dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x18]
        mov     byte ptr [esi + 0x5cd], 1
        fstp    dword ptr [esi + 0x5dc]
        mov     dword ptr [esi + 0x5d4], edx
        mov     dword ptr [esi + 0x5d8], eax
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x5e0], ecx
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0
        push    0x11
        mov     dword ptr [esi + 0x5e4], edx
        call    dword ptr [eax + 4]
        mov     byte ptr [esi + 0x514], 1
        pop     esi
        add     esp, 0x58
        ret
    }
}
