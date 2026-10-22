/*
 * MW4Stats.dll - FUN_10003320 (0x10003320, 25 B, __fastcall)
 * Calls a function pointer at +0x4 with 3 args (+0x8,+0x10,+0x14),
 * stores the result through the pointer at +0xc.
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void __cdecl FUN_10003320(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi + 0x8]
        push    eax
        push    ecx
        push    edx
        call    dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [ecx], eax
        pop     esi
        ret
    }
}
