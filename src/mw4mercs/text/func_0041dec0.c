/*
 * FUN_0041dec0 (23 B) — __thiscall (ECX=this). Destructor: sets vtable
 * ptr [this]=0x76d720, calls FUN_0041e010 (ECX=this) then FUN_0041e710
 * (ECX=this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e010(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void FUN_0041dec0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x76d720
        call    FUN_0041e010
        mov     ecx, esi
        call    FUN_0041e710
        pop     esi
        ret
    }
}
