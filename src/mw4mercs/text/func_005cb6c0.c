/*
 * FUN_005cb6c0 (42 B) — Release a tagged pointer. If the low bit is set,
 * clear the tag bits and free via FUN_004084E0. __thiscall (ECX=this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005cb6c0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        mov     ecx, eax
        and     ecx, 1
        cmp     cl, 1
        jnz     l_done
        mov     edx, eax
        and     eax, 0xfffffffc
        push    eax
        and     edx, 2
        mov     dword ptr [esi], eax
        call    FUN_004084e0
        add     esp, 4
    l_done:
        mov     dword ptr [esi], 0
        pop     esi
        ret
    }
}
