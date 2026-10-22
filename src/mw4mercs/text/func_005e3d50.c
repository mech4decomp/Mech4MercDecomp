/*
 * FUN_005e3d50 (77 B) — Singleton allocator/initializer.
 *
 * Allocates 0x24 bytes via FUN_004084d0 (__cdecl). If non-null,
 * calls FUN_004dd270 (__thiscall on the new object, 7 stack
 * params) and stores the object in global 0x7f254c; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084d0(void);
extern void FUN_004dd270(void);

__declspec(naked) void __stdcall FUN_005e3d50(void)
{
    

extern int DAT_007dc8c4;
extern int DAT_007f254c;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      store_zero
        mov eax, dword ptr [DAT_007dc8c4]
        push    0x5052a0
        push    0x5e3dd0
        push    0x788ed0
        push    0x7
        push    eax
        push    0x788f84
        push    0x472
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f254c], esi
        pop     esi
        ret
store_zero:
        mov dword ptr [DAT_007f254c], 0x0
        pop     esi
        ret
    }


}
