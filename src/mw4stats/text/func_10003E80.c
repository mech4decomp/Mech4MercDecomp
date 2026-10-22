/*
 * MW4Stats.dll - FUN_10003e80 (0x10003E80, 200 B, __thiscall)
 * SEH prologue; ORs flags from param_2/param_3 into a record, builds a
 * stats record, calls vtable method at [vtable+0x18]. RET 0xc.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100043e0(void);
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_10003b10(void);
extern void __cdecl FUN_10002fa0(void);
extern void __cdecl FUN_100032d0(void);
extern void __cdecl FUN_10001190(void);

__declspec(naked) void FUN_10003e80(void)
{
    __asm {
        mov eax, dword ptr fs:[0]
        push -0x1
        push 0x1001f48b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa4
        push esi
        mov esi, ecx
        lea ecx, [esp+0x4]
        call FUN_100043e0
        mov al, byte ptr [esp+0xbc]
        test al, al
        jz short L_eb7
        or dword ptr [esp+0x8], 0x1
L_eb7:
        mov al, byte ptr [esp+0xc0]
        test al, al
        jz short L_ec7
        or dword ptr [esp+0x8], 0x2
L_ec7:
        push 0x400
        lea ecx, [esp+0x14]
        call FUN_10001170
        mov eax, dword ptr [esp+0xb8]
        push eax
        lea ecx, [esp+0x14]
        push ecx
        mov dword ptr [esp+0xb8], 0x0
        call FUN_10003b10
        add esp, 0x8
        lea ecx, [esp+0x10]
        call FUN_10002fa0
        lea ecx, [esi+0x1c8]
        mov dword ptr [esp+0xc], eax
        call FUN_100032d0
        mov edx, dword ptr [eax]
        lea ecx, [esp+0x4]
        push ecx
        push eax
        call dword ptr [edx+0x18]
        lea ecx, [esp+0x10]
        mov esi, eax
        mov dword ptr [esp+0xb0], 0xffffffff
        call FUN_10001190
        mov ecx, dword ptr [esp+0xa8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xb0
        ret 0xc
    }
}
