/*
 * FUN_10003B20 (59 B, __thiscall) - checks FUN_100043a0; on failure returns
 * 0x80040290. Otherwise calls FUN_100032d0, then FUN_10004360 and an
 * indirect virtual call through [EDI+0x1c].
 *
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_100043a0(void);
extern void __cdecl FUN_100032d0(void);
extern void __cdecl FUN_10004360(void);

__declspec(naked) void FUN_10003B20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100043a0
        test    al, al
        jz      L1
        mov     eax, 0x80040290
        pop     esi
        ret     0x8
L1:
        push    edi
        mov     ecx, esi
        call    FUN_100032d0
        mov     ecx, dword ptr [esp+0x10]
        mov     esi, eax
        mov     edi, dword ptr [esi]
        push    0
        call    FUN_10004360
        push    eax
        mov     eax, dword ptr [esp+0x14]
        push    eax
        push    esi
        call    dword ptr [edi+0x1c]
        pop     edi
        pop     esi
        ret     0x8
    }
}
