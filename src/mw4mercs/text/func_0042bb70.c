/*
 * FUN_0042bb70 (259 B) — MLR global light/color setup. Allocates a light
 * object (this+0x14 vtable = 0x42bf80), stores it at 0x007b97f8, builds
 * a normalized direction vector from 0x0076de20 / 0x0076d064 / 0x0076d598
 * into 0x007b97e8/ec/f0, and allocates a 0x800-byte buffer stored at
 * 0x007b97f4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004151c0(void);
extern int g_007b9824;
extern int g_007b97f8;
extern int g_007b97e4;
extern int g_007b97dc;
extern int g_007b97e0;
extern double g_0076de20;
extern float g_0076d064;
extern float g_0076d598;
extern float g_007b97e8;
extern float g_007b97ec;
extern float g_007b97f0;
extern int g_007b97f4;

__declspec(naked) void FUN_0042bb70(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_bba7
        mov     eax, dword ptr [g_007b9824]
        push    eax
        push    0x76e118
        push    0x67
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x42bf80
        mov     dword ptr [g_007b97f8], esi
        jmp     L_bbb1
L_bba7:
        mov     dword ptr [g_007b97f8], 0
L_bbb1:
        fld     qword ptr [g_0076de20]
        push    0x8
        fsqrt
        mov     dword ptr [g_007b97e4], 0x43ac8000
        mov     dword ptr [g_007b97dc], 0x5
        mov     dword ptr [g_007b97e0], 0x3f000000
        fdivr   dword ptr [g_0076d064]
        fst     dword ptr [esp + 0x8]
        fmul    dword ptr [g_0076d598]
        fst     dword ptr [esp + 0xc]
        fld     st(0)
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esp + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x8]
        fstp    dword ptr [g_007b97e8]
        fld     st(0)
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [g_007b97ec]
        fmul    st(0), st(1)
        fstp    dword ptr [g_007b97f0]
        fstp    st(0)
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_bc64
        push    0x800
        mov     dword ptr [esi], 0
        mov     dword ptr [esi + 0x4], 0x100
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007b97f4], esi
        pop     esi
        add     esp, 0xc
        ret
L_bc64:
        mov     dword ptr [g_007b97f4], 0
        pop     esi
        add     esp, 0xc
        ret
    }
}
