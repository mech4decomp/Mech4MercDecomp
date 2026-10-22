/*
 * FUN_10039898 (35 B) — __cdecl.
 * Sum helper: result = *param_2 + param_1; if param_2[1] >= 0, also add
 * *(int*)(*(int*)(param_2[1] + param_1) + param_2[2]) + param_2[1].
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10039898(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x4]
        add     eax, esi
        test    edx, edx
        jl      done
        mov     esi, dword ptr [edx + esi]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [esi + ecx]
        add     ecx, edx
        add     eax, ecx
    done:
        pop     esi
        ret
    }
}
