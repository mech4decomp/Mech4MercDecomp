/*
 * MW4Stats.dll - FUN_10003d90 (0x10003D90, 237 B, __thiscall)
 * SEH prologue; validates param_1 fields, builds a stats record, calls
 * vtable method at [vtable+0x14]. RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100043d0(void);
extern void __cdecl FUN_10002fa0(void);
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_10003b10(void);
extern void __cdecl FUN_100032d0(void);
extern void __cdecl FUN_10001190(void);

__declspec(naked) void FUN_10003d90(void)
{
    __asm {
        mov eax, dword ptr fs:[0]
        push -0x1
        push 0x1001f46b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xac
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea ecx, [esp+0xc]
        call FUN_100043d0
        mov esi, dword ptr [esp+0xc8]
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        jnz short L_dd1
        mov eax, 0x80070057
        jmp L_e63
L_dd1:
        lea edi, [esi+0x10]
        mov ecx, edi
        call FUN_10002fa0
        cmp word ptr [eax], 0x0
        jnz short L_de8
        mov eax, 0x80070057
        jmp L_e63
L_de8:
        mov ecx, edi
        call FUN_10002fa0
        mov ecx, dword ptr [esi+0x8]
        mov dword ptr [esp+0x10], eax
        mov eax, dword ptr [esi+0xc]
        mov dword ptr [esp+0x18], ecx
        push 0x400
        lea ecx, [esp+0x24]
        mov dword ptr [esp+0x18], eax
        call FUN_10001170
        lea edx, [esp+0x20]
        push esi
        push edx
        mov dword ptr [esp+0xc8], 0x0
        call FUN_10003b10
        add esp, 0x8
        lea ecx, [esp+0x20]
        call FUN_10002fa0
        lea ecx, [ebx+0x1c8]
        mov dword ptr [esp+0x1c], eax
        call FUN_100032d0
        mov ecx, dword ptr [eax]
        lea edx, [esp+0xc]
        push edx
        push eax
        call dword ptr [ecx+0x14]
        lea ecx, [esp+0x20]
        mov esi, eax
        mov dword ptr [esp+0xc0], 0xffffffff
        call FUN_10001190
        mov eax, esi
L_e63:
        mov ecx, dword ptr [esp+0xb8]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xb8
        ret 0x4
    }
}
