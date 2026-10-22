/*
 * FUN_0041ed40 (66 B) — __thiscall stream method: reads a bit-field via
 * FUN_0041eb40 (ReadBits) into a temp, then calls FUN_004212c0 to decode,
 * storing the result through the out-param. Bit-stream reader family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_004212c0(void);

__declspec(naked) void FUN_0041ed40(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        push    edi
        lea     eax, [esp + 0xc]
        mov     esi, ecx
        push    eax
        mov     dword ptr [esp + 0x10], 0x0
        call    FUN_0041eb40
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x8]
        push    edi
        push    ecx
        push    edx
        push    eax
        call    FUN_004212c0
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0x10
        mov     dword ptr [ecx], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x10
    }
}
