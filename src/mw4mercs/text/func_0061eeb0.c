/*
 * FUN_0061EEB0 (65 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 * Constructor: initializes a 3-field structure and allocates a buffer
 * of param_1*4 bytes via FUN_004084d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int size);

__declspec(naked) void * __fastcall FUN_0061eeb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dl, byte ptr [ecx]
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        cmp     edi, eax
        mov     dword ptr [esi], eax
        mov     byte ptr [esi + 0x8], dl
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        jz      l_alloc_done
        lea     eax, [edi*4 + 0]
        push    eax
        call    FUN_004084d0
        add     esp, 4
    l_alloc_done:
        lea     ecx, [eax + edi*4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
