/*
 * FUN_0040ccf0 (829 B) - matrix/vector transform setup routine.
 * Builds several 4x4 matrices / vectors on the stack, calls a series of
 * vector/matrix helpers (FUN_0040d0xx family), performs a 4x4 matrix-vector
 * multiply via inline FPU, and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040d090(void);
extern void __cdecl FUN_0040d0c0(void);
extern void __cdecl FUN_0040d120(void);
extern void __cdecl FUN_0040d150(void);
extern void __cdecl FUN_0040d180(void);
extern void __cdecl FUN_0040d1b0(void);
extern void __cdecl FUN_0040d070(void);
extern void __cdecl FUN_0040d050(void);
extern void __cdecl FUN_00419f90(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_0041c9b0(void);
extern void __cdecl FUN_0040d1e0(void);
extern void __cdecl FUN_0041ccb0(void);
extern void __cdecl FUN_0041ca30(void);
extern void __cdecl FUN_0040d220(void);
extern void __cdecl FUN_0041cac0(void);
extern void __cdecl FUN_0040d0f0(void);
extern void __cdecl FUN_0040d260(void);
extern void __cdecl FUN_0040d2c0(void);

extern int g_0076d068;   /* DAT_0076d068 */

__declspec(naked) void FUN_0040ccf0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xd0
        push    0x3f800000
        push    0x40000000
        push    0x40400000
        lea     ecx, [ebp - 0x54]
        mov     dword ptr [ebp - 0x20], 0x3f800000
        mov     dword ptr [ebp - 0x1c], 0x40000000
        mov     dword ptr [ebp - 0x18], 0x40400000
        mov     dword ptr [ebp - 0x14], 0x40800000
        mov     dword ptr [ebp - 0x38], 0x40000000
        mov     dword ptr [ebp - 0x34], 0x40400000
        mov     dword ptr [ebp - 0x30], 0x3f800000
        mov     dword ptr [ebp - 0x2c], 0x40800000
        mov     dword ptr [ebp - 0x10], 0x3f800000
        mov     dword ptr [ebp - 0xc], 0x40000000
        mov     dword ptr [ebp - 0x8], 0x40400000
        mov     dword ptr [ebp - 0x4], 0x40800000
        call    FUN_0040c9c0
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0xc], ecx
        lea     ecx, [ebp - 0x38]
        mov     dword ptr [ebp - 0x8], edx
        push    ecx
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0x14]
        lea     edx, [ebp - 0x10]
        push    edx
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x48], 0xbf800000
        mov     dword ptr [ebp - 0x44], 0x40400000
        mov     dword ptr [ebp - 0x40], 0x40000000
        mov     dword ptr [ebp - 0x4], eax
        call    FUN_0040d090
        mov     ecx, dword ptr [ebp - 0x34]
        mov     edx, dword ptr [ebp - 0x30]
        mov     eax, dword ptr [ebp - 0x38]
        mov     dword ptr [ebp - 0xc], ecx
        lea     ecx, [ebp - 0x20]
        mov     dword ptr [ebp - 0x8], edx
        push    ecx
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0x2c]
        lea     edx, [ebp - 0x10]
        push    edx
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x4], eax
        call    FUN_0040d0c0
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0xc], ecx
        push    0x40000000
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0x4], eax
        call    FUN_0040d120
        mov     eax, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], ecx
        lea     eax, [ebp - 0x38]
        push    eax
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x10], edx
        mov     edx, dword ptr [ebp - 0x14]
        push    ecx
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x4], edx
        call    FUN_0040d150
        mov     edx, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x10], edx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     edx, dword ptr [ebp - 0x14]
        push    0x40000000
        lea     eax, [ebp - 0x10]
        push    eax
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x4], edx
        call    FUN_0040d180
        lea     ecx, [ebp - 0x38]
        push    ecx
        lea     edx, [ebp - 0x20]
        push    edx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d1b0
        lea     eax, [ebp - 0x20]
        push    eax
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d070
        lea     ecx, [ebp - 0x38]
        push    ecx
        lea     edx, [ebp - 0x10]
        push    edx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d1b0
        mov     eax, dword ptr [g_0076d068]
        lea     ecx, [ebp - 0x28]
        push    ecx
        lea     edx, [ebp - 0x3c]
        mov     dword ptr [ebp - 0x24], eax
        push    edx
        lea     eax, [ebp - 0x24]
        push    eax
        lea     ecx, [ebp - 0x60]
        mov     dword ptr [ebp - 0x28], 0x0
        mov     dword ptr [ebp - 0x3c], 0x0
        call    FUN_0040d050
        lea     ecx, [ebp - 0x60]
        push    ecx
        lea     ecx, [ebp + 0xffffff70]
        call    FUN_00419f90
        lea     edx, [ebp - 0x54]
        push    edx
        lea     ecx, [ebp + 0xffffff70]
        call    FUN_0040d030
        lea     eax, [ebp + 0xffffff70]
        push    eax
        lea     ecx, [ebp - 0x20]
        push    ecx
        lea     ecx, [ebp - 0x10]
        call    FUN_0041c9b0
        lea     edx, [ebp - 0x20]
        push    edx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d070
        lea     eax, [ebp + 0xffffff70]
        push    eax
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d1e0
        lea     ecx, [ebp + 0xffffff70]
        push    ecx
        lea     ecx, [ebp + 0xffffff30]
        call    FUN_0041ccb0
        lea     edx, [ebp + 0xffffff30]
        push    edx
        lea     eax, [ebp - 0x20]
        push    eax
        lea     ecx, [ebp - 0x10]
        call    FUN_0041ca30
        lea     ecx, [ebp - 0x20]
        push    ecx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d070
        lea     edx, [ebp + 0xffffff30]
        push    edx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d220
        lea     eax, [ebp + 0xffffff30]
        push    eax
        lea     ecx, [ebp - 0x48]
        push    ecx
        lea     ecx, [ebp - 0x10]
        call    FUN_0041cac0
        lea     edx, [ebp + 0xffffff30]
        lea     eax, [ebp - 0x54]
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x28], edx
        mov     dword ptr [ebp - 0x3c], eax
        mov     dword ptr [ebp - 0x24], ecx
        mov     edx, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x3c]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x24]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        lea     edx, [ebp - 0x20]
        push    edx
        lea     ecx, [ebp - 0x20]
        call    FUN_0040d0f0
        fstp    st(0)
        lea     eax, [ebp - 0x20]
        push    eax
        lea     ecx, [ebp - 0x20]
        call    FUN_0040d0f0
        fstp    st(0)
        push    0x40000000
        lea     ecx, [ebp - 0x38]
        push    ecx
        push    0x40000000
        lea     edx, [ebp - 0x20]
        push    edx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d260
        push    0x3f000000
        lea     eax, [ebp - 0x38]
        push    eax
        lea     ecx, [ebp - 0x20]
        push    ecx
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d2c0
        mov     al, 0x1
        mov     esp, ebp
        pop     ebp
        ret
    }
}
