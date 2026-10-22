/*
 * FUN_0x00554c70 (124 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_00553bc0(void);

__declspec(naked) void __stdcall func_00554c70(void)
{
    __asm {
        push   esi
        mov    esi, ecx
        mov    al, byte ptr [esi+0x589]
        test   al, al
        je     loc_554CA7

        mov    eax, dword ptr [esp+0x08]
        mov    ecx, dword ptr [eax+0x10]
        test   ecx, ecx
        jg     loc_554C92
        dec    dword ptr [esi+0x474]

loc_554C92:
        mov    eax, dword ptr [esi+0x474]
        test   eax, eax
        jge    loc_554CE8
        mov    dword ptr [esi+0x474], 0
        pop    esi
        ret    4

loc_554CA7:
        mov    al, byte ptr [esi+0x5AC]
        test   al, al
        jne    loc_554CE8

        mov    ecx, dword ptr [esp+0x08]
        mov    eax, dword ptr [ecx+0x10]
        test   eax, eax
        jle    loc_554CD1

        push   1
        mov    ecx, esi
        call   FUN_00553bc0

        mov    eax, dword ptr [esi+0x474]
        inc    eax
        jmp    loc_554CD8

loc_554CD1:
        mov    eax, dword ptr [esi+0x474]
        dec    eax

loc_554CD8:
        test   eax, eax
        mov    dword ptr [esi+0x474], eax
        jge    loc_554CE8
        mov    dword ptr [esi+0x474], 0

loc_554CE8:
        pop    esi
        ret    4
    }
}
