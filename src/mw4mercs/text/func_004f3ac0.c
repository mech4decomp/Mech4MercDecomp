/*
 * FUN_004f3ac0 (51 B) — MLR/Adept component destructor (__thiscall).
 * Sets the vtable, tears down the +0x170 and +0x178 sub-objects, then
 * calls the base destructor FUN_004d9db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004d9db0(void);

__declspec(naked) void FUN_004f3ac0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x170]
        mov     ecx, edi
        mov     dword ptr [esi], 0x775130
        call    FUN_004179f0
        lea     ecx, [esi + 0x178]
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004d9db0
        pop     edi
        pop     esi
        ret
    }
}
