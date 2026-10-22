/*
 * FUN_0044D100 (58 B) — __thiscall (RET 0x4). Calls FUN_00450BA0(esi),
 * then invokes a virtual method (slot 0x24/4) on esi with a buffer at
 * [this+0x74]; if the buffer count is nonzero, invokes the same virtual
 * again with (count*12, [this+0x70]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00450ba0(void);

__declspec(naked) void FUN_0044D100(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00450ba0
        mov     eax, dword ptr [esi]
        push    4
        lea     ebx, [edi + 0x74]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jbe     L_44d134
        mov     ecx, dword ptr [edi + 0x70]
        mov     edx, dword ptr [esi]
        lea     eax, [eax + eax*2]
        shl     eax, 2
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
L_44d134:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
