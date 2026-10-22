/*
 * FUN_00659aa0 (200 B) — __thiscall copy-constructor, RET 0x4 (1 stack arg).
 *
 * Copies a 0x28-byte-element array from param_1 into a newly allocated
 * buffer (FUN_004084d0), element count = (param_1[1]-*param_1)/0x28.
 * Sets this = {buf, buf, buf + count*0x28} and copies each element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void *__cdecl FUN_00659aa0(void *this, int *param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x4]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax + 0x8]
        mov     byte ptr [esp + 0x10], cl
        push    edi
        mov     edi, dword ptr [eax]
        mov     ecx, ebx
        sub     ecx, edi
        mov     eax, 0x66666667
        imul    ecx
        mov     cl, byte ptr [esp + 0x14]
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     eax, 0
        mov     dword ptr [esi], eax
        mov     byte ptr [esi + 0x8], cl
        mov     ebp, edx
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        jz      l_alloc_done
        lea     edx, [ebp + ebp * 4]
        shl     edx, 0x3
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
    l_alloc_done:
        cmp     edi, ebx
        lea     ecx, [ebp + ebp * 4]
        lea     edx, [eax + ecx * 8]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], edx
        mov     ebp, eax
        jz      l_done
        lea     eax, [ebp + 0x10]
        lea     ecx, [edi + 0x10]
    l_copy:
        cmp     eax, 0x10
        jz      l_advance
        mov     edx, dword ptr [edi]
        mov     dword ptr [ebp], edx
        mov     dl, byte ptr [ecx - 0xc]
        mov     byte ptr [eax - 0xc], dl
        mov     edx, dword ptr [ecx - 0x8]
        mov     dword ptr [eax - 0x8], edx
        mov     edx, dword ptr [ecx - 0x4]
        mov     dword ptr [eax - 0x4], edx
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
    l_advance:
        add     edi, 0x28
        add     ecx, 0x28
        add     ebp, 0x28
        add     eax, 0x28
        cmp     edi, ebx
        jnz     l_copy
    l_done:
        pop     edi
        mov     dword ptr [esi + 0x4], ebp
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
