/*
 * FUN_005af250 (34 B) — __fastcall (ECX = this). Sets vtable 0x785b90,
 * calls FUN_005af230(this), FUN_00417980(this+0x178), FUN_004d9db0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005af230(void);
extern void __stdcall FUN_00417980(void);
extern void __stdcall FUN_004d9db0(void);

__declspec(naked) void __stdcall FUN_005af250(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x785B90
        call    FUN_005af230
        lea     ecx, [esi + 0x178]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004d9db0
        pop     esi
        ret
    }
}
