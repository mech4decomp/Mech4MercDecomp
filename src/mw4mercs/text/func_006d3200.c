/*
 * FUN_006D3200 (size=148) - Refcount decrement + cleanup.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004db550(void);

__declspec(naked) void __fastcall FUN_006D3200(void)
{
    __asm {
        _emit 0xFE
        _emit 0xC9
        _emit 0x88
        _emit 0x08
        _emit 0x75
        _emit 0x09
        _emit 0x50
        _emit 0xE8
        _emit 0xD4
        _emit 0x52
        _emit 0xD3
        _emit 0xFF
        add esp, 4
        mov ecx, dword ptr [esi + 0x24]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        push esi
        call FUN_004db550
        mov eax, dword ptr [esp + 0x20]
        add esp, 0xc
        test eax, eax
        je l_003c
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne l_003c
        push eax
        call FUN_004084e0
        add esp, 4
    l_003c:
        mov eax, dword ptr [esi + 0x30]
        test eax, eax
        pop edi
        je l_0050
        or dword ptr [esi + 0x24], 8
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
    l_0050:
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        sub esp, 0x88
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea eax, [ebx + 4]
        push eax
        lea ecx, [esp + 0x34]
        call FUN_00417170
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x30], 0x79e9d8
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 8]
        mov eax, dword ptr [ebx]
        push eax
        lea ecx, [esp + 0x14]
    }
}
