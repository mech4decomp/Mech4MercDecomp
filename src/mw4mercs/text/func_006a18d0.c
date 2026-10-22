/*
 * FUN_006a18d0 (48 B) - __thiscall. Calls FUN_006a0db0; if the result is
 * nonzero and differs from this->0x4->0x170, invokes virtual method
 * [vtable+0x60] on it, stores the result in the output param, returns 1.
 * Otherwise returns 0.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: output pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006a0db0(void);

__declspec(naked) char __stdcall FUN_006a18d0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a0db0
        test    eax, eax
        jz      L_false
        mov     ecx, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [ecx + 0x170]
        jz      L_false
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x60]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx], eax
        mov     al, 0x1
        pop     esi
        ret     4
L_false:
        xor     al, al
        pop     esi
        ret     4
    }
}
