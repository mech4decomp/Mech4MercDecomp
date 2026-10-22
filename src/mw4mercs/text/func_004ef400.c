/*
 * FUN_004ef400 (59 B) — MLR/Adept application core. Allocates a 0x20-byte
 * object (operator new FUN_004084d0); on success constructs it via
 * __thiscall FUN_004d5c10(0x21f, "Adept::ScalabeShapeComponent",
 * DAT_007dc83c, 0, 0) and stores the result in DAT_007dc814; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern int g_007dc83c;
extern int g_007dc814;

__declspec(naked) void FUN_004ef400(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L430
        mov     ecx, dword ptr [g_007dc83c]
        push    0x0
        push    0x0
        push    ecx
        push    0x774c40
        push    0x21f
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc814], eax
        ret
L430:
        mov     dword ptr [g_007dc814], 0x0
        ret
    }
}
