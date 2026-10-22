/*
 * FUN_1000cd30 (56 B) - __stdcall. If param_2[3] (len) != 0, forwards to
 * FUN_1000cd70 with param_2's data buffer; otherwise forwards with the
 * default string @ 0x100274ec.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_100274ec[]; /* @ 0x100274ec */
extern void FUN_1000cd70(void);

__declspec(naked) void __cdecl FUN_1000cd30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jbe     L50
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x4]
        push    ecx
        push    eax
        push    edx
        call    FUN_1000cd70
        ret     0xc
L50:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, offset g_100274ec
        push    ecx
        push    eax
        push    edx
        call    FUN_1000cd70
        ret     0xc
    }
}
