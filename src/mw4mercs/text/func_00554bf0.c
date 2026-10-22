/*
 * FUN_0x00554bf0 (124 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_00553bc0(void);

__declspec(naked) void __stdcall func_00554bf0(void)
{
    __asm {
        push   esi
        mov    esi, ecx
        mov    al, byte ptr [esi+0x589]
        test   al, al
        je     loc_554C2B

        mov    eax, dword ptr [esp+0x08]
        mov    ecx, dword ptr [eax+0x10]
        test   ecx, ecx
        jg     loc_554C16
        dec    dword ptr [esi+0x470]

loc_554C16:
        mov    eax, dword ptr [esi+0x470]
        test   eax, eax
        jge    loc_554C6C
        mov    dword ptr [esi+0x470], 0
        pop    esi
        ret    4

loc_554C2B:
        mov    al, byte ptr [esi+0x5AC]
        test   al, al
        jne    loc_554C6C

        mov    ecx, dword ptr [esp+0x08]
        mov    eax, dword ptr [ecx+0x10]
        test   eax, eax
        jle    loc_554C55

        push   1
        mov    ecx, esi
        call   FUN_00553bc0

        mov    eax, dword ptr [esi+0x470]
        inc    eax
        jmp    loc_554C5C

loc_554C55:
        mov    eax, dword ptr [esi+0x470]
        dec    eax

loc_554C5C:
        test   eax, eax
        mov    dword ptr [esi+0x470], eax
        jge    loc_554C6C
        mov    dword ptr [esi+0x470], 0

loc_554C6C:
        pop    esi
        ret    4
    }
}
