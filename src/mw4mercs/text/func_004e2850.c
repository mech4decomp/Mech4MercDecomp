/*
 * FUN_004e2850 (141 B) — MLR/Adept: iterate/clear element lists and
 * dispatch virtual updates. __thiscall (ECX = this), RET 0x8 (2 stack
 * args). Clears a dword array, walks a linked list, then dispatches
 * virtual calls over a second list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dad70(void);
extern void __cdecl FUN_004ea970(void);

__declspec(naked) void FUN_004e2850(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_004dad70
        mov     ecx, dword ptr [ebx + 0x1e0]
        test    ecx, ecx
        jbe     loc_4e287a
        mov     edi, dword ptr [ebx + 0x1dc]
        xor     eax, eax
        rep stosd
loc_4e287a:
        mov     esi, dword ptr [ebx + 0x184]
        test    esi, esi
        jz      loc_4e289e
loc_4e2880:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      loc_4e289e
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        call    FUN_004ea970
        /* __emit: backward jmp rel8 miscomputed off-by-4 (call-reloc sits between branch and target); ref EB E2 */
        __emit 0xEB
        __emit 0xE2
loc_4e289e:
        mov     eax, dword ptr [ebx + 0x1e0]
        test    eax, eax
        jbe     loc_4e28d7
        mov     ebx, dword ptr [ebx + 0x1dc]
        mov     edi, eax
loc_4e28b0:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      loc_4e28d1
loc_4e28b6:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi]
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x40]
        mov     esi, dword ptr [esi + 0x134]
        test    esi, esi
        jnz     loc_4e28b6
loc_4e28d1:
        add     ebx, 0x4
        dec     edi
        jnz     loc_4e28b0
loc_4e28d7:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
