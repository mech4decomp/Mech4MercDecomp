/*
 * FUN_10044307 (33 B) — __cdecl.
 * Overflow-checking add: *param_3 = param_1 + param_2; returns 1 on overflow.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10044307(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        xor     eax, eax
        lea     ecx, [edx + esi*0x1]
        cmp     ecx, edx
        jc      set
        cmp     ecx, esi
        jnc     done
    set:
        push    0x1
        pop     eax
    done:
        mov     edx, dword ptr [esp + 0x10]
        pop     esi
        mov     dword ptr [edx], ecx
        ret
    }
}
