/*
 * FUN_005cb280 (61 B) — Allocate a 0x10-byte node, copy a 2-dword value
 * from param_3 into node+8, then link the node into a doubly-linked list
 * headed at param_2. Returns param_1 (the list head pointer).
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void *__stdcall FUN_005cb280(void *param1, int param2, void *param3)
{
    __asm {
        push    0x10
        call    FUN_004084d0
        lea     ecx, [eax + 8]
        add     esp, 4
        test    ecx, ecx
        jz      l_skip
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [edx]
        mov     edx, dword ptr [edx + 4]
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 4], edx
        pop     esi
    l_skip:
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [ecx + 4], eax
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [edx], eax
        mov     dword ptr [ecx], eax
        mov     eax, ecx
        ret     0xc
    }
}
