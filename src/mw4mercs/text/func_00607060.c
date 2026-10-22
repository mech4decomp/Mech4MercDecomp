/*
 * FUN_00607060 (124 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Walks a linked list at this+0x1e4 calling FUN_005dc370(param1,param2) on
 * entries whose [*entry+0xe0]+0x14 != 1, then FUN_004e2850(param1,param2),
 * then walks the list again calling the virtual method at [*entry+0x40].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dc370(int a, int b);
extern void __cdecl FUN_004e2850(int a, int b);

__declspec(naked) void __stdcall FUN_00607060(int param1, int param2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, dword ptr [ecx + 0x1e4]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
    l_7a:
        test    esi, esi
        jz      l_9c
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      l_9c
        mov     eax, dword ptr [ecx + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x1
        jz      l_7a
        push    edi
        push    ebx
        call    FUN_005dc370
        jmp     l_7a
    l_9c:
        mov     ecx, dword ptr [esp + 0xc]
        push    edi
        push    ebx
        call    FUN_004e2850
        mov     ecx, dword ptr [esp + 0xc]
        mov     esi, dword ptr [ecx + 0x1e4]
    l_b1:
        test    esi, esi
        jz      l_d3
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      l_d3
        mov     edx, dword ptr [ecx + 0xe0]
        cmp     dword ptr [edx + 0x14], 0x1
        jz      l_b1
        mov     eax, dword ptr [ecx]
        push    edi
        push    ebx
        call    dword ptr [eax + 0x40]
        jmp     l_b1
    l_d3:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
