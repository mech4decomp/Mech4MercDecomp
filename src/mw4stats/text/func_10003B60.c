/*
 * FUN_10003B60 (43 B, __thiscall) - checks FUN_100043a0; on failure returns
 * 0x80040290. Otherwise calls FUN_100032d0 and an indirect virtual call
 * through [ECX+0x18].
 *
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_100043a0(void);
extern void __cdecl FUN_100032d0(void);

__declspec(naked) void FUN_10003B60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100043a0
        test    al, al
        jz      L1
        mov     eax, 0x80040290
        pop     esi
        ret     0x4
L1:
        mov     ecx, esi
        call    FUN_100032d0
        mov     edx, dword ptr [esp+0x8]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx+0x18]
        pop     esi
        ret     0x4
    }
}
