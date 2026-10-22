/*
 * FUN_005da060 (232 B) — __thiscall vector insert/append.
 *
 * this (ECX) = {begin, end, capacity} int* vector. Params:
 *   param_1 (esp+0x18) = source range begin
 *   param_2 (esp+0x1c) = source range end / single value
 *   param_3 (esp+0x20) = count
 * RET 0xC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(unsigned int size);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005da060(void *param_1, void *param_2, void *param_3)
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
        jc      L087
        lea     ecx, [esp + 0x10]
L087:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L0A7
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x20], eax
        jmp     L0AF
L0A7:
        mov     dword ptr [esp + 0x20], 0
L0AF:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        jz      L0CF
        mov     ecx, ebp
L0BD:
        test    eax, eax
        jz      L0C5
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
L0C5:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        jnz     L0BD
L0CF:
        cmp     esi, 0x1
        jnz     L0E5
        test    eax, eax
        jz      L0E0
        mov     ecx, dword ptr [esp + 0x1C]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
L0E0:
        add     eax, 0x4
        jmp     L0FD
L0E5:
        test    esi, esi
        jbe     L0FD
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1C]
L0EF:
        test    eax, eax
        jz      L0F7
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
L0F7:
        add     eax, 0x4
        dec     ecx
        jnz     L0EF
L0FD:
        cmp     edx, edi
        mov     esi, eax
        jz      L11A
        mov     ecx, edx
        sub     ecx, eax
L107:
        test    esi, esi
        jz      L110
        mov     edx, dword ptr [ecx + esi]
        mov     dword ptr [esi], edx
L110:
        add     esi, 0x4
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jnz     L107
L11A:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1C], eax
        jz      L12D
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L12D:
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
