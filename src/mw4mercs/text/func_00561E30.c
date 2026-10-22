/*
 * FUN_00561E30 (52 B) — Recursive tree node deletion. Recursively frees
 * the right subtree (field_C), frees the current node via FUN_004084E0,
 * then iterates on the left subtree (field_8).
 * __thiscall (ecx = this, ret 4 cleans 1 stack arg).
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00561E30(void)
{
    
__asm {
push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        test    esi, esi
        mov     ebx, ecx
        je      done
        push    edi
    loop_start:
        mov     eax, dword ptr [esi + 0xC]
        push    eax
        mov     ecx, ebx
        /* __emit: recursive call to self; MSVC6 inline asm cannot call the
           function being defined by name (circular reference error C2094) */
        _emit 0xE8
        _emit 0xE8
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        test    esi, esi
        mov     edi, dword ptr [esi + 8]
        je      skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    skip_free:
        test    edi, edi
        mov     esi, edi
        jne     loop_start
        pop     edi
    done:
        pop     esi
        pop     ebx
        ret     4
    }


}
