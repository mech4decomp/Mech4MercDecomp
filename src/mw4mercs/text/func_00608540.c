/*
 * FUN_00608540 (45 B) — __thiscall (ECX = this, RET 0x8). Calls
 * FUN_00609550(**[param_1+4]), invokes vtable method at [this+0x28]+0x10,
 * stores result at **[param_1+8], returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00609550(void *a);

__declspec(naked) int FUN_00608540(void *param_1, void *param_2)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edi + 0x4]
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        push    ecx
        mov     ecx, esi
        call    FUN_00609550
        mov     edx, dword ptr [esi + 0x28]
        lea     ecx, [esi + 0x28]
        call    dword ptr [edx + 0x10]
        mov     ecx, dword ptr [edi + 0x8]
        pop     edi
        mov     dword ptr [ecx], eax
        mov     eax, 0x1
        pop     esi
        ret     0x8
    }
}
