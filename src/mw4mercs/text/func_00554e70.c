/*
 * FUN_0x00554e70 (124 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_00553bc0(void);

__declspec(naked) void __stdcall func_00554e70(void)
{
    __asm {
        push   esi
        mov    esi, ecx
        mov    al, byte ptr [esi+0x589]
        test   al, al
        je     loc_554EA7

        mov    eax, dword ptr [esp+0x08]
        mov    ecx, dword ptr [eax+0x10]
        test   ecx, ecx
        jg     loc_554E92
        dec    dword ptr [esi+0x484]

loc_554E92:
        mov    eax, dword ptr [esi+0x484]
        test   eax, eax
        jge    loc_554EE8
        mov    dword ptr [esi+0x484], 0
        pop    esi
        ret    4

loc_554EA7:
        mov    al, byte ptr [esi+0x5AC]
        test   al, al
        jne    loc_554EE8

        mov    ecx, dword ptr [esp+0x08]
        mov    eax, dword ptr [ecx+0x10]
        test   eax, eax
        jle    loc_554ED1

        push   1
        mov    ecx, esi
        call   FUN_00553bc0

        mov    eax, dword ptr [esi+0x484]
        inc    eax
        jmp    loc_554ED8

loc_554ED1:
        mov    eax, dword ptr [esi+0x484]
        dec    eax

loc_554ED8:
        test   eax, eax
        mov    dword ptr [esi+0x484], eax
        jge    loc_554EE8
        mov    dword ptr [esi+0x484], 0

loc_554EE8:
        pop    esi
        ret    4
    }
}
