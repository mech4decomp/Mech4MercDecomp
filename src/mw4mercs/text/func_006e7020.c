/*
 * FUN_006E7020 (size=161) - Texture/object method.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0072d830(void);

__declspec(naked) void __fastcall FUN_006E7020(void)
{
    __asm {
        _emit 0x1C
        _emit 0x33
        _emit 0xF6
        _emit 0x56
        _emit 0x56
        push 0x184
        push 0x4b8
        push edi
        call ebx
        _emit 0x8B
        _emit 0x2D
        _emit 0x60
        _emit 0xB5
        _emit 0x76
        _emit 0x00
        push eax
        call ebp
        push esi
        push esi
        push 0x184
        push 0x4ba
        push edi
        call ebx
        push eax
        call ebp
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], 0x841770
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        _emit 0x8B
        _emit 0x15
        _emit 0x68
        _emit 0x17
        _emit 0x84
        _emit 0x00
        test ecx, ecx
        lea ecx, [esi + 0x1194]
        push ecx
        push edx
        je l_0089
        call FUN_0072d830
        push eax
        mov eax, dword ptr [esp + 0x20]
        push eax
        push 0x181
        push 0x4b8
        push edi
        call ebx
        push eax
        call ebp
        mov ecx, dword ptr [esp + 0x1c]
        push esi
        mov eax, ecx
        push eax
        inc ecx
        push 0x19a
        mov dword ptr [esp + 0x28], ecx
        push 0x4b8
        _emit 0xEB
        _emit 0x32
    l_0089:
        call FUN_0072d830
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        push 0x181
        push 0x4ba
        push edi
        call ebx
    }
}
