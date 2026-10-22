/*
 * FUN_005b40f0 (83 B) — Airplane subsystem teardown. Frees the object at
 * 0x007f2104 (via FUN_00501b40 + FUN_004084e0), then frees the object at
 * 0x007f20f8 and its inner pointer, zeroing both globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void FUN_005b40f0(void)
{
    

extern int DAT_007f2104;
extern int DAT_007f20f8;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2104]
        test    esi, esi
        jz      L_410b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_410b:
        mov esi, dword ptr [DAT_007f20f8]
        test    esi, esi
        mov dword ptr [DAT_007f2104], 0x0
        jz      L_4137
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_412e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_412e:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_4137:
        mov dword ptr [DAT_007f20f8], 0x0
        pop     esi
        ret
    }


}
