/*
 * FUN_0060cef0 (58 B) — Recursive list walker: iterates a linked list at
 * this+0xBC, recursing on each non-null item, then dispatches through a vtable.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0060cef0_target(void *item);
extern unsigned long g_7dc6e0; /* DAT_007dc6e0 */

__declspec(naked) void __stdcall FUN_0060cef0(void *this, void *param_1)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [ebx + 0xbc]
        push    edi
        mov     edi, ecx
        test    esi, esi
        jz      L_done
    L_loop:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      L_done
        push    eax
        mov     ecx, edi
        call    FUN_0060cef0_target
        /* __emit: backward jmp rel-offset miscomputed by 4 (call-reloc between branch and target) */
        __emit 0xEB
        __emit 0xE9
    L_done:
        mov     ecx, dword ptr [g_7dc6e0]
        mov     eax, dword ptr [ecx]
        push    0x1
        push    ebx
        call    dword ptr [eax + 0x18]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
