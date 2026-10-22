/*
 * FUN_005ed0b0 (40 B) — destructor, __thiscall (ECX = this).
 *
 * Sets vtable 0x789d0c, destroys sub-object at this+0x23C (FUN_00417980),
 * destroys sub-object at this+0x210 (FUN_0041fc90), then calls base
 * destructor FUN_004d9db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00417980(void);
extern void __fastcall FUN_0041fc90(void);
extern void __fastcall FUN_004d9db0(void);

__declspec(naked) void __fastcall FUN_005ed0b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x23C]
        mov     dword ptr [esi], 0x789D0C
        call    FUN_00417980
        lea     ecx, [esi + 0x210]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_004d9db0
        pop     esi
        ret
    }
}
