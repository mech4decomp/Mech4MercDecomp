/*
 * FUN_00592EF7 (141 B) — __stdcall RET 0x4 (1 param). Leading NOP + a
 * 6-dword jump table (tail of the prior function, literal bytes), then a
 * __thiscall-style destructor that sets the vtable (0x782aac), shrinks
 * three string buffers (0x3c/0x34/0x30) and frees them via FUN_004084E0,
 * calls FUN_00415380, and conditionally frees the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00592EF7(void)
{
    __asm {
        nop
        /* jump-table data @ 0x592EF8 (6 relocated dwords, literal bytes) */
        __emit 0xA8  /* 0x00592EA8 */
        __emit 0x2E
        __emit 0x59
        __emit 0x00
        __emit 0xA2  /* 0x00592EA2 */
        __emit 0x2E
        __emit 0x59
        __emit 0x00
        __emit 0xAE  /* 0x00592EAE */
        __emit 0x2E
        __emit 0x59
        __emit 0x00
        __emit 0xB7  /* 0x00592EB7 */
        __emit 0x2E
        __emit 0x59
        __emit 0x00
        __emit 0xBD  /* 0x00592EBD */
        __emit 0x2E
        __emit 0x59
        __emit 0x00
        __emit 0xC3  /* 0x00592EC3 */
        __emit 0x2E
        __emit 0x59
        __emit 0x00
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x782aac
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        je      L592f33
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L592f33
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L592f33:
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        je      L592f4d
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L592f4d
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L592f4d:
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        je      L592f67
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L592f67
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L592f67:
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je      L592f7e
        push    esi
        call    FUN_004084E0
        add     esp, 4
    L592f7e:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
