/*
 * FUN_004f8430 (72 B) — __thiscall. Calls FUN_004dad70 then walks a
 * linked list at [this+0xbc] dispatching a virtual method (slot 0x40)
 * on each non-null node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dad70(void);
extern void __cdecl FUN_004f8860(void);

__declspec(naked) void FUN_004f8430(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_004dad70
        mov     eax, dword ptr [esi+0xe0]
        cmp     dword ptr [eax+0x14], 1
        jz      L_8472
        mov     eax, dword ptr [esi+0xbc]
        test    eax, eax
        jz      L_8472
        mov     esi, eax
L_845c:
        test    esi, esi
        jz      L_8472
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+4]
        jz      L_8472
        mov     edx, dword ptr [ecx]
        push    edi
        push    ebx
        call    dword ptr [edx+0x40]
        jmp     L_845c
L_8472:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
