/*
 * FUN_0061ea00 (221 B) — __thiscall (ECX = this), RET 4. Vector-style
 * container push_back: if the buffer is full, reallocate (grow), copy
 * old elements, free old buffer, and update begin/end/capacity.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int n);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_0061ea00(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 0x8]
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        cmp     edi, eax
        mov     dword ptr [esp + 0xc], ecx
        jz      L_2b
        test    edi, edi
        jz      L_1e
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax]
        mov     dword ptr [edi], edx
    L_1e:
        add     edi, 0x4
        mov     dword ptr [ecx + 0x4], edi
        pop     edi
        add     esp, 0xc
        ret     0x4
    L_2b:
        push    ebx
        push    ebp
        mov     ebp, dword ptr [ecx]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, 0x1
        push    esi
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_50
        lea     ecx, [esp + 0x14]
    L_50:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_6e
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebx, eax
        jmp     L_70
    L_6e:
        xor     ebx, ebx
    L_70:
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, ebx
        jle     L_8c
        mov     edx, ebp
        sub     edx, ebx
    L_81:
        mov     esi, dword ptr [edx + ecx]
        mov     dword ptr [ecx], esi
        add     ecx, 0x4
        dec     eax
        jnz     L_81
    L_8c:
        test    ecx, ecx
        jz      L_98
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ecx], eax
    L_98:
        mov     eax, edi
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        lea     esi, [ecx + 0x4]
        jle     L_b3
        sub     edi, esi
    L_a8:
        mov     ecx, dword ptr [edi + esi]
        mov     dword ptr [esi], ecx
        add     esi, 0x4
        dec     eax
        jnz     L_a8
    L_b3:
        test    ebp, ebp
        jz      L_c0
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
    L_c0:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x4], esi
        pop     esi
        pop     ebp
        lea     ecx, [ebx + edx*4]
        mov     dword ptr [eax], ebx
        pop     ebx
        mov     dword ptr [eax + 0x8], ecx
        pop     edi
        add     esp, 0xc
        ret     0x4
    }
}
