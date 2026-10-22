/*
 * FUN_00628330 (116 B) -- ABL interpreter object reset. __fastcall (ECX=this).
 *
 * Zeroes a set of dword fields at this+0xbc..0xcc, then if the object at
 * this+0x10c is non-null clears its byte flags (0x6c..0x71) and resets its
 * float/vector fields (0x80..0x8c) to -1.0/0, then resets this+0xd0..0xdc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00628330(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10c]
        xor     edx, edx
        cmp     eax, edx
        push    esi
        mov     dword ptr [ecx + 0xbc], edx
        mov     dword ptr [ecx + 0xc0], edx
        mov     dword ptr [ecx + 0xc4], edx
        mov     dword ptr [ecx + 0xc8], edx
        mov     dword ptr [ecx + 0xcc], edx
        mov     esi, 0xbf800000
        jz      L838A
        mov     byte ptr [eax + 0x70], dl
        mov     byte ptr [eax + 0x6c], dl
        mov     byte ptr [eax + 0x6d], dl
        mov     byte ptr [eax + 0x6e], dl
        mov     byte ptr [eax + 0x6f], dl
        mov     byte ptr [eax + 0x71], dl
        mov     dword ptr [eax + 0x80], esi
        mov     dword ptr [eax + 0x84], esi
        mov     dword ptr [eax + 0x88], edx
        mov     dword ptr [eax + 0x8c], edx
L838A:
        mov     dword ptr [ecx + 0xd0], esi
        mov     dword ptr [ecx + 0xd4], esi
        mov     dword ptr [ecx + 0xd8], edx
        mov     dword ptr [ecx + 0xdc], edx
        pop     esi
        ret
    }
}
