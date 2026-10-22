/*
 * FUN_005da360 (334 B) — __thiscall vector insert of 12-byte elements with
 * grow / in-place / overwrite branches.
 *
 * this (ECX) = {begin, end, capacity} int* vector of 3-dword elements.
 * Params: param_1 (esp+0x20), param_2 (esp+0x24). RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(unsigned int size);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_0040c410(void *src);
extern void __stdcall FUN_0040c5d0(void *src);
extern void __stdcall FUN_005cbb20(void *dst, void *src);
extern void * FUN_005da500(void *this_, int count, void *src);
extern void FUN_005da4b0(void *this_);

__declspec(naked) void __stdcall FUN_005da360(void *param_1, void *param_2)
{
    __asm {
        sub     esp, 0xC
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp]
        mov     ecx, dword ptr [ebp + 0x8]
        sub     ecx, ebx
        mov     eax, 0x2AAAAAAB
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        push    esi
        shr     eax, 0x1F
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        add     edx, eax
        cmp     edi, edx
        jbe     L3F1
        mov     cl, byte ptr [ebp + 0x8]
        lea     edx, [esp + 0x20]
        push    edx
        mov     byte ptr [esp + 0x24], cl
        push    edi
        lea     ecx, [esp + 0x18]
        call    FUN_005da500
        test    edi, edi
        mov     esi, dword ptr [esp + 0x10]
        jbe     L3BB
L3A7:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        push    esi
        call    FUN_005cbb20
        add     esp, 0x8
        add     esi, 0xC
        dec     edi
        jnz     L3A7
L3BB:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebp], eax
        mov     ecx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x4], esi
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [ebp + 0x8], eax
        call    FUN_005da4b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret     0x8
L3F1:
        mov     esi, dword ptr [ebp + 0x4]
        mov     ecx, esi
        sub     ecx, ebx
        mov     eax, 0x2AAAAAAB
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1F
        add     edx, eax
        cmp     edi, edx
        mov     dword ptr [esp + 0x20], edx
        jbe     L452
        cmp     ebx, esi
        jz      L42B
L414:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    FUN_0040c410
        add     ebx, 0xC
        cmp     ebx, esi
        jnz     L414
        mov     edx, dword ptr [esp + 0x20]
L42B:
        sub     edi, edx
        jz      L445
L42F:
        test    esi, esi
        jz      L43F
        mov     edx, dword ptr [esp + 0x24]
        push    edx
        mov     ecx, esi
        call    FUN_0040c5d0
L43F:
        add     esi, 0xC
        dec     edi
        jnz     L42F
L445:
        pop     edi
        mov     dword ptr [ebp + 0x4], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret     0x8
L452:
        test    edi, edi
        mov     ecx, ebx
        jbe     L472
        mov     eax, dword ptr [esp + 0x24]
L45C:
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x8], edx
        add     ecx, 0xC
        dec     edi
        jnz     L45C
L472:
        mov     edx, esi
        sub     edx, esi
        mov     eax, 0x2AAAAAAB
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1F
        add     edx, eax
        test    edx, edx
        mov     edi, ecx
        jle     L4A1
        sub     esi, ecx
        mov     ebx, edx
L490:
        lea     ecx, [esi + edi]
        push    ecx
        mov     ecx, edi
        call    FUN_0040c410
        add     edi, 0xC
        dec     ebx
        jnz     L490
L4A1:
        mov     dword ptr [ebp + 0x4], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret     0x8
    }
}
