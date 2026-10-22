/*
 * FUN_005e6850 (77 B) — ProjectileWeapon::ExecutionStateEngine constructor.
 *
 * Allocates 0x24 bytes via FUN_004084d0; if non-null, calls
 * FUN_004dd270(0x46f, "ProjectileWeapon::ExecutionStateEngine", DAT_007f25b0,
 * 2, &DAT_007891d8, &LAB_005e68d0, FUN_005052a0) and stores the result in
 * DAT_007f255c. Otherwise stores 0 in DAT_007f255c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void FUN_004dd270(void);

__declspec(naked) void func_005e6850(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f255c;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      loc_5E6891

        mov eax, dword ptr [DAT_007f25b0]
        push    0x5052a0
        push    0x5e68d0
        push    0x7891d8
        push    2
        push    eax
        push    0x789204
        push    0x46f
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f255c], esi
        pop     esi
        ret

loc_5E6891:
        mov dword ptr [DAT_007f255c], 0x0
        pop     esi
        ret
    }


}
