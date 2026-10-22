/*
 * FUN_0x00554cf0 (124 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_00553bc0(void);

__declspec(naked) void __stdcall func_00554cf0(void)
{
    __asm {
        push   esi
        mov    esi, ecx
        mov    al, byte ptr [esi+0x589]
        test   al, al
        je     loc_554D27

        mov    eax, dword ptr [esp+0x08]
        mov    ecx, dword ptr [eax+0x10]
        test   ecx, ecx
        jg     loc_554D12
        dec    dword ptr [esi+0x478]

loc_554D12:
        mov    eax, dword ptr [esi+0x478]
        test   eax, eax
        jge    loc_554D68
        mov    dword ptr [esi+0x478], 0
        pop    esi
        ret    4

loc_554D27:
        mov    al, byte ptr [esi+0x5AC]
        test   al, al
        jne    loc_554D68

        mov    ecx, dword ptr [esp+0x08]
        mov    eax, dword ptr [ecx+0x10]
        test   eax, eax
        jle    loc_554D51

        push   1
        mov    ecx, esi
        call   FUN_00553bc0

        mov    eax, dword ptr [esi+0x478]
        inc    eax
        jmp    loc_554D58

loc_554D51:
        mov    eax, dword ptr [esi+0x478]
        dec    eax

loc_554D58:
        test   eax, eax
        mov    dword ptr [esi+0x478], eax
        jge    loc_554D68
        mov    dword ptr [esi+0x478], 0

loc_554D68:
        pop    esi
        ret    4
    }
}
