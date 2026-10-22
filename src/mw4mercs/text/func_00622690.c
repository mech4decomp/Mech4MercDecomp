/*
 * FUN_00622690 (116 B) — Accumulate a float, fire callbacks on overflow.
 *
 * __thiscall (ECX = this), RET 4 (one float param). Adds param to
 * this->[0x2f0]; if the result exceeds the constant at 0x76d064,
 * converts the fractional part via _ftol and calls six methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;
extern int __cdecl FUN_0075db4a(void);          /* _ftol */
extern void __cdecl FUN_00622100(int param);
extern void __cdecl FUN_006221d0(int param);
extern void __cdecl FUN_006225c0(int param);
extern void __cdecl FUN_00622600(void);
extern void __cdecl FUN_00622710(void);
extern void __cdecl FUN_00622840(void);

__declspec(naked) void __fastcall FUN_00622690(float param)
{
    __asm {
        fld     dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        fadd    dword ptr [esi + 0x2f0]
        fcom    dword ptr [g_76d064]
        fst     dword ptr [esi + 0x2f0]
        fnstsw  ax
        test    ah, 1
        jnz     l_done
        fld     st(0)
        push    edi
        call    FUN_0075db4a
        mov     edi, eax
        mov     dword ptr [esp + 0xc], edi
        fild    dword ptr [esp + 0xc]
        push    edi
        mov     ecx, esi
        fsubr   st(0), st(1)
        fstp    dword ptr [esi + 0x2f0]
        fstp    st(0)
        call    FUN_00622100
        push    edi
        mov     ecx, esi
        call    FUN_006221d0
        push    edi
        mov     ecx, esi
        call    FUN_006225c0
        mov     ecx, esi
        call    FUN_00622600
        mov     ecx, esi
        call    FUN_00622710
        mov     ecx, esi
        call    FUN_00622840
        pop     edi
        pop     esi
        ret     4
    l_done:
        fstp    st(0)
        pop     esi
        ret     4
    }
}
