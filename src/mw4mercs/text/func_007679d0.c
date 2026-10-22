/*
 * FUN_007679d0 (107 B) - __thiscall helper (RET 0xc, 3 params).
 *
 * Computes param_1^2 and param_1^3, builds a small local struct, calls
 * FUN_0041c7d0, then builds another struct (with a 1.0f and 2*param_1)
 * and calls FUN_0041c680. Uses ESP-relative locals.
 *
 * __thiscall (ECX = this), RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007704c4;
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0041c680(void);

__declspec(naked) void __cdecl FUN_007679d0(void)
{
    __asm {
        sub     esp, 0x1c
        fld     dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        push    esi
        mov     esi, ecx
        push    esi
        fst     dword ptr [esp + 0x10]
        lea     ecx, [esp + 0xc]
        fst     dword ptr [esp + 0x8]
        push    ecx
        fmul    dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x18], eax
        fstp    dword ptr [esp + 0x10]
        call    FUN_0041c7d0
        fld     dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x2c]
        fmul    dword ptr [g_007704c4]
        push    esi
        lea     edx, [esp + 0x18]
        push    edx
        fstp    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x24], 0x3f800000
        fld     dword ptr [esp + 0x2c]
        fadd    st(0), st(0)
        fstp    dword ptr [esp + 0x20]
        call    FUN_0041c680
        pop     esi
        add     esp, 0x1c
        ret     0xc
    }
}
