/*
 * MW4Stats.dll - FUN_10003930 (0x10003930, 68 B, __fastcall)
 * SEH prologue; calls FUN_10004380(this), then FUN_100043b0(this+8).
 * Returns this (ECX).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10004380(void);
extern void __cdecl FUN_100043b0(void);

__declspec(naked) void FUN_10003930(void)
{
    __asm {
        push -0x1
        push 0x1001f408
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp+0x4], esi
        call FUN_10004380
        lea ecx, [esi+0x8]
        mov dword ptr [esp+0x10], 0x0
        call FUN_100043b0
        mov ecx, dword ptr [esp+0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
