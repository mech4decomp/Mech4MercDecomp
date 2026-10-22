/*
 * FUN_004b3260 (113 B) — __thiscall. ShapeLODElement "attach LOD" helper:
 * scans a slot array at [this+0x174] (count at [this+0x178]) for a free
 * (NULL) slot; if found, records the element and its 8-byte payload into
 * [this+0x17c] and returns the slot index. If full, asserts via
 * FUN_006fab90 and returns -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004b3260(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x178]
        xor     eax, eax
        test    edi, edi
        jbe     L_328c
        mov     esi, dword ptr [ecx + 0x174]
        xor     edx, edx
    L_3279:
        cmp     dword ptr [esi + edx*4], 0
        jz      L_32a7
        inc     eax
        mov     edx, eax
        and     edx, 0xffff
        cmp     edx, edi
        jc      L_3279
    L_328c:
        push    0x7706b0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_329e
        int     3
    L_329e:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebp
        ret     8
    L_32a7:
        mov     edx, dword ptr [ebp + 8]
        and     eax, 0xffff
        inc     word ptr [edx + 0x10]
        mov     dword ptr [esi + eax*4], edx
        mov     edx, dword ptr [ecx + 0x17c]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 4]
        pop     edi
        mov     dword ptr [edx + eax*8], esi
        pop     esi
        mov     dword ptr [edx + eax*8 + 4], ecx
        pop     ebp
        ret     8
    }
}
