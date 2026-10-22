/*
 * FUN_005c0c20 (36 B) — __cdecl, RET (no stack cleanup).
 *
 * Walk a singly-linked list searching for a matching node; store result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__stdcall FUN_005c0c20(void *param1, void *param2, void *param3, void *param4)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0xc]
        cmp     ecx, eax
        jz      done
        mov     edx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edx]
walk:
        cmp     dword ptr [ecx + 0x8], edx
        jz      done
        mov     ecx, dword ptr [ecx]
        cmp     ecx, eax
        jnz     walk
done:
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret
    }
}
