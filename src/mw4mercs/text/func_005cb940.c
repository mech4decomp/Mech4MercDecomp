/*
 * FUN_005cb940 (39 B) — Free all nodes in an intrusive singly-linked list
 * (head at *this, sentinel = head itself), then reset head to point at
 * itself. __thiscall (ECX=this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005cb940(void *this)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [ecx]
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      l_done
    l_loop:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      l_skip
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        cmp     esi, edi
        jnz     l_loop
    l_done:
        mov     dword ptr [edi], edi
        mov     dword ptr [edi + 4], edi
        pop     edi
        pop     esi
        ret
    }
}
