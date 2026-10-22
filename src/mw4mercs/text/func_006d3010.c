/*
 * FUN_006D3010 (size=162) - Setter + vtable dispatch 2.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_006d2ed0(void);
extern void __cdecl FUN_006d2f50(void);
extern void __cdecl FUN_006d2ff0(void);

__declspec(naked) void __fastcall FUN_006D3010(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        call FUN_006d2ed0
        push eax
        mov ecx, esi
        call FUN_006d2ff0
        mov byte ptr [esi + 0x5c], 1
        pop esi
        ret 4
        nop
        nop
        nop
        xor al, al
        ret 8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        test ebx, ebx
        push esi
        push edi
        mov edi, ecx
        _emit 0x0F
        _emit 0x84
        _emit 0x01
        _emit 0x01
        _emit 0x00
        _emit 0x00
        push ebx
        call FUN_006d2f50
        mov esi, eax
        mov eax, dword ptr [esi + 0x24]
        shr eax, 3
        test al, 1
        je l_005d
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
    l_005d:
        mov edx, dword ptr [esi]
        push ebp
        mov ecx, esi
        call dword ptr [edx + 4]
        mov ebp, eax
        test ebp, ebp
        _emit 0x0F
        _emit 0x84
        _emit 0xAB
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [edi]
        push eax
        lea ecx, [esp + 0x1c]
        call FUN_00412570
        mov ecx, dword ptr [esp + 0x18]
        push 0x76c5a8
        push ecx
        lea ecx, [esp + 0x18]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x1c]
        call FUN_00412740
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        _emit 0x74
        _emit 0x13
    }
}
