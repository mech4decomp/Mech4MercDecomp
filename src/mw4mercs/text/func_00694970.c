/*
 * FUN_00694970 (232 B) — Vector-style grow/insert helper.
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 * Reallocates the element buffer, copies existing elements, inserts
 * new elements from param_2, and shifts the tail.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00694970(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1C]
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebx + 0x4]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x20]
        jc      L_94997
        lea     ecx, [esp + 0x10]
L_94997:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_949B7
        /* __emit: no-base SIB form lea eax,[ecx*4+0] (8D 04 8D) not encodable natively */
        __emit 0x8D
        __emit 0x04
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x20], eax
        jmp     L_949BF
L_949B7:
        mov     dword ptr [esp + 0x20], 0x0
L_949BF:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        jz      L_949DF
        mov     ecx, ebp
L_949CD:
        test    eax, eax
        jz      L_949D5
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
L_949D5:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        jnz     L_949CD
L_949DF:
        cmp     esi, 0x1
        jnz     L_949F5
        test    eax, eax
        jz      L_949F0
        mov     ecx, dword ptr [esp + 0x1C]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
L_949F0:
        add     eax, 0x4
        jmp     L_94A0D
L_949F5:
        test    esi, esi
        jbe     L_94A0D
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1C]
L_949FF:
        test    eax, eax
        jz      L_94A07
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
L_94A07:
        add     eax, 0x4
        dec     ecx
        jnz     L_949FF
L_94A0D:
        cmp     edx, edi
        mov     esi, eax
        jz      L_94A2A
        mov     ecx, edx
        sub     ecx, eax
L_94A17:
        test    esi, esi
        jz      L_94A20
        mov     edx, dword ptr [ecx + esi]
        mov     dword ptr [esi], edx
L_94A20:
        add     esi, 0x4
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jnz     L_94A17
L_94A2A:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1C], eax
        jz      L_94A3D
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_94A3D:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [ebx + 0x4], esi
        pop     esi
        lea     edx, [eax + ecx*4]
        pop     ebp
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx + 0x8], edx
        pop     ebx
        pop     ecx
        ret     0xC
    }
}
