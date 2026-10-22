/*
 * FUN_005a7fd0 (101 B) — Allocates 0xA4 bytes, constructs an object, stores
 *                        result in global at 0x007f207c.
 *
 * __stdcall, no parameters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern int __stdcall FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005a7fd0(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007dc690;
extern int DAT_007f207c;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      label_fail
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x501b70
        push    0x5a8070
        push    0x0
        push    0x0
        push    edx
        push    0x784dbc
        push    0x4aa
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f207c], eax
        ret
label_fail:
        mov dword ptr [DAT_007f207c], 0x0
        ret
    }


}
