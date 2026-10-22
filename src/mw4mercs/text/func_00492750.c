/*
 * FUN_00492750 (78 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Recursive tree destructor: frees children (field_0c), decrements refcount
 * on field_10, frees self, then walks linked list at field_08.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00492750(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_00492750(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        mov     ebx, ecx
        jz      l_done
        push    edi
l_loop:
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        mov     ecx, ebx
        call    FUN_00492750
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov     edi, dword ptr [esi + 8]
        jz      l_skip_decref
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_decref
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_skip_decref:
        test    esi, esi
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
l_skip_free:
        test    edi, edi
        mov     esi, edi
        jnz     l_loop
        pop     edi
l_done:
        pop     esi
        pop     ebx
        ret     4
    }
}
