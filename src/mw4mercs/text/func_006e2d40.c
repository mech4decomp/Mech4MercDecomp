/*
 * FUN_006E2D40 (size=146) - String/object copy constructor.
 *
 * __thiscall
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2840(void);
extern void __cdecl FUN_006e2850(void);
extern void __cdecl FUN_006e29e0(void);
extern void __cdecl FUN_006e2c50(void);

__declspec(naked) void __fastcall FUN_006E2D40(void)
{
    __asm {
        _emit 0x0C
        _emit 0xFB
        _emit 0xFF
        _emit 0xFF
        _emit 0x8D
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xE8
        _emit 0x93
        _emit 0xFC
        _emit 0xFF
        dec dword ptr [ebx - 0x3ca6a13a]
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
        nop
        nop
        nop
        push ecx
        push esi
        lea ecx, [esp + 4]
        call FUN_006e2840
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        jne l_0037
        xor eax, eax
        jmp l_003e
    l_0037:
        push esi
        _emit 0xFF
        _emit 0x15
        _emit 0x34
        _emit 0xB1
        _emit 0x76
        _emit 0x00
    l_003e:
        mov ecx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [ecx - 8]
        push ecx
        push edx
        push esi
        push eax
        lea ecx, [esp + 0x14]
        call FUN_006e2c50
        mov esi, dword ptr [esp + 0xc]
        lea eax, [esp + 4]
        push eax
        mov ecx, esi
        call FUN_006e2850
        lea ecx, [esp + 4]
        call FUN_006e29e0
        mov eax, esi
        pop esi
        pop ecx
        ret
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
        nop
        nop
        nop
        mov edx, dword ptr [esp + 4]
        test edx, edx
        push ebx
        push esi
        push edi
        _emit 0x74
        _emit 0x5A
        mov eax, dword ptr [ecx]
        mov edi, dword ptr [eax - 0xc]
    }
}
