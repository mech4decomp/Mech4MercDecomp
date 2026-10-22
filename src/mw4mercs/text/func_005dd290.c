/*
 * FUN_005dd290 (43 B) — calls FUN_005dd2c0(), allocates 0xC bytes via
 * FUN_004084d0; if non-null, calls FUN_00652560() and stores result in
 * DAT_007f24d0, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dd2c0(void);
extern void *__cdecl FUN_004084d0(int size);
extern int __cdecl FUN_00652560(void);

__declspec(naked) void __stdcall FUN_005dd290(void)
{
    

extern int DAT_007f24d0;
__asm {
call    FUN_005dd2c0
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5dd2b0
        mov     ecx, eax
        call    FUN_00652560
        mov dword ptr [DAT_007f24d0], eax
        ret
L_5dd2b0:
        mov dword ptr [DAT_007f24d0], 0x0
        ret
    }


}
