/*
 * FUN_005abd40 (59 B) — __cdecl HeatManager singleton init.
 *
 * Allocates 0x20 bytes; if success, constructs a HeatManager
 * (FUN_004d5c10) and stores it in DAT_007f20c8, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *FUN_004d5c10(unsigned int, const char *, void *, int, int);

__declspec(naked) void __cdecl FUN_005abd40(void)
{
    

extern int DAT_007dc140;
extern int DAT_007f20c8;
__asm {
push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      zero
        mov ecx, dword ptr [DAT_007dc140]
        push    0x0
        push    0x0
        push    ecx
        push    0x78593c
        push    0x49c
        mov     ecx, eax
        call    FUN_004d5c10
        mov dword ptr [DAT_007f20c8], eax
        ret
zero:
        mov dword ptr [DAT_007f20c8], 0x0
        ret
    }


}
