/*
 * FUN_004f19d0 (54 B) - Adept::ComponentWeb list search (__thiscall, RET 0x4,
 * 1 param). Walks the linked list at [this+0x18]; for each node calls
 * FUN_004f2000 on [node+0x10]; returns the node whose test returns nonzero,
 * else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f2000(void);

__declspec(naked) void FUN_004f19d0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [ecx + 0x18]
        push    edi
        test    esi, esi
        jz      L19f6
L19da:
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      L19fe
        push    ebx
        lea     ecx, [edi + 0x10]
        call    FUN_004f2000
        test    al, al
        jnz     L19fe
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward JMP rel by 4 (call-reloc between branch and target); ref = EB E4 */
        __emit 0xE4
L19f6:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x4
L19fe:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
