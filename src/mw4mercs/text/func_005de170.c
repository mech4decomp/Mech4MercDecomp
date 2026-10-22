/*
 * FUN_005de170 (63 B) — __thiscall (ECX = this), RET 4. Calls a virtual
 * method on param_1, then walks a linked list at this+0x10 calling
 * FUN_005de5f0 for each node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_005de5f0(void *a);

__declspec(naked) void __stdcall FUN_005de170(void *param_1)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [ecx + 0x10]
        add     ecx, 0x10
        push    edi
        call    FUN_00417a40
        mov     edi, dword ptr [esp + 0x10]
        push    0x4
        lea     ecx, [esp + 0xC]
        mov     dword ptr [esp + 0xC], eax
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
L_194:
        test    esi, esi
        jz      L_1A9
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L_1A9
        push    edi
        call    FUN_005de5f0
        jmp     L_194
L_1A9:
        pop     edi
        pop     esi
        pop     ecx
        ret     4
    }
}
