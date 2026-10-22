/*
 * FUN_006E32D0 (size=164) - String/array copy.
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

__declspec(naked) void __fastcall FUN_006E32D0(void)
{
    __asm {
        _emit 0x00
        _emit 0x8B
        _emit 0x50
        _emit 0xF8
        _emit 0x8D
        _emit 0x4C
        _emit 0x24
        _emit 0x14
        push ecx
        push 1
        push eax
        push edx
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
        push ecx
        push esi
        lea ecx, [esp + 4]
        call FUN_006e2840
        mov eax, dword ptr [esp + 0x14]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax - 8]
        push eax
        push ecx
        lea edx, [esp + 0x18]
        push edx
        push 1
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
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax - 8]
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        sub edx, eax
        push edx
        push eax
        push esi
    }
}
