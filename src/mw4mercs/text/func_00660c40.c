/*
 * FUN_00660c40 (79 B) — __thiscall constructor.
 *
 * Calls FUN_006a24c0(), sets vtable 0x7952d0, calls FUN_006a2800(0x3fc00000,
 * 0x41200000), FUN_006a28d0(), sets vtable 0x795334, calls
 * FUN_006a2400(1,0x3f800000), FUN_006a28d0(), sets vtable 0x7953c8.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a24c0(void);
extern void __cdecl FUN_006a2800(float a, float b);
extern void __cdecl FUN_006a28d0(void);
extern void __cdecl FUN_006a2400(int a, float b);

__declspec(naked) void FUN_00660c40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a24c0
        push    0x41200000
        push    0x3fc00000
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esi], 0x7952d0
        call    FUN_006a2800
        lea     ecx, [esi + 0x1c]
        call    FUN_006a28d0
        push    0x3f800000
        push    0x1
        lea     ecx, [esi + 0x28]
        mov     dword ptr [esi], 0x795334
        call    FUN_006a2400
        lea     ecx, [esi + 0x38]
        call    FUN_006a28d0
        mov     dword ptr [esi], 0x7953c8
        mov     eax, esi
        pop     esi
        ret
    }
}
