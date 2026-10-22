/*
 * FUN_00553610 (52 B) — Copies string, trims trailing char, frees if empty.
 * Bytes: 8B 89 84 03 00 00 56 8B 74 24 08 57 56 E8 7E 59 0A 00 85 F6 8B F8 74 15 8A 4E FF 8D 46 FF FE C9 88 08 75 09 50 E8 A6 4E EB FF 83 C4 04 8B C7 5F 5E C2 04 00
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00553610(void)
{
    

extern void __cdecl FUN_005f8f98(void);
extern void __cdecl FUN_1004084c0(void);
__asm {
mov     ecx, dword ptr [ecx + 0x384]
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        push    esi
        call FUN_005f8f98
        test    esi, esi
        mov     edi, eax
        je      label_done
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_done
        push    eax
        call FUN_1004084c0
        add     esp, 4
label_done:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    }


}
