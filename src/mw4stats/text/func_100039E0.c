/*
 * MW4Stats.dll - FUN_100039e0 (0x100039E0, 289 B, __thiscall)
 * SEH prologue; validates via FUN_100043a0, builds a stats record from
 * param_2, calls vtable method at [vtable+0x14]. RET 0x8.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100043a0(void);
extern void __cdecl FUN_100043c0(void);
extern void __cdecl FUN_10002fa0(void);
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_10003b10(void);
extern void __cdecl FUN_100032d0(void);
extern void __cdecl FUN_10004360(void);
extern void __cdecl FUN_10001190(void);

__declspec(naked) void FUN_100039e0(void)
{
    __asm {
        mov eax, dword ptr fs:[0]
        push -0x1
        push 0x1001f42b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc8
        push edi
        mov edi, ecx
        call FUN_100043a0
        test al, al
        jz short L_a11
        mov eax, 0x80040290
        jmp L_ae9
L_a11:
        push esi
        lea ecx, [esp+0x8]
        call FUN_100043c0
        mov esi, dword ptr [esp+0xe4]
        mov eax, dword ptr [esi+0x14]
        mov ecx, dword ptr [esi+0x18]
        mov dword ptr [esp+0x10], eax
        lea edx, [esi+0x4]
        mov eax, dword ptr [edx]
        mov dword ptr [esp+0x14], ecx
        mov ecx, dword ptr [edx+0x4]
        mov dword ptr [esp+0x18], eax
        mov eax, dword ptr [edx+0x8]
        mov dword ptr [esp+0x1c], ecx
        mov ecx, dword ptr [edx+0xc]
        mov dword ptr [esp+0x24], ecx
        lea ecx, [esi+0x1c]
        mov dword ptr [esp+0x20], eax
        call FUN_10002fa0
        lea ecx, [esi+0xb4]
        mov dword ptr [esp+0x2c], eax
        call FUN_10002fa0
        mov edx, dword ptr [esi+0x14c]
        push 0x400
        lea ecx, [esp+0x3c]
        mov dword ptr [esp+0x34], eax
        mov dword ptr [esp+0x2c], edx
        call FUN_10001170
        lea eax, [esp+0x38]
        push esi
        push eax
        mov dword ptr [esp+0xe0], 0x0
        call FUN_10003b10
        add esp, 0x8
        lea ecx, [esp+0x38]
        call FUN_10002fa0
        mov ecx, edi
        mov dword ptr [esp+0x34], eax
        call FUN_100032d0
        mov ecx, dword ptr [esp+0xe0]
        mov esi, eax
        mov edi, dword ptr [esi]
        push 0x0
        add ecx, 0x1c8
        call FUN_10004360
        push eax
        lea edx, [esp+0x10]
        push edx
        push esi
        call dword ptr [edi+0x14]
        lea ecx, [esp+0x38]
        mov esi, eax
        mov dword ptr [esp+0xd8], 0xffffffff
        call FUN_10001190
        mov eax, esi
        pop esi
L_ae9:
        mov ecx, dword ptr [esp+0xcc]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0xd4
        ret 0x8
    }
}
