/*
 * FUN_00662c60 (227 B) — STL-style vector push_back (__thiscall).
 * Fast path appends in place; slow path reallocates via FUN_004084d0,
 * copies elements, frees old buffer, updates begin/end/capacity.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00662c60(void *param)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 8]
        push    edi
        mov     edi, dword ptr [ecx + 4]
        cmp     edi, eax
        mov     dword ptr [esp + 0xc], ecx
        jz      L_8b
        test    edi, edi
        jz      L_7e
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax]
        mov     dword ptr [edi], edx
L_7e:
        add     edi, 4
        mov     dword ptr [ecx + 4], edi
        pop     edi
        add     esp, 0xc
        ret     4
L_8b:
        push    ebx
        mov     ebx, dword ptr [ecx]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 2
        cmp     eax, 1
        push    ebp
        push    esi
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_b0
        lea     ecx, [esp + 0x14]
L_b0:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_ce
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        jmp     L_d0
L_ce:
        xor     ebp, ebp
L_d0:
        cmp     ebx, edi
        mov     eax, ebp
        jz      L_ea
        mov     ecx, ebx
L_d8:
        test    eax, eax
        jz      L_e0
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_e0:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edi
        jnz     L_d8
L_ea:
        test    eax, eax
        jz      L_f6
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_f6:
        cmp     edi, edi
        lea     esi, [eax + 4]
        jz      L_14
        mov     eax, edi
        sub     eax, esi
L_01:
        test    esi, esi
        jz      L_0a
        mov     ecx, dword ptr [eax + esi]
        mov     dword ptr [esi], ecx
L_0a:
        add     esi, 4
        lea     edx, [eax + esi]
        cmp     edx, edi
        jnz     L_01
L_14:
        test    ebx, ebx
        mov     dword ptr [esp + 0x20], ebx
        jz      L_25
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_25:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 4], esi
        pop     esi
        lea     edx, [ebp + ecx*4]
        mov     dword ptr [eax], ebp
        pop     ebp
        pop     ebx
        mov     dword ptr [eax + 8], edx
        pop     edi
        add     esp, 0xc
        ret     4
    }
}
