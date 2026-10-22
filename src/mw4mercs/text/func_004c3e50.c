/*
 * FUN_004c3e50 (649 B) — MLR camera/server family __thiscall. Stores 6
 * float params into object fields, computes a set of derived float
 * values (frustum-style ratios) into a matrix region, then calls
 * FUN_00765f80 four times to build sub-matrices. FPU-heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;

extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00765f80(void);

__declspec(naked) void FUN_004c3e50(void)
{
    __asm {
        sub     esp, 0x30
        fld     dword ptr [esp+0x3c]
        mov     eax, dword ptr [esp+0x34]
        fsub    dword ptr [esp+0x40]
        mov     edx, dword ptr [esp+0x3c]
        push    esi
        mov     esi, ecx
        fdivr   dword ptr [g_0076d064]
        mov     ecx, dword ptr [esp+0x3c]
        mov     dword ptr [esi+0x21c], eax
        mov     eax, dword ptr [esp+0x44]
        mov     dword ptr [esi+0x220], ecx
        mov     ecx, dword ptr [esp+0x48]
        mov     dword ptr [esi+0x20c], edx
        mov     edx, dword ptr [esp+0x4c]
        mov     dword ptr [esi+0x210], eax
        mov     dword ptr [esi+0x214], ecx
        mov     dword ptr [esi+0x218], edx
        xor     eax, eax
        push    0x8bd5c8
        lea     ecx, [esi+0x15c]
        fld     dword ptr [esp+0x4c]
        fsub    dword ptr [esp+0x50]
        fdivr   dword ptr [g_0076d064]
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x40]
        fsub    dword ptr [esp+0x3c]
        fdivr   dword ptr [g_0076d064]
        fstp    dword ptr [esp+0xc]
        fld     st(0)
        fmul    dword ptr [esp+0x3c]
        fstp    dword ptr [esi+0x284]
        mov     dword ptr [esi+0x294], eax
        fld     dword ptr [esp+0x8]
        mov     dword ptr [esi+0x2a4], eax
        fmul    dword ptr [esp+0x3c]
        mov     dword ptr [esi+0x2b4], eax
        mov     dword ptr [esi+0x288], eax
        fstp    dword ptr [esi+0x298]
        mov     dword ptr [esi+0x2a8], eax
        mov     dword ptr [esi+0x2b8], eax
        fmul    dword ptr [esp+0x48]
        fchs
        fstp    dword ptr [esi+0x28c]
        fld     dword ptr [esp+0x8]
        fmul    dword ptr [esp+0x50]
        fchs
        fstp    dword ptr [esi+0x29c]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [esp+0x40]
        fstp    dword ptr [esi+0x2ac]
        mov     dword ptr [esi+0x2bc], 0x3f800000
        fld     dword ptr [esp+0xc]
        mov     dword ptr [esi+0x290], eax
        fmul    dword ptr [esp+0x3c]
        mov     dword ptr [esi+0x2a0], eax
        fmul    dword ptr [esp+0x40]
        fchs
        fstp    dword ptr [esi+0x2b0]
        mov     dword ptr [esi+0x2c0], eax
        fld     dword ptr [esp+0x3c]
        fchs
        fstp    dword ptr [esi+0x168]
        call    FUN_0040c410
        mov     eax, dword ptr [esp+0x3c]
        push    0x8bd5d8
        lea     ecx, [esi+0x14c]
        mov     dword ptr [esi+0x158], eax
        call    FUN_0040c410
        fld     dword ptr [esp+0x3c]
        fdiv    dword ptr [esp+0x38]
        mov     ecx, dword ptr [esp+0x40]
        mov     dword ptr [esp+0x28], ecx
        fst     dword ptr [esp+0x4]
        fmul    dword ptr [esp+0x40]
        fst     dword ptr [esp+0xc]
        fld     dword ptr [esp+0x4]
        fmul    dword ptr [esp+0x4c]
        fstp    dword ptr [esp+0x8]
        mov     edx, dword ptr [esp+0x4c]
        fstp    dword ptr [esp+0x10]
        mov     eax, dword ptr [esp+0x38]
        mov     dword ptr [esp+0x2c], edx
        mov     edx, dword ptr [esp+0x48]
        mov     dword ptr [esp+0x1c], ecx
        mov     ecx, edx
        mov     dword ptr [esp+0x30], eax
        mov     dword ptr [esp+0x20], edx
        mov     edx, dword ptr [esp+0x3c]
        mov     dword ptr [esp+0x24], eax
        mov     dword ptr [esp+0x14], ecx
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x20]
        mov     dword ptr [esp+0x1c], edx
        push    ecx
        lea     edx, [esp+0x30]
        push    edx
        lea     ecx, [esi+0x17c]
        call    FUN_00765f80
        fld     dword ptr [esp+0x4]
        mov     eax, dword ptr [esp+0x44]
        fmul    dword ptr [esp+0x44]
        mov     ecx, dword ptr [esp+0x48]
        mov     edx, eax
        mov     dword ptr [esp+0x28], eax
        mov     eax, dword ptr [esp+0x4c]
        mov     dword ptr [esp+0x2c], ecx
        mov     ecx, dword ptr [esp+0x8]
        mov     dword ptr [esp+0x1c], edx
        lea     edx, [esp+0x10]
        mov     dword ptr [esp+0x20], eax
        push    edx
        mov     dword ptr [esp+0x18], ecx
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x30]
        push    ecx
        fstp    dword ptr [esp+0x1c]
        lea     ecx, [esi+0x16c]
        call    FUN_00765f80
        fld     dword ptr [esp+0x4]
        mov     edx, dword ptr [esp+0x40]
        fmul    dword ptr [esp+0x48]
        mov     eax, dword ptr [esp+0x48]
        lea     ecx, [esp+0x10]
        push    ecx
        mov     dword ptr [esp+0x2c], edx
        lea     edx, [esp+0x20]
        mov     dword ptr [esp+0x24], eax
        push    edx
        lea     eax, [esp+0x30]
        fstp    dword ptr [esp+0x1c]
        push    eax
        lea     ecx, [esi+0x19c]
        call    FUN_00765f80
        mov     ecx, dword ptr [esp+0x44]
        mov     edx, dword ptr [esp+0x4c]
        mov     eax, dword ptr [esp+0x40]
        mov     dword ptr [esp+0x28], ecx
        mov     ecx, edx
        mov     dword ptr [esp+0x2c], edx
        mov     edx, dword ptr [esp+0xc]
        mov     dword ptr [esp+0x20], ecx
        mov     dword ptr [esp+0x1c], eax
        mov     eax, dword ptr [esp+0x8]
        lea     ecx, [esp+0x10]
        push    ecx
        mov     dword ptr [esp+0x14], edx
        lea     edx, [esp+0x20]
        mov     dword ptr [esp+0x18], eax
        push    edx
        lea     eax, [esp+0x30]
        push    eax
        lea     ecx, [esi+0x18c]
        call    FUN_00765f80
        pop     esi
        add     esp, 0x30
        ret     0x18
    }
}
