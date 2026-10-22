/*
 * FUN_004C4510 (71 B) — Iterator over linked list at this+0x144,
 * calls vtable+4 on each entry.
 *
 * __thiscall (ECX = this), RET 4.
 * Calls FUN_004c6960(param_1), FUN_00417a40(), then iterates list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004c6960(void *ptr);
extern void * __cdecl FUN_00417a40(void);

__declspec(naked) void __stdcall FUN_004c4510(int *param_1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_004c6960
        lea     ecx, [esi + 0x144]
        mov     esi, dword ptr [ecx]
        call    FUN_00417a40
        push    4
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
    l_loop:
        test    esi, esi
        jz      l_done
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 4]
        jz      l_done
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 4]
        jmp     l_loop

    l_done:
        pop     edi
        pop     esi
        ret     4
    }
}
