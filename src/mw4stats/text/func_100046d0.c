/*
 * MW4Stats.dll - FUN_100046d0 (0x100046D0, 137 B, __fastcall)
 * Constructor with SEH prologue. Calls FUN_10003890(this), then initializes
 * four 0x400-byte buffers at +0x1c/+0xb4/+0x150/+0x1e8 via FUN_10001170,
 * sets vtable at *this = 0x10021250. Transcribed from reference bytes.
 */
extern void __cdecl FUN_10003890(void);
extern void __cdecl FUN_10001170(void);

__declspec(naked) void FUN_100046d0(void)
{
    __asm {
        push -0x1
        push 0x1001f507
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp+0x4], esi
        call FUN_10003890
        push 0x400
        lea ecx, [esi+0x1c]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0xb4]
        mov dword ptr [esp+0x14], 0x0
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x150]
        mov byte ptr [esp+0x14], 0x1
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x1e8]
        mov byte ptr [esp+0x14], 0x2
        call FUN_10001170
        mov ecx, dword ptr [esp+0x8]
        mov dword ptr [esi], 0x10021250
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
