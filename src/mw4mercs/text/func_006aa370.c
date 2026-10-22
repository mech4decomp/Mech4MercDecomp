/*
 * FUN_006AA370 (96 B) — __fastcall (ECX = this) destructor helper.
 *
 * Releases a chain of sub-objects (at this+0x5C, +0x58, +0x60, +0x64,
 * +0x68) via their vtable slot 0, then sets a float field to -1.0f.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006aa370(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x5c]
        push    edi
        xor     edi, edi
        cmp     ecx, edi
        jz      l_skip1
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip1:
        mov     ecx, dword ptr [esi + 0x58]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x5c], edi
        jz      l_done
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     ecx, dword ptr [esi + 0x60]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x58], edi
        jz      l_skip2
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip2:
        mov     ecx, dword ptr [esi + 0x64]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x60], edi
        jz      l_skip3
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_skip3:
        mov     ecx, dword ptr [esi + 0x68]
        cmp     ecx, edi
        mov     dword ptr [esi + 0x64], edi
        jz      l_skip4
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip4:
        mov     dword ptr [esi + 0x68], edi
    l_done:
        pop     edi
        mov     dword ptr [esi + 0x20], 0xbf800000
        pop     esi
        ret
    }
}
