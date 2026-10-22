/*
 * FUN_005E8370 (185 B) — __fastcall, RET 4 (1 param in ECX).
 * Constructor-style initializer: zeroes a block of fields, copies 12
 * dwords from a template at 0x007B8C98 into [this+0x464], and loads
 * several globals into fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005e8370(void)
{
    
__asm {
mov     eax, ecx
        xor     edx, edx
        push    esi
        mov     dword ptr [eax + 0x424], edx
        mov     dword ptr [eax + 0x428], edx
        mov     dword ptr [eax + 0x42c], edx
        push    edi
        mov     dword ptr [eax + 0x430], edx
        mov     dword ptr [eax + 0x434], edx
        mov     dword ptr [eax + 0x438], edx
        mov     dword ptr [eax + 0x43c], edx
        mov     dword ptr [eax + 0x440], edx
        mov     dword ptr [eax + 0x444], edx
        mov     dword ptr [eax + 0x448], edx
        mov     dword ptr [eax + 0x44c], edx
        mov     dword ptr [eax + 0x450], edx
        lea     edi, [eax + 0x464]
        mov     ecx, 0xc
        mov     esi, 0x7b8c98
        rep     movsd
        mov     ecx, dword ptr [eax + 0x30]
        and     ecx, 0x7
        mov     dword ptr [eax + 0x454], ecx
        /* __emit: MSVC6 encodes mov ecx,[imm32] as B9 immediate load, not 8B 0D mem deref */
        _emit   0x8B
        _emit   0x0D
        _emit   0x88
        _emit   0x8D
        _emit   0x7B
        _emit   0x00
        mov     dword ptr [eax + 0x494], ecx
        /* __emit: MSVC6 encodes mov ecx,[imm32] as B9 immediate load, not 8B 0D mem deref */
        _emit   0x8B
        _emit   0x0D
        _emit   0x8C
        _emit   0x8D
        _emit   0x7B
        _emit   0x00
        mov     dword ptr [eax + 0x498], ecx
        /* __emit: MSVC6 encodes mov ecx,[imm32] as B9 immediate load, not 8B 0D mem deref */
        _emit   0x8B
        _emit   0x0D
        _emit   0x90
        _emit   0x8D
        _emit   0x7B
        _emit   0x00
        pop     edi
        mov     dword ptr [eax + 0x41c], edx
        mov     dword ptr [eax + 0x458], edx
        mov     dword ptr [eax + 0x420], edx
        mov     dword ptr [eax + 0x45c], edx
        mov     byte ptr [eax + 0x4a4], dl
        mov     dword ptr [eax + 0x49c], ecx
        mov     dword ptr [eax + 0x4a0], edx
        pop     esi
        ret     0x4
    }


}
