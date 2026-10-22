/*
 * FUN_004c40e0 (88 B) — MLR camera __thiscall. Computes tan-based
 * frustum values and tail-calls FUN_004c3e50 with 6 float args.
 * FPU-heavy (fptan).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d070;

extern void __cdecl FUN_004c3e50(void);

__declspec(naked) void FUN_004c40e0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        fld     dword ptr [eax]
        mov     eax, dword ptr [eax]
        fmul    dword ptr [g_0076d070]
        push    ecx
        mov     dword ptr [ecx+0x224], eax
        fptan
        fstp    st(0)
        fmul    dword ptr [esp+0x8]
        fst     dword ptr [esp+0x10]
        fmul    dword ptr [esp+0x14]
        mov     eax, dword ptr [esp+0x10]
        fstp    dword ptr [esp+0x14]
        fld     dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0x14]
        fchs
        fstp    dword ptr [esp]
        push    edx
        fld     dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0x10]
        push    ecx
        fchs
        fstp    dword ptr [esp]
        push    eax
        mov     eax, dword ptr [esp+0x14]
        push    edx
        push    eax
        call    FUN_004c3e50
        ret     0x10
    }
}
