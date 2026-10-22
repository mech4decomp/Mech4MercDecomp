/*
 * FUN_00662B40 (241 B) — __thiscall, RET 4 (1 stack param).
 * Growable uint-array push helper. Appends a value to a dynamic array,
 * reallocating via FUN_004084d0 when full and freeing the old buffer
 * via FUN_004084e0. Contains an unreachable copy block (0x00662BEB).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_00662B40(void *param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x8
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [eax]
        mov     ebx, ecx
        mov     esi, dword ptr [ebx + 0x8]
        mov     dword ptr [eax], 0x0
        mov     eax, dword ptr [ebx + 0xc]
        and     edi, 0xfffffffc
        cmp     esi, eax
        jz      L_2B76
        test    esi, esi
        jz      L_2B67
        mov     dword ptr [esi], edi
L_2B67:
        add     esi, 0x4
        pop     edi
        mov     dword ptr [ebx + 0x8], esi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x4
L_2B76:
        push    ebp
        mov     ebp, dword ptr [ebx + 0x4]
        mov     eax, esi
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x1c], 0x1
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x1c]
        jc      L_2B9A
        lea     ecx, [esp + 0x10]
L_2B9A:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_2BBA
        lea     eax, [ecx*4 + 0x0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_2BC2
L_2BBA:
        mov     dword ptr [esp + 0x1c], 0x0
L_2BC2:
        cmp     ebp, esi
        mov     eax, dword ptr [esp + 0x1c]
        jz      L_2BDE
        mov     ecx, ebp
L_2BCC:
        test    eax, eax
        jz      L_2BD4
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_2BD4:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, esi
        jnz     L_2BCC
L_2BDE:
        test    eax, eax
        jz      L_2BE4
        mov     dword ptr [eax], edi
L_2BE4:
        cmp     esi, esi
        lea     edi, [eax + 0x4]
        jz      L_2C02
        mov     eax, esi
        sub     eax, edi
L_2BEF:
        test    edi, edi
        jz      L_2BF8
        mov     ecx, dword ptr [eax + edi]
        mov     dword ptr [edi], ecx
L_2BF8:
        add     edi, 0x4
        lea     edx, [eax + edi]
        cmp     edx, esi
        jnz     L_2BEF
L_2C02:
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], ebp
        jz      L_2C13
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_2C13:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        pop     ebp
        mov     dword ptr [ebx + 0x8], edi
        pop     edi
        lea     edx, [eax + ecx*4]
        pop     esi
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [ebx + 0xc], edx
        pop     ebx
        add     esp, 0x8
        ret     0x4
    }
}
