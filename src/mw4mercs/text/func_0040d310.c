/*
 * FUN_0040d310 (584 B) — engine/loader transform helper. Builds several
 * 3-vector constants on the stack, calls a chain of math/transform
 * subroutines, and returns AL=1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d070;
extern int   g_0076d06c;

extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040ca70(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040caa0(void);
extern void __cdecl FUN_0040cad0(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0040d050(void);
extern void __cdecl FUN_00419f90(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040d560(void);
extern void __cdecl FUN_0040cb20(void);
extern void __cdecl FUN_0040cb70(void);

__declspec(naked) void FUN_0040d310(void)
{
    __asm {
        sub     esp, 0x78
        lea     eax, [esp+0x24]
        push    eax
        lea     ecx, [esp+0x10]
        push    ecx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x20], 0x3f800000
        mov     dword ptr [esp+0x24], 0x40000000
        mov     dword ptr [esp+0x28], 0x40400000
        mov     dword ptr [esp+0x2c], 0x40000000
        mov     dword ptr [esp+0x30], 0x40400000
        mov     dword ptr [esp+0x34], 0x3f800000
        mov     dword ptr [esp+0x14], 0x3f800000
        mov     dword ptr [esp+0x18], 0x40000000
        mov     dword ptr [esp+0x1c], 0x40400000
        call    FUN_0040c9e0
        mov     edx, dword ptr [esp+0x24]
        mov     eax, dword ptr [esp+0x28]
        mov     ecx, dword ptr [esp+0x2c]
        mov     dword ptr [esp+0xc], edx
        lea     edx, [esp+0x18]
        mov     dword ptr [esp+0x10], eax
        push    edx
        lea     eax, [esp+0x10]
        mov     dword ptr [esp+0x18], ecx
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_0040ca10
        mov     ecx, dword ptr [esp+0x18]
        mov     edx, dword ptr [esp+0x1c]
        mov     eax, dword ptr [esp+0x20]
        mov     dword ptr [esp+0xc], ecx
        push    0x40000000
        lea     ecx, [esp+0x10]
        push    ecx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x18], edx
        mov     dword ptr [esp+0x1c], eax
        call    FUN_0040ca40
        mov     edx, dword ptr [esp+0x18]
        mov     eax, dword ptr [esp+0x1c]
        mov     ecx, dword ptr [esp+0x20]
        mov     dword ptr [esp+0xc], edx
        lea     edx, [esp+0x24]
        mov     dword ptr [esp+0x10], eax
        push    edx
        lea     eax, [esp+0x10]
        mov     dword ptr [esp+0x18], ecx
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_0040ca70
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [g_0076d070]
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x10]
        fstp    dword ptr [esp+0x10]
        fld     dword ptr [esp+0x20]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x14]
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp+0x18]
        call    FUN_0040c410
        push    0x40000000
        lea     edx, [esp+0x10]
        push    edx
        lea     ecx, [esp+0x14]
        call    FUN_0040caa0
        lea     eax, [esp+0x24]
        push    eax
        lea     ecx, [esp+0x1c]
        push    ecx
        lea     ecx, [esp+0x14]
        call    FUN_0040cad0
        lea     edx, [esp+0x18]
        push    edx
        lea     ecx, [esp+0x10]
        call    FUN_0040c410
        lea     eax, [esp+0x24]
        push    eax
        lea     ecx, [esp+0x10]
        push    ecx
        lea     ecx, [esp+0x14]
        call    FUN_0040cad0
        lea     ecx, [esp+0x48]
        call    FUN_00419e70
        mov     edx, dword ptr [g_0076d06c]
        /* __emit: MSVC6 encodes lea eax,[esp] as 8D 04 24 (no disp); ref needs 8D 44 24 00 */
        __emit  0x8D
        __emit  0x44
        __emit  0x24
        __emit  0x00
        push    eax
        lea     ecx, [esp+0x8]
        mov     dword ptr [esp+0xc], edx
        push    ecx
        lea     edx, [esp+0x10]
        push    edx
        lea     ecx, [esp+0x3c]
        mov     dword ptr [esp+0xc], 0x0
        mov     dword ptr [esp+0x10], 0x0
        call    FUN_0040d050
        lea     eax, [esp+0x30]
        push    eax
        lea     ecx, [esp+0x4c]
        call    FUN_00419f90
        lea     ecx, [esp+0x48]
        push    ecx
        lea     edx, [esp+0x1c]
        push    edx
        lea     ecx, [esp+0x14]
        call    FUN_0041c680
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x10]
        call    FUN_0040c410
        lea     ecx, [esp+0xc]
        push    ecx
        lea     ecx, [esp+0x40]
        call    FUN_0040c5d0
        lea     edx, [esp+0x48]
        push    edx
        lea     eax, [esp+0x40]
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_0041c680
        lea     ecx, [esp+0x18]
        call    FUN_0040cb00
        fstp    st(0)
        lea     ecx, [esp+0x18]
        call    FUN_0040cb00
        fstp    st(0)
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ecx, [esp+0x10]
        call    FUN_0040d560
        push    0x40000000
        lea     edx, [esp+0x28]
        push    edx
        push    0x40000000
        lea     eax, [esp+0x24]
        push    eax
        lea     ecx, [esp+0x1c]
        call    FUN_0040cb20
        push    0x3f000000
        lea     ecx, [esp+0x28]
        push    ecx
        lea     edx, [esp+0x20]
        push    edx
        lea     ecx, [esp+0x18]
        call    FUN_0040cb70
        mov     al, 0x1
        add     esp, 0x78
        ret
    }
}
