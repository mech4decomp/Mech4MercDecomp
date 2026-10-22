/*
 * FUN_10003250 (53 B, __thiscall) - constructor wrapper. Calls FUN_10006180
 * on a temp, FUN_10006190 on this, then FUN_10003170 and stores result.
 *
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10006180(void);
extern void __cdecl FUN_10006190(void);
extern void __cdecl FUN_10003170(void);

__declspec(naked) void FUN_10003250(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_10006180
        lea     ecx, [esp+0x8]
        push    ecx
        mov     ecx, esi
        call    FUN_10006190
        mov     edx, dword ptr [esi]
        push    edx
        mov     ecx, 0x10027528
        call    FUN_10003170
        mov     ecx, dword ptr [esi+0x4]
        mov     dword ptr [ecx], eax
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
