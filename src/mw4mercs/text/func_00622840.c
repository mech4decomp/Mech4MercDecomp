/*
 * FUN_00622840 (60 B) — __cdecl.
 *
 * Reads a global object pointer, XORs a global key, and if the resulting
 * object's [obj+0x40] field != 0x85739531, calls FUN_00629290(0x12) twice
 * and then FUN_0062b620().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int DAT_007dab44;
extern unsigned int DAT_007dab40;
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_0062b620(void);

__declspec(naked) void FUN_00622840(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        push    esi
        mov     esi, dword ptr [ecx + 0x40]
        xor     esi, 0x85739531
        jz      L_done
        push    0x12
        mov     ecx, esi
        call    FUN_00629290
        test    eax, eax
        jz      L_done
        push    0x12
        mov     ecx, esi
        call    FUN_00629290
        test    eax, eax
        jz      L_done
        mov     ecx, eax
        call    FUN_0062b620
    L_done:
        pop     esi
        ret
    }
}
