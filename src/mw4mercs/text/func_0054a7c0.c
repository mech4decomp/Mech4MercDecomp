/*
 * FUN_0054a7c0 (55 B) — Looks up in table, calls FUN_0072F4E8 twice conditionally.
 * Bytes: A1 B4 C6 7D 00 8B 40 34 85 C0 56 74 26 8A 50 50 84 D2 74 1F 8B 54 24 08 8B B4 91 B8 04 00 00 85 F6 74 10 56 E8 E7 47 1E 00 84 C0 74 06 56 E8 4D 47 1E 00 5E C2 04 00
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0054a7c0(void)
{
    

extern int DAT_007dc6b4;
extern void __cdecl FUN_0072efb1(void);
extern void __cdecl FUN_0072ef17(void);
__asm {
mov eax, dword ptr [DAT_007dc6b4]
        mov     eax, dword ptr [eax + 0x34]
        test    eax, eax
        push    esi
        je      label_done
        mov     dl, byte ptr [eax + 0x50]
        test    dl, dl
        je      label_done
        mov     edx, dword ptr [esp + 8]
        mov     esi, dword ptr [ecx + edx * 4 + 0x4B8]
        test    esi, esi
        je      label_done
        push    esi
        call FUN_0072efb1
        test    al, al
        je      label_done
        push    esi
        call FUN_0072ef17
label_done:
        pop     esi
        ret     4
    }


}
