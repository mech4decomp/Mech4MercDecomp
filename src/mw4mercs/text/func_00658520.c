/*
 * FUN_00658520 (221 B) — __thiscall (ECX = this), RET 8, 2 stack params.
 * Initializes a bucket/block structure: allocates a block array (via
 * FUN_004084d0), fills each slot with a 0x200-byte allocation, and sets
 * up begin/end/capacity pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int n);

__declspec(naked) void __stdcall FUN_00658520(void)
{
    __asm {
        push    ecx
        xor     eax, eax
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     cl, byte ptr [ecx]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x10], eax
        mov     byte ptr [esi + 0x20], cl
        shr     edi, 0x6
        mov     dword ptr [esi + 0x20], eax
        mov     byte ptr [esi + 0x24], cl
        inc     edi
        lea     ecx, [edi + 0x2]
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esp + 0x18], ecx
        cmp     ecx, 0x8
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esp + 0x10], 0x8
        lea     ecx, [esp + 0x18]
        ja      L_576
        lea     ecx, [esp + 0x10]
    L_576:
        mov     ebx, dword ptr [ecx]
        cmp     ebx, eax
        mov     dword ptr [esi + 0x24], ebx
        jz      L_58f
        lea     edx, [ebx*4]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
    L_58f:
        sub     ebx, edi
        shr     ebx, 0x1
        lea     ebx, [eax + ebx*4]
        lea     ebp, [ebx + edi*4]
        cmp     ebx, ebp
        mov     dword ptr [esi + 0x20], eax
        mov     edi, ebx
        jnc     L_5b8
    L_5a2:
        push    0x200
        call    FUN_004084d0
        mov     dword ptr [edi], eax
        add     edi, 0x4
        add     esp, 0x4
        cmp     edi, ebp
        jc      L_5a2
    L_5b8:
        add     ebp, -0x4
        mov     dword ptr [esi + 0xc], ebx
        mov     ebx, dword ptr [ebx]
        mov     dword ptr [esi + 0x1c], ebp
        mov     ebp, dword ptr [ebp]
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi + 0x14], ebp
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [esp + 0x1c]
        add     ebx, 0x200
        add     ebp, 0x200
        and     eax, 0x3f
        mov     dword ptr [esi + 0x8], ebx
        lea     edx, [ecx + eax*8]
        pop     edi
        mov     dword ptr [esi + 0x18], ebp
        mov     dword ptr [esi + 0x10], edx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
