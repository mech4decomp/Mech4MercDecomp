/*
 * FUN_5e0023e0 (75 B) — __thiscall (ECX=this). If flag at +0x4270 is set,
 * converts a float pair (param_1) to ints via __ftol, bounds-checks against
 * the surface size at +0x4018/+0x401c, and calls FUN_5e01ea10.
 *
 * __thiscall, RET 4 (one stack param).
 *
 * Match: target 100%
 */

extern void __cdecl FUN_5e02b4cc(void);
extern void __cdecl FUN_5e01ea10(void);

__declspec(naked) void __stdcall FUN_5e0023e0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     eax, dword ptr [esi + 0x4270]
        test    eax, eax
        jz      L_425
        mov     edi, dword ptr [esp + 0x10]
        fld     dword ptr [edi]
        call    FUN_5e02b4cc
        fld     dword ptr [edi + 0x4]
        mov     ebx, eax
        call    FUN_5e02b4cc
        cmp     ebx, dword ptr [esi + 0x4018]
        jge     L_425
        cmp     eax, dword ptr [esi + 0x401c]
        jge     L_425
        push    eax
        mov     eax, dword ptr [edi + 0x10]
        push    ebx
        push    eax
        lea     ecx, [esi + 0x400c]
        call    FUN_5e01ea10
L_425:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
