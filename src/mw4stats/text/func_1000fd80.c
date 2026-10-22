/*
 * FUN_1000fd80 (75 B) - __stdcall. Byte-swaps a little-endian dword array into
 * a big-endian byte buffer (MD5 digest output helper).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_1000fd80(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        jbe     L2
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        or      esi, -1
        lea     eax, [edx + 0x1]
        sub     esi, edx
L1:
        mov     dl, byte ptr [ecx]
        add     ecx, 0x4
        mov     byte ptr [eax + -0x1], dl
        mov     edx, dword ptr [ecx + -0x4]
        shr     edx, 0x8
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [ecx + -0x4]
        shr     edx, 0x10
        mov     byte ptr [eax + 0x1], dl
        mov     edx, dword ptr [ecx + -0x4]
        shr     edx, 0x18
        mov     byte ptr [eax + 0x2], dl
        add     eax, 0x4
        lea     edx, [esi + eax*1]
        cmp     edx, edi
        jc      L1
        pop     esi
L2:
        pop     edi
        ret     0xc
    }
}
