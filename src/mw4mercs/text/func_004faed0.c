/*
 * FUN_004faed0 (229 B) — Adept::Mover motion integration (__thiscall,
 * RET 0x8, 1 double param). Computes velocity/acceleration products via
 * FPU and calls FUN_0041b140 / FUN_0041afd0 / FUN_0041b320 /
 * FUN_0041a160 / FUN_004daa20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041b140(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_004daa20(void);

__declspec(naked) void FUN_004faed0(void)
{
    __asm {
        sub     esp, 0x78
        fld     qword ptr [esp + 0x7c]
        push    esi
        mov     esi, ecx
        fsub    qword ptr [esi + 0xec]
        mov     eax, dword ptr [esi + 0x110]
        fld     dword ptr [esi + 0x100]
        push    edi
        lea     edi, [esi + 0xf4]
        fld     st(1)
        fmul    dword ptr [esi + 0x198]
        mov     ecx, dword ptr [edi + 0x2c]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ecx
        fadd    st(0), st(1)
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x24]
        fstp    dword ptr [esp + 0xc]
        fstp    st(0)
        fld     st(0)
        fmul    dword ptr [esi + 0x19c]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fld     st(0)
        fmul    dword ptr [esi + 0x1a0]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x14]
        fld     st(0)
        fmul    dword ptr [esi + 0x1a4]
        fstp    dword ptr [esp + 0x18]
        fld     st(0)
        fmul    dword ptr [esi + 0x1a8]
        fstp    dword ptr [esp + 0x1c]
        fmul    dword ptr [esi + 0x1ac]
        fstp    dword ptr [esp + 0x20]
        call    FUN_0041b140
        push    edi
        lea     ecx, [esp + 0x34]
        call    FUN_0041afd0
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_0041b320
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x5c], edx
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x7c], ecx
        push    edx
        lea     ecx, [esp + 0x54]
        mov     dword ptr [esp + 0x70], eax
        call    FUN_0041a160
        lea     eax, [esp + 0x50]
        push    eax
        mov     ecx, esi
        call    FUN_004daa20
        pop     edi
        pop     esi
        add     esp, 0x78
        ret     0x8
    }
}
