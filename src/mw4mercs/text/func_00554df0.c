/*
 * FUN_0x00554df0 (124 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_00553bc0(void);

__declspec(naked) void __stdcall func_00554df0(void)
{
    __asm {
        push   esi
        mov    esi, ecx
        mov    al, byte ptr [esi+0x589]
        test   al, al
        je     loc_554E27

        mov    eax, dword ptr [esp+0x08]
        mov    ecx, dword ptr [eax+0x10]
        test   ecx, ecx
        jg     loc_554E12
        dec    dword ptr [esi+0x480]

loc_554E12:
        mov    eax, dword ptr [esi+0x480]
        test   eax, eax
        jge    loc_554E68
        mov    dword ptr [esi+0x480], 0
        pop    esi
        ret    4

loc_554E27:
        mov    al, byte ptr [esi+0x5AC]
        test   al, al
        jne    loc_554E68

        mov    ecx, dword ptr [esp+0x08]
        mov    eax, dword ptr [ecx+0x10]
        test   eax, eax
        jle    loc_554E51

        push   1
        mov    ecx, esi
        call   FUN_00553bc0

        mov    eax, dword ptr [esi+0x480]
        inc    eax
        jmp    loc_554E58

loc_554E51:
        mov    eax, dword ptr [esi+0x480]
        dec    eax

loc_554E58:
        test   eax, eax
        mov    dword ptr [esi+0x480], eax
        jge    loc_554E68
        mov    dword ptr [esi+0x480], 0

loc_554E68:
        pop    esi
        ret    4
    }
}
