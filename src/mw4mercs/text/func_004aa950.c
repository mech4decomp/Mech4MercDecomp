/*
 * FUN_004aa950 (69 B) — MLR subsystem method (__thiscall, RET 0x8). Calls
 * FUN_004ac690, sets a flag byte in a sub-object, and copies a 12-byte
 * structure into this+0xb4 indexed by param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ac690(int, int);

__declspec(naked) void FUN_004aa950(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_004ac690
        mov     eax, dword ptr [esi + 0xb0]
        mov     ecx, dword ptr [eax + 0x18]
        lea     eax, [ecx + ebx]
        or      byte ptr [eax], 2
        mov     eax, dword ptr [esi + 0xb4]
        mov     ecx, dword ptr [edi]
        lea     edx, [ebx + ebx*2]
        lea     eax, [eax + edx*4]
        mov     edx, dword ptr [edi + 4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edi + 8]
        pop     edi
        pop     esi
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
        pop     ebx
        ret     8
    }
}
