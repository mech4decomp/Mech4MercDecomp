/*
 * FUN_00612760 (72 B) — __thiscall (RET 0x4). Walks a linked list from
 * [arg0+0x34c]; for each node, calls a virtual method (slot 4) on a
 * sub-object at [node+0x78]; if the returned value > -1, calls
 * FUN_0060D3D0(this, node+0x74, node+0xb8, value).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0060d3d0(void);

__declspec(naked) void FUN_00612760(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0x34c]
        mov     ebx, ecx
L_61276f:
        test    edi, edi
        je      L_6127a2
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 4]
        je      L_6127a2
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov     eax, dword ptr [eax + 0x30]
        cmp     eax, -1
        jle     L_61276f
        push    eax
        lea     eax, [esi + 0xb8]
        push    eax
        add     esi, 0x74
        push    esi
        mov     ecx, ebx
        call    FUN_0060d3d0
        jmp     L_61276f
L_6127a2:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
