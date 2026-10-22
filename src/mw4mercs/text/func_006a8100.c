/*
 * FUN_006A8100 (232 B) — Vector-style grow/insert helper (same shape as
 * FUN_00694970 / FUN_00698A20).
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_006A8100(void)
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
        jc      L_A8127
        lea     ecx, [esp + 0x10]
L_A8127:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_A8147
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
        jmp     L_A814F
L_A8147:
        mov     dword ptr [esp + 0x20], 0x0
L_A814F:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        jz      L_A816F
        mov     ecx, ebp
L_A815D:
        test    eax, eax
        jz      L_A8165
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
L_A8165:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        jnz     L_A815D
L_A816F:
        cmp     esi, 0x1
        jnz     L_A8185
        test    eax, eax
        jz      L_A8180
        mov     ecx, dword ptr [esp + 0x1C]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
L_A8180:
        add     eax, 0x4
        jmp     L_A819D
L_A8185:
        test    esi, esi
        jbe     L_A819D
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1C]
L_A818F:
        test    eax, eax
        jz      L_A8197
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
L_A8197:
        add     eax, 0x4
        dec     ecx
        jnz     L_A818F
L_A819D:
        cmp     edx, edi
        mov     esi, eax
        jz      L_A81BA
        mov     ecx, edx
        sub     ecx, eax
L_A81A7:
        test    esi, esi
        jz      L_A81B0
        mov     edx, dword ptr [ecx + esi]
        mov     dword ptr [esi], edx
L_A81B0:
        add     esi, 0x4
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jnz     L_A81A7
L_A81BA:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1C], eax
        jz      L_A81CD
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_A81CD:
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
