/*
 * FUN_005b6ee0 (41 B) — __thiscall (ECX = this), RET 4.
 *
 * Virtual call (vtable+0x1c) with param_1; if non-zero, calls
 * FUN_004179b0(this+0x94, param_1). Returns the virtual call result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004179b0(void);

__declspec(naked) void __stdcall FUN_005b6ee0(void *param_1)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    ebx
        call    dword ptr [eax + 0x1c]
        mov     edi, eax
        test    edi, edi
        jz      skip
        push    ebx
        lea     ecx, [esi + 0x94]
        call    FUN_004179b0
skip:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
