/*
 * FUN_100395d7 (24 B) - __cdecl. Fragment (uses EBP frame set up by caller
 * FUN_10039528): restores ESP, clears a local, calls FUN_1003786e, then
 * jumps back into FUN_10039528's epilogue at 0x100395be.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003786e(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_100395d7(void)
{
    __asm {
        mov     esp, dword ptr [ebp - 0x18]
        and     dword ptr [ebp - 0x2c], 0x0
        push    -1
        lea     eax, [ebp - 0x10]
        push    eax
        call    FUN_1003786e
        pop     ecx
        pop     ecx
        xor     eax, eax
        /* __emit: backward jmp to 0x100395be (outside this fragment) */
        __emit 0xEB
        __emit 0xCF
    }
}
