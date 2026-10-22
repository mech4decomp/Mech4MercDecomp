/*
 * FUN_00551c20 (49 B) — Checks pointer, calls FUN_004152E6, returns field or pointer.
 * Bytes: 56 8B 74 24 08 85 F6 75 06 33 C0 5E C2 04 00 A1 A4 26 7F 00 8B 4E 04 50 E8 F3 35 EC FF 84 C0 74 0A 8B 86 80 02 00 00 85 C0 75 02 8B C6 5E C2 04 00
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00551c20(void)
{
    

extern int DAT_007f26a4;
extern void __cdecl FUN_10041521d(void);
__asm {
push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jne     label_nonnull
        xor     eax, eax
        pop     esi
        ret     4
label_nonnull:
        mov eax, dword ptr [DAT_007f26a4]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_10041521d
        test    al, al
        je      label_return_ptr
        mov     eax, dword ptr [esi + 0x280]
        test    eax, eax
        jne     label_done
label_return_ptr:
        mov     eax, esi
label_done:
        pop     esi
        ret     4
    }


}
