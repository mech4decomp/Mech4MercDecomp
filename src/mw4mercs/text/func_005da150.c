/*
 * FUN_005da150 (287 B) — __thiscall vector insert/append of 12-byte elements.
 *
 * this (ECX) = {begin, end, capacity} int* vector of 3-dword elements.
 * Params: param_1 (esp+0x20), param_2 (esp+0x24), param_3 (esp+0x28).
 * RET 0xC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(unsigned int size);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_0040ccd0(void *src);

__declspec(naked) void __stdcall FUN_005da150(void *param_1, void *param_2, void *param_3)
{
    __asm {
        sub     esp, 0xC
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [ebp + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp]
        sub     ecx, edi
        mov     eax, 0x2AAAAAAB
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1F
        add     edx, eax
        cmp     edx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x10], edx
        lea     eax, [esp + 0x28]
        jc      L187
        lea     eax, [esp + 0x10]
L187:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x18], eax
        jz      L1A6
        lea     ecx, [eax + eax*2]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L1AE
L1A6:
        mov     dword ptr [esp + 0x10], 0
L1AE:
        mov     ebx, dword ptr [esp + 0x20]
        cmp     edi, ebx
        mov     esi, dword ptr [esp + 0x10]
        jz      L1D0
L1BA:
        test    esi, esi
        jz      L1C6
        push    edi
        mov     ecx, esi
        call    FUN_0040ccd0
L1C6:
        add     edi, 0xC
        add     esi, 0xC
        cmp     edi, ebx
        jnz     L1BA
L1D0:
        mov     edi, dword ptr [esp + 0x28]
        cmp     edi, 0x1
        jnz     L1F6
        test    esi, esi
        jz      L1F1
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esi + 0x4], ecx
        mov     dword ptr [esi + 0x8], edx
L1F1:
        add     esi, 0xC
        jmp     L214
L1F6:
        test    edi, edi
        jbe     L214
        mov     ebp, dword ptr [esp + 0x24]
L1FE:
        test    esi, esi
        jz      L20A
        push    ebp
        mov     ecx, esi
        call    FUN_0040ccd0
L20A:
        add     esi, 0xC
        dec     edi
        jnz     L1FE
        mov     ebp, dword ptr [esp + 0x14]
L214:
        mov     ebp, dword ptr [ebp + 0x4]
        cmp     ebx, ebp
        jz      L238
        mov     edi, ebx
        sub     edi, esi
L21F:
        test    esi, esi
        jz      L22E
        lea     eax, [edi + esi]
        push    eax
        mov     ecx, esi
        call    FUN_0040ccd0
L22E:
        add     esi, 0xC
        lea     ecx, [edi + esi]
        cmp     ecx, ebp
        jnz     L21F
L238:
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     dword ptr [esp + 0x28], eax
        jz      L24F
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L24F:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        lea     edx, [eax + eax*2]
        lea     eax, [ecx + edx*4]
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi], ecx
        mov     dword ptr [edi + 0x8], eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret     0xC
    }
}
