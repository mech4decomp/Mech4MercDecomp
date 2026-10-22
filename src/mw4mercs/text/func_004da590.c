/*
 * FUN_004da590 (58 B) — __thiscall, RET 0x4. MLR/Adept core: walks a
 * linked list at [this+0xbc]; for each node whose [node+0x150] is 0,
 * invokes virtual method at vtable+0x7c with the stack arg; finally
 * stores the arg at [this+0x150].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004da590(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     esi, dword ptr [ebx + 0xbc]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
L2:
        test    esi, esi
        jz      L1
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L1
        mov     eax, dword ptr [ecx + 0x150]
        test    eax, eax
        jnz     L2
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 0x7c]
        jmp     L2
L1:
        mov     dword ptr [ebx + 0x150], edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
