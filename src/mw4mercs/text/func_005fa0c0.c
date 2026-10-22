/*
 * FUN_005fa0c0 (86 B) — __thiscall, one stack arg (param_1). If a flag bit
 * (this+0x10 >> 5) is set: optionally dispatch virtual this+0xd8+0x1c and
 * clear the low byte of param_1, then clear the flag. Then walk a linked
 * list at this+0x35c dispatching virtual this+0x48 on each entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005fa0c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi+0x10]
        mov     eax, edi
        shr     eax, 0x5
        test    al, 0x1
        jz      L_a0ec
        mov     al, byte ptr [esp+0xc]
        test    al, al
        jz      L_a0e6
        mov     ecx, dword ptr [esi+0xd8]
        call    dword ptr [ecx+0x1c]
        mov     byte ptr [esp+0xc], 0
    L_a0e6:
        and     edi, 0xffffffdf
        mov     dword ptr [esi+0x10], edi
    L_a0ec:
        mov     eax, dword ptr [esi+0x35c]
        test    eax, eax
        jz      L_a111
        mov     edi, dword ptr [esp+0xc]
        mov     esi, eax
    L_a0fc:
        test    esi, esi
        jz      L_a111
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+0x4]
        jz      L_a111
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx+0x48]
        jmp     L_a0fc
    L_a111:
        pop     edi
        pop     esi
        ret     0x4
    }
}
