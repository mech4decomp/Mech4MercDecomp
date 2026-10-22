/*
 * FUN_005a9a40 (116 B) — allocates a 0xa8-byte object, initializes it via
 * FUN_00501a20, and stores it in global 0x007f2098.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a9a40(void)
{
    

extern void __cdecl FUN_1004084cf(void);
extern int DAT_007f255c;
extern int DAT_007f2560;
extern void __cdecl FUN_1005019d4(void);
extern int DAT_007f2098;
__asm {
push    esi
        push    0xa8
        call FUN_1004084cf
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      lbl_fail
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2560]
        push    0x502c60
        push    0x5028b0
        push    0x6775b0
        push    0x0
        push    0x677590
        push    eax
        push    0x674b00
        push    0x5a9af0
        push    0x0
        push    0x0
        push    ecx
        push    0x7851e0
        push    0x4a4
        mov     ecx, esi
        call FUN_1005019d4
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f2098], esi
        pop     esi
        ret
    lbl_fail:
        mov dword ptr [DAT_007f2098], 0x0
        pop     esi
        ret
    }


}
