/*
 * FUN_004e25e0 (78 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Walks a pointer chain from this+0xd8, conditionally dereferences deeper
 * based on a magic tag (0x234), calls a virtual method, then calls
 * FUN_004154d0(this+0xbc) and sets a flag bit at this+0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004154d0(void *param);

__declspec(naked) void __stdcall FUN_004e25e0(void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xd8]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ecx + 0x4]
        cmp     dword ptr [edx], 0x234
        jnz     L1
        mov     ecx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0x10]
L1:
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0xc]
        add     edi, 0xbc
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi + 0xc4], 0x0
        call    FUN_004154d0
        mov     eax, dword ptr [esi + 0x10]
        or      eax, 0x20
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        ret     4
    }
}
