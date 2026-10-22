/*
 * FUN_006225c0 (51 B) - __thiscall. Iterates this->0x1f8..this->0x1fc
 * (array of pointers), for each element calls FUN_00624420() and adds
 * the stack param to the result, storing back through the pointer.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00624420(void);

__declspec(naked) void __stdcall FUN_006225c0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [ecx + 0x1fc]
        push    esi
        mov     esi, dword ptr [ecx + 0x1f8]
        cmp     esi, ebx
        jz      L_done
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    edi
L_loop:
        mov     edi, dword ptr [esi]
        mov     ecx, edi
        call    FUN_00624420
        add     eax, ebp
        add     esi, 0x4
        cmp     esi, ebx
        mov     dword ptr [edi], eax
        jnz     L_loop
        pop     edi
        pop     ebp
L_done:
        pop     esi
        pop     ebx
        ret     4
    }
}
