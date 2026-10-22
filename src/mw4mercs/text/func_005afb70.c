/*
 * FUN_005afb70 (125 B) — __thiscall, RET 8.
 *
 * Dispatches on param_1 (at [esp+8]):
 *   - 0x17: if [this+0x14]==9 return 9, else fall through to common tail.
 *   - 0x18: if [this+0x14]!=0x13 return [this+0x14], else fall through.
 *   - 0x12: if [this+0x14]==2, init a sub-object at [this+0x18] and return 2.
 *   - otherwise: call FUN_005b3a70(param_1, param_2) and return [this+0x14].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005b3a70(void *this, int a, int b);

__declspec(naked) void __stdcall FUN_005afb70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 8]
        cmp     ecx, 0x17
        mov     eax, dword ptr [esi + 0x18]
        jnz     L8F
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, 9
        cmp     edx, eax
        jnz     LBD9
        pop     esi
        ret     8
L8F:
        cmp     ecx, 0x18
        jnz     LA0
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, 0x13
        jz      LBD9
        pop     esi
        ret     8
LA0:
        cmp     ecx, 0x12
        jnz     LBD9
        cmp     dword ptr [esi + 0x14], 2
        jnz     LBD9
        xor     ecx, ecx
        mov     edx, 1
        mov     byte ptr [eax + 0x53e], dl
        mov     dword ptr [eax + 0x554], ecx
        mov     dword ptr [eax + 0x558], ecx
        mov     dword ptr [eax + 0x55c], ecx
        mov     dword ptr [eax + 0x560], edx
        mov     eax, 2
        pop     esi
        ret     8
LBD9:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005b3a70
        mov     eax, dword ptr [esi + 0x14]
        pop     esi
        ret     8
    }
}
