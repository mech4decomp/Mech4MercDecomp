/*
 * FUN_005da8b0 (65 B) — __thiscall (ECX = this). Vector constructor:
 * allocates param_1*4 bytes via FUN_004084d0, initializes the 3-field
 * vector header (begin/end/capacity) and stores param_2's low byte.
 *
 * __thiscall, RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void FUN_005da8b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xC]
        mov     dl, byte ptr [ecx]
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        cmp     edi, eax
        mov     dword ptr [esi], eax
        mov     byte ptr [esi + 0x8], dl
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        jz      L8DF
        lea     eax, [edi*0x4 + 0x0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
L8DF:
        lea     ecx, [eax + edi*0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
