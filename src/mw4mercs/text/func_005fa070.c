/*
 * FUN_005fa070 (70 B) — __thiscall, two stack args (param_1, param_2).
 * Sets a flag byte at this+0x33c and ORs 0x40 into this+0x10, calls
 * FUN_005fd400(param_1,param_2), then walks a linked list at this+0x354
 * dispatching virtual this+0x40 on each entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005fd400(void);

__declspec(naked) void FUN_005fa070(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        mov     esi, ecx
        mov     edx, dword ptr [esi+0x10]
        push    edi
        or      edx, 0x40
        push    ebx
        mov     byte ptr [esi+0x33c], 0x1
        mov     dword ptr [esi+0x10], edx
        call    FUN_005fd400
        mov     esi, dword ptr [esi+0x354]
        test    esi, esi
        jz      L_a0b0
    L_a09a:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+0x4]
        jz      L_a0b0
        mov     eax, dword ptr [ecx]
        push    edi
        push    ebx
        call    dword ptr [eax+0x40]
        __emit 0xEB   /* __emit: backward jmp rel8 miscomputed by MSVC6 (off-by-4: call reloc sits between branch and target) */
        __emit 0xEA
    L_a0b0:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
