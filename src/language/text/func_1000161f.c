/*
 * FUN_1000161f (84 B) — teardown the handle table: for each allocated
 * block, DeleteCriticalSection on each entry's +0xc section (if the
 * +0x8 spin count is nonzero), then free the block and null the slot.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_DeleteCriticalSection)(void *);   /* IAT 0x10005040 */

extern void __cdecl FUN_100020f9(void *);

__declspec(naked) void __stdcall FUN_1000161f(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, 0x10009000
L_627:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_664
        mov     edi, eax
        add     eax, 0x480
        cmp     edi, eax
        jnc     L_659
        lea     ebx, [edi + 0xc]
L_63b:
        cmp     dword ptr [ebx - 4], 0
        jz      L_648
        push    ebx
        call    dword ptr [g_DeleteCriticalSection]
L_648:
        mov     eax, dword ptr [esi]
        add     edi, 0x24
        add     eax, 0x480
        add     ebx, 0x24
        cmp     edi, eax
        jc      L_63b
L_659:
        push    dword ptr [esi]
        call    FUN_100020f9
        and     dword ptr [esi], 0
        pop     ecx
L_664:
        add     esi, 4
        cmp     esi, 0x10009100
        jl      L_627
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
