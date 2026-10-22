/*
 * FUN_006a57b0 (40 B) — computes a thiscall target from a global object,
 * calls FUN_004f8480(param), returns (result != 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_004f8480(void);

__declspec(naked) int FUN_006a57b0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        push    ecx
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        call    FUN_004f8480
        test    eax, eax
        setnz   al
        ret
    }
}
