/*
 * FUN_005af140 (101 B) — __cdecl. Allocates 0xa4 bytes (FUN_004084d0 = new).
 * If non-null, calls FUN_00501a20 with a large argument list and stores the
 * result in DAT_007f20e0; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(unsigned int size);
extern void *__stdcall FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005af140(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007dc690;
extern int DAT_007f20e0;
__asm {
push    0xA4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      fail
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007dc690]
        push    0x502C60
        push    0x5028B0
        push    0x678540
        push    0x0
        push    0x678410
        push    ecx
        push    0x678430
        push    0x5AF1E0
        push    0x0
        push    0x0
        push    edx
        push    0x785B70
        push    0x498
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f20e0], eax
        ret
fail:
        mov dword ptr [DAT_007f20e0], 0x0
        ret
    }


}
