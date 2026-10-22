/*
 * FUN_006a3d70 (78 B) — __fastcall constructor (this in ECX).
 *
 * Calls base ctor FUN_006a24c0, then member ctors FUN_006a2800 /
 * FUN_006a28d0 / FUN_006a2400, walking vtable 0x7952d0 -> 0x795334 ->
 * 0x799ddc. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a24c0(void);
extern void __cdecl FUN_006a2800(int a, int b);
extern void __cdecl FUN_006a28d0(void);
extern void __cdecl FUN_006a2400(int a, int b);

__declspec(naked) void FUN_006a3d70(void)
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
        mov     dword ptr [esi + 0x38], 0x0
        mov     dword ptr [esi], 0x799ddc
        mov     eax, esi
        pop     esi
        ret
    }
}
