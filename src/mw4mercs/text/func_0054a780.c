/*
 * FUN_0054a780 (55 B) — Checks field, looks up in table, calls FUN_0072F4E8.
 * Bytes: 8A 81 75 01 00 00 84 C0 74 2A A1 B4 C6 7D 00 8B 40 34 85 C0 74 1E 8A 50 50 84 D2 74 17 8B 54 24 04 8B 84 91 B8 04 00 00 85 C0 74 08 6A 01 50 E8 6C 47 1E 00 C2 04 00
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0054a780(void)
{
    

extern int DAT_007dc6b4;
extern void __cdecl FUN_0072eef6(void);
__asm {
mov     al, byte ptr [ecx + 0x175]
        test    al, al
        je      label_done
        mov eax, dword ptr [DAT_007dc6b4]
        mov     eax, dword ptr [eax + 0x34]
        test    eax, eax
        je      label_done
        mov     dl, byte ptr [eax + 0x50]
        test    dl, dl
        je      label_done
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx + edx * 4 + 0x4B8]
        test    eax, eax
        je      label_done
        push    1
        push    eax
        call FUN_0072eef6
label_done:
        ret     4
    }


}
