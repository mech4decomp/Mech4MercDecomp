/*
 * FUN_004eefc0 (59 B) — MLR/Adept application core. Allocates a 0x20-byte
 * object (operator new FUN_004084d0); on success constructs it via
 * __thiscall FUN_004d5c10(0x221, "Adept::gosFXComponent", DAT_007dc83c, 0, 0)
 * and stores the result in DAT_007dc810; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern int g_007dc83c;
extern int g_007dc810;

__declspec(naked) void FUN_004eefc0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      Lff0
        mov     ecx, dword ptr [g_007dc83c]
        push    0x0
        push    0x0
        push    ecx
        push    0x774c14
        push    0x221
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc810], eax
        ret
Lff0:
        mov     dword ptr [g_007dc810], 0x0
        ret
    }
}
