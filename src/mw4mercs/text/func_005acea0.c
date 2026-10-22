/*
 * FUN_005acea0 (39 B) — no args.
 *
 * If DAT_007f20d4 != 0: call FUN_004dd340() (this=ptr) then
 * FUN_004084e0(ptr). Always sets DAT_007f20d4 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004dd340(void *this);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005acea0(void)
{
    

extern int DAT_007f20d4;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20d4]
        test    esi, esi
        jz      L_bb
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_bb:
        mov dword ptr [DAT_007f20d4], 0x0
        pop     esi
        ret
    }


}
