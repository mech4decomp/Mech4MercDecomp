/*
 * FUN_005b6c30 (59 B) — global MWInternalDamageObject constructor/init.
 * Allocates 0x20 bytes, initializes via FUN_004d5c10, stores global handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(unsigned int size);
extern void *__stdcall FUN_004d5c10(void);

__declspec(naked) void __stdcall FUN_005b6c30(void)
{
    

extern int DAT_007dc774;
extern int DAT_007f210c;
__asm {
push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_6c60
        mov ecx, dword ptr [DAT_007dc774]
        push    0x0
        push    0x0
        push    ecx
        push    0x7867c0
        push    0x48a
        mov     ecx, eax
        call    FUN_004d5c10
        mov dword ptr [DAT_007f210c], eax
        ret
L_6c60:
        mov dword ptr [DAT_007f210c], 0x0
        ret
    }


}
