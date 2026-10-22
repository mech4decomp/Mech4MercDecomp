/*
 * FUN_005c5d20 (72 B) — __thiscall, RET 0. Sets flags and dispatches a
 * virtual method.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dd220(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_005c68b0(void);

__declspec(naked) void __stdcall FUN_005c5d20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005dd220
        push    0x3
        mov     byte ptr [esi + 0x5a0], 0x1
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        call    FUN_005c68b0
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [ecx]
        push    0x1
        mov     byte ptr [esi + 0x6a0], 0x1
        mov     byte ptr [esi + 0x1c4], 0x1
        call    dword ptr [eax + 0x10c]
        pop     esi
        ret
    }
}
