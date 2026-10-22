/*
 * FUN_005d8a30 (483 B) — Rail graph lookup: initialize a 64-entry lookup
 * table on the stack, index into a 2D grid, and return a table entry
 * selected by grid flags. RET 0x10.
 *
 * __thiscall (ECX = this), four stack params, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __fastcall FUN_005d8a30(void *this)
{
    
__asm {
sub     esp, 0x100
        mov     ecx, dword ptr [ecx + 0x3c]
        mov     edx, 0x1
        mov     eax, 0x2
        push    esi
        xor     esi, esi
        mov     dword ptr [esp + 0x4], edx
        mov     dword ptr [esp + 0x8], edx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x48], edx
        mov     dword ptr [esp + 0x4c], edx
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [esp + 0x6c], edx
        mov     dword ptr [esp + 0x70], edx
        mov     dword ptr [esp + 0x74], edx
        mov     dword ptr [esp + 0x90], edx
        mov     dword ptr [esp + 0x94], edx
        mov     dword ptr [esp + 0x98], edx
        mov     dword ptr [esp + 0xb4], edx
        mov     dword ptr [esp + 0xb8], edx
        mov     dword ptr [esp + 0xbc], edx
        mov     dword ptr [esp + 0xd8], edx
        mov     dword ptr [esp + 0xdc], edx
        mov     dword ptr [esp + 0xe0], edx
        mov     dword ptr [esp + 0xe4], edx
        mov     dword ptr [esp + 0xfc], edx
        mov     dword ptr [esp + 0x100], edx
        mov     edx, dword ptr [esp + 0x10c]
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x30], esi
        mov     dword ptr [esp + 0x40], esi
        mov     dword ptr [esp + 0x44], esi
        mov     dword ptr [esp + 0x54], esi
        mov     dword ptr [esp + 0x68], esi
        mov     dword ptr [esp + 0x78], esi
        mov     dword ptr [esp + 0x8c], esi
        mov     dword ptr [esp + 0x9c], esi
        mov     dword ptr [esp + 0xb0], esi
        mov     dword ptr [esp + 0xc0], esi
        mov     dword ptr [esp + 0xc4], esi
        mov     dword ptr [esp + 0xd4], esi
        mov     dword ptr [esp + 0xe8], esi
        mov     dword ptr [esp + 0xf8], esi
        mov     esi, dword ptr [esp + 0x108]
        shl     edx, 0x9
        add     edx, esi
        mov     esi, dword ptr [ecx + 0x8]
        xor     ecx, ecx
        mov     cx, word ptr [esi + edx*2 + 0x40200]
        test    byte ptr [esp + 0x114], al
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x58], eax
        mov     dword ptr [esp + 0x5c], eax
        mov     dword ptr [esp + 0x60], eax
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x7c], eax
        mov     dword ptr [esp + 0x80], eax
        mov     dword ptr [esp + 0x84], eax
        mov     dword ptr [esp + 0x88], eax
        mov     dword ptr [esp + 0xa0], eax
        mov     dword ptr [esp + 0xa4], eax
        mov     dword ptr [esp + 0xa8], eax
        mov     dword ptr [esp + 0xac], eax
        mov     dword ptr [esp + 0xc8], eax
        mov     dword ptr [esp + 0xcc], eax
        mov     dword ptr [esp + 0xd0], eax
        mov     dword ptr [esp + 0xec], eax
        mov     dword ptr [esp + 0xf0], eax
        mov     dword ptr [esp + 0xf4], eax
        pop     esi
        jz      L8BE3
        test    ch, 0x3
        jz      L8BE3
        xor     eax, eax
        add     esp, 0x100
        ret     0x10
L8BE3:
        test    ch, 0xc
        jnz     L8BF3
        xor     eax, eax
        add     esp, 0x100
        ret     0x10
L8BF3:
        mov     edx, dword ptr [esp + 0x10c]
        sar     ecx, 0xc
        and     ecx, 0x7
        and     edx, 0x7
        lea     eax, [edx + ecx*8]
        __emit 0x8B          // mov eax,[esp+eax*4+0] - MSVC6 drops the disp8=0 (encodes 8B 04 84)
        __emit 0x44
        __emit 0x84
        __emit 0x00
        add     esp, 0x100
        ret     0x10
    }


}
