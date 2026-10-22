/*
 * FUN_005a6c30 (116 B) — Allocates and initializes a weapon object.
 *
 * Allocates 0xa8 bytes via FUN_004084d0 (operator new).
 * If successful, calls FUN_00501a20 with many parameters,
 * sets a vtable pointer, and stores the result in a global.
 * If allocation fails, sets the global to NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern int __fastcall FUN_00501a20(int, const char *, int, int, int, ...);

__declspec(naked) void __fastcall FUN_005a6c30(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2560;
extern int DAT_007f2070;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      alloc_fail
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2560]
        push    0x502c60
        push    0x5028b0
        push    0x6775b0
        push    0
        push    0x677590
        push    eax
        push    0x674b00
        push    0x5a6ce0
        push    0
        push    0
        push    ecx
        push    0x784af0
        push    0x4ac
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov     dword ptr [DAT_007f2070], esi
        pop     esi
        ret
alloc_fail:
        mov dword ptr [DAT_007f2070], 0x0
        pop     esi
        ret
    }


}
