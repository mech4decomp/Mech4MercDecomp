/*
 * MW4Stats.dll - FUN_10003c00 (0x10003C00, 285 B, __thiscall)
 * SEH prologue; builds a stats record, calls vtable method at [vtable+0x10].
 * RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100043d0(void);
extern void __cdecl FUN_10003d20(void);
extern void __cdecl FUN_10001660(void);
extern void __cdecl FUN_10003e80(void);
extern void __cdecl FUN_10002fa0(void);
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_10003b10(void);
extern void __cdecl FUN_100032d0(void);
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_10003d80(void);

__declspec(naked) void FUN_10003c00(void)
{
    __asm {
        push -0x1
        push 0x1001f456
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x148
        push esi
        mov esi, ecx
        lea ecx, [esp+0x4]
        call FUN_100043d0
        lea ecx, [esp+0xb0]
        call FUN_10003d20
        push 0x100242b4
        lea ecx, [esp+0xb8]
        mov dword ptr [esp+0x158], 0x0
        call FUN_10001660
        push 0x1
        push 0x1
        lea eax, [esp+0xb8]
        push eax
        mov ecx, esi
        call FUN_10003e80
        lea ecx, [esi+0x130]
        call FUN_10002fa0
        mov ecx, esi
        mov dword ptr [esp+0x10], eax
        call FUN_10002fa0
        lea ecx, [esi+0x98]
        mov dword ptr [esp+0x8], eax
        call FUN_10002fa0
        push 0x400
        lea ecx, [esp+0x1c]
        mov dword ptr [esp+0x10], eax
        call FUN_10001170
        mov ecx, dword ptr [esp+0x15c]
        push ecx
        lea edx, [esp+0x1c]
        push edx
        mov byte ptr [esp+0x15c], 0x1
        call FUN_10003b10
        add esp, 0x8
        lea ecx, [esp+0x18]
        call FUN_10002fa0
        lea ecx, [esi+0x1c8]
        mov dword ptr [esp+0x14], eax
        call FUN_100032d0
        mov ecx, dword ptr [eax]
        lea edx, [esp+0x4]
        push edx
        push eax
        call dword ptr [ecx+0x10]
        lea ecx, [esp+0x18]
        mov esi, eax
        mov byte ptr [esp+0x154], 0x0
        call FUN_10001190
        lea ecx, [esp+0xb0]
        mov dword ptr [esp+0x154], 0xffffffff
        call FUN_10003d80
        mov ecx, dword ptr [esp+0x14c]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x154
        ret 0x4
    }
}
