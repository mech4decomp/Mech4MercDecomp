/*
 * MW4Stats.dll - FUN_10004e50 (0x10004E50, 355 B, __fastcall)
 * Constructor with SEH prologue. Calls FUN_10004fc0(this), FUN_10006170(this+4),
 * then initializes 17 0x400-byte buffers via FUN_10001170, sets vtable
 * *this = 0x10021254, calls FUN_10004fe0(this). Transcribed from reference bytes.
 */
extern void __cdecl FUN_10004fc0(void);
extern void __cdecl FUN_10006170(void);
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_10004fe0(void);

__declspec(naked) void FUN_10004e50(void)
{
    __asm {
        push -0x1
        push 0x1001f64b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp+0x4], esi
        call FUN_10004fc0
        lea ecx, [esi+0x4]
        call FUN_10006170
        push 0x400
        lea ecx, [esi+0x8]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0xa0]
        mov dword ptr [esp+0x14], 0x0
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x138]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x1d0]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x268]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x300]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x39c]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x434]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x4cc]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x564]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x5fc]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x694]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x72c]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x7c4]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x85c]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x8f4]
        call FUN_10001170
        push 0x400
        lea ecx, [esi+0x98c]
        call FUN_10001170
        mov ecx, esi
        mov byte ptr [esp+0x10], 0x10
        mov dword ptr [esi], 0x10021254
        call FUN_10004fe0
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp+0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
