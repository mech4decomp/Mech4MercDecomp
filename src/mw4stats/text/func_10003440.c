/*
 * FUN_10003440 (33 B, __fastcall) - indirect call through function pointer
 * at +0x4 with 5 args from fields, stores result at +0xc.
 *
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void __cdecl FUN_10003440(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x1c]
        mov     ecx, dword ptr [esi+0x18]
        mov     edx, dword ptr [esi+0x14]
        push    eax
        mov     eax, dword ptr [esi+0x10]
        push    ecx
        mov     ecx, dword ptr [esi+0x8]
        push    edx
        push    eax
        push    ecx
        call    dword ptr [esi+0x4]
        mov     edx, dword ptr [esi+0xc]
        mov     dword ptr [edx], eax
        pop     esi
        ret
    }
}
