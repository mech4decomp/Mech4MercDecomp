/*
 * FUN_005e68a0 (39 B) — ProjectileWeapon::ExecutionStateEngine destructor.
 *
 * If DAT_007f255c is non-null, calls FUN_004dd340() (thiscall) then
 * FUN_004084e0(ptr). Always clears DAT_007f255c to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd340(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void func_005e68a0(void)
{
    

extern int DAT_007f255c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f255c]
        test    esi, esi
        jz      loc_5E68BB

        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 4

loc_5E68BB:
        mov dword ptr [DAT_007f255c], 0x0
        pop     esi
        ret
    }


}
