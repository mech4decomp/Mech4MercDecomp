/*
 * FUN_005c0280 (104 B) — constructor/initializer.
 *
 * Allocates 0xa4 bytes via FUN_004084d0; if non-null, calls FUN_00501a20
 * with a large argument list and stores the result to [0x007f22bc];
 * otherwise stores 0 to [0x007f22bc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_004084d0(unsigned int size);
extern void *FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005c0280(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f23b0;
extern int DAT_007f22bc;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_dd
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007f23b0]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5c0320
        push    0x7874d0
        push    1
        push    edx
        push    0x7874dc
        push    0x4b4
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f22bc], eax
        ret
L_dd:
        mov dword ptr [DAT_007f22bc], 0x0
        ret
    }


}
