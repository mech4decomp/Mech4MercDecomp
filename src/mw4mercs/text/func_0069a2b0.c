/*
 * FUN_0069a2b0 (89 B) — recursive linked-list teardown.
 * __stdcall, RET 0x4 (1 stack param). Walks a node list, recursing on
 * node+0xC, freeing a buffer range via FUN_00547c60, freeing the node via
 * FUN_004084e0, and following node+0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0069a2b0(void *param);
extern void __cdecl FUN_00696db0(void *a, int b);
extern void __cdecl FUN_00547c60(void *a, int b);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_0069a2b0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        mov     dword ptr [esp + 0x4], ecx
        jz      L_ret
        push    ebx
        push    ebp
        push    edi
L_loop:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        call    FUN_0069a2b0
        mov     ebx, dword ptr [esi + 0x10]
        mov     edi, dword ptr [esi + 0x18]
        mov     ebp, dword ptr [esi + 0x8]
        lea     eax, [esi + 0x18]
        push    0x0
        push    eax
        sub     edi, ebx
        call    FUN_00696db0
        push    edi
        push    ebx
        call    FUN_00547c60
        add     esp, 0x10
        test    esi, esi
        jz      L_test
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_test:
        test    ebp, ebp
        mov     esi, ebp
        jnz     L_loop
        pop     edi
        pop     ebp
        pop     ebx
L_ret:
        pop     esi
        pop     ecx
        ret     0x4
    }
}
