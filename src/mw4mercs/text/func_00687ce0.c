/*
 * FUN_00687ce0 (136 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 * Vector/array constructor: allocates param_1 * 0x18 bytes via FUN_004084d0,
 * initializes this{0,4,8} (begin/end/capacity), and copies param_1 elements
 * of 0x18 bytes each from param_2. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);

__declspec(naked) void __fastcall FUN_00687ce0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        test    edi, edi
        mov     dword ptr [esi], 0x0
        mov     byte ptr [esi + 0x8], cl
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi + 0x8], 0x0
        jz      l_d1a
        lea     edx, [edi + edi*0x2]
        shl     edx, 0x3
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        jmp     l_d1c
l_d1a:
        xor     eax, eax
l_d1c:
        test    edi, edi
        lea     ecx, [edi + edi*0x2]
        lea     edx, [eax + ecx*0x8]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], edx
        jbe     l_d5e
        mov     ecx, dword ptr [esp + 0x10]
l_d32:
        test    eax, eax
        jz      l_d58
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0xc], edx
        mov     dl, byte ptr [ecx + 0x10]
        mov     byte ptr [eax + 0x10], dl
        mov     edx, dword ptr [ecx + 0x14]
        mov     dword ptr [eax + 0x14], edx
l_d58:
        add     eax, 0x18
        dec     edi
        jnz     l_d32
l_d5e:
        mov     dword ptr [esi + 0x4], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
