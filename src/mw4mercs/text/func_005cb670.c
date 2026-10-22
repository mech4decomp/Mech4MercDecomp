/*
 * FUN_005cb670 (68 B) — Release a tagged pointer (low bits = flags). If the
 * low bit is set, clear the tag bits and call the object's virtual release
 * (vtable+0xc) with a flag (3 if bit1 set, else 1). __thiscall (ECX=this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005cb670(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi]
        mov     eax, ecx
        and     eax, 1
        cmp     al, 1
        jnz     l_done
        mov     edx, ecx
        and     edx, 2
        cmp     dl, 2
        jnz     l_release1
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      l_done
        mov     eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax + 0xc]
        mov     dword ptr [esi], 0
        pop     esi
        ret
    l_release1:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      l_done
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 0xc]
    l_done:
        mov     dword ptr [esi], 0
        pop     esi
        ret
    }
}
