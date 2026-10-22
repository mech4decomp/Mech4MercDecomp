/*
 * FUN_005bb820 (59 B) — no args, RET.
 *
 * Allocates 0x20 bytes; if successful, constructs a MWVideoRenderer
 * (FUN_004d5c10) and stores it in global 0x7F2268, else stores NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004084d0(void);
extern void __fastcall FUN_004d5c10(void);

__declspec(naked) void FUN_005bb820(void)
{
    

extern int DAT_007dc6dc;
extern int DAT_007f2268;
__asm {
push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L1
        mov ecx, dword ptr [DAT_007dc6dc]
        push    0
        push    0
        push    ecx
        push    0x7870D4
        push    0x480
        mov     ecx, eax
        call    FUN_004d5c10
        mov dword ptr [DAT_007f2268], eax
        ret
L1:
        mov dword ptr [DAT_007f2268], 0x0
        ret
    }


}
