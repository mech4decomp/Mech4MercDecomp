/*
 * FUN_004d6780 (61 B) — __thiscall. Walks a linked list rooted at
 * this->[0x14]; for each node makes a virtual call (slot 0x50) with the
 * two args, then calls FUN_004154d0 to advance.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004154d0(void);

__declspec(naked) void FUN_004d6780(void)
{
    __asm {
        mov     eax, dword ptr [ecx+14h]
        test    eax, eax
        push    edi
        lea     edi, [ecx+14h]
        jz      L67B9
        push    ebx
        mov     ebx, dword ptr [esp+10h]
        push    esi
    L6791:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L679B
        mov     esi, dword ptr [eax]
        jmp     L679D
    L679B:
        xor     esi, esi
    L679D:
        mov     ecx, dword ptr [esp+10h]
        mov     eax, dword ptr [esi]
        push    ebx
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+50h]
        push    edi
        mov     ecx, esi
        call    FUN_004154d0
        cmp     dword ptr [edi], 0
        jnz     L6791
        pop     esi
        pop     ebx
    L67B9:
        pop     edi
        ret     8
    }
}
