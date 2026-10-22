/*
 * FUN_10003980 (91 B, __thiscall) - init helper. Calls FUN_100032d0; on
 * failure returns 0x80040210. Copies fields, sets up +0x14/+0x18, calls
 * FUN_10004360 and FUN_100038f0.
 *
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_100032d0(void);
extern void __cdecl FUN_10004360(void);
extern void __cdecl FUN_100038f0(void);

__declspec(naked) void FUN_10003980(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100032d0
        test    eax, eax
        jz      L1
        mov     eax, 0x80040210
        pop     esi
        ret     0x4
L1:
        mov     eax, dword ptr [esp+0x8]
        mov     ecx, dword ptr [eax+0x4]
        mov     edx, dword ptr [eax+0x8]
        mov     dword ptr [esi+0xc], ecx
        mov     ecx, dword ptr [eax+0x14]
        mov     dword ptr [esi+0x10], edx
        mov     edx, dword ptr [eax+0x18]
        mov     dword ptr [esi+0x1c], ecx
        push    0
        mov     ecx, esi
        mov     dword ptr [esi+0x20], edx
        mov     dword ptr [esi+0x14], 0x65
        mov     dword ptr [esi+0x18], 0x100242ac
        call    FUN_10004360
        push    eax
        add     esi, 0x8
        push    esi
        mov     ecx, 0x100274f0
        call    FUN_100038f0
        pop     esi
        ret     0x4
    }
}
