/*
 * FUN_005EBD20 (77 B) — __cdecl, no args. Allocates a 0x24-byte
 * "BeamWeapon::ExecutionStateEngine" object (FUN_004dd270) and stores
 * it in DAT_007f2598, or nulls DAT_007f2598 on alloc failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_004dd270(void);

extern int DAT_007f25b0;
extern int DAT_007f2598;

__declspec(naked) void FUN_005ebd20(void)
{
    __asm {
        push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_fail
        mov     eax, dword ptr [DAT_007f25b0]
        push    0x5052a0
        push    0x5ebda0
        push    0x789b20
        push    2
        push    eax
        push    0x789b30
        push    0x453
        mov     ecx, esi
        call    FUN_004dd270
        mov     dword ptr [DAT_007f2598], esi
        pop     esi
        ret
    l_fail:
        mov     dword ptr [DAT_007f2598], 0
        pop     esi
        ret
    }
}
