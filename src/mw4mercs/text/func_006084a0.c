/*
 * FUN_006084a0 (49 B) - __thiscall. Calls FUN_00609400 with a value from
 * the input struct, stores the result into *(param+8), then invokes
 * virtual method [this->0x28 vtable + 0x10] and stores its result into
 * *(param+0xc). Returns 1.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00609400(void *param);

__declspec(naked) int __stdcall FUN_006084a0(void *p1, void *p2)
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
        call    FUN_00609400
        mov     edx, dword ptr [edi + 0x8]
        lea     ecx, [esi + 0x28]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        mov     ecx, dword ptr [edi + 0xc]
        pop     edi
        mov     dword ptr [ecx], eax
        mov     eax, 0x1
        pop     esi
        ret     8
    }
}
