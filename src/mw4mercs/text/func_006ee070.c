/*
 * FUN_006EE070 (size=158) - Log/output helper.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00512ff0(void);

__declspec(naked) void __cdecl FUN_006EE070(void)
{
    __asm {
        push esi
        call edi
        push eax
        call ebx
        push ebp
        push 0x416
        push esi
        call edi
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0x44
        _emit 0xB5
        _emit 0x76
        _emit 0x00
        lea edx, [esp + 0x14]
        push edx
        push 1
        push 0
        mov dword ptr [esp + 0x1c], 9
        call FUN_00512ff0
        xor ecx, ecx
        test eax, eax
        setg cl
        push 0
        mov ebp, ecx
        push ebp
        push 0xf1
        push 0x417
        push esi
        call edi
        push eax
        call ebx
        push ebp
        push 0x4dc
        push esi
        call edi
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0x44
        _emit 0xB5
        _emit 0x76
        _emit 0x00
        lea edx, [esp + 0x14]
        push edx
        push 1
        push 0
        mov dword ptr [esp + 0x1c], 0x38
        call FUN_00512ff0
        push 0
        push eax
        push 0x14e
        push 0x41d
        push esi
        call edi
        push eax
        call ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x820
        ret
        nop
        nop
        nop
        nop
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x10]
        push 0
        push 0
    }
}
