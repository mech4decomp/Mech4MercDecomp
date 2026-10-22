/*
 * FUN_006963E0 (77 B, true extent 0x6963E0-0x69642D) — __thiscall (ret 0xc).
 * Calls FUN_00696B20; if nonzero, builds args and calls FUN_00681640 /
 * FUN_00695A20, then frees via FUN_004084E0.
 *
 * NOTE: the enclosing data block (514 B) also contains a second function
 * at 0x696430 (reported as extra, not transcribed here).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00696B20(void);
extern void __cdecl FUN_00681640(void);
extern void __cdecl FUN_00695A20(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_006963E0(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        call    FUN_00696B20
        test    al, al
        je      L_696426
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx]
        push    eax
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        call    FUN_00681640
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 8
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00695A20
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        je      L_696426
        push    eax
        call    FUN_004084E0
        add     esp, 4
L_696426:
        pop     esi
        add     esp, 0xc
        ret     0xc
    }
}
