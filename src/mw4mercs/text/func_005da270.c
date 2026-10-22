/*
 * FUN_005da270 (232 B) — __thiscall vector insert/append (4-byte elements).
 *
 * Same structure as FUN_005da060. this (ECX) = {begin, end, capacity} int*.
 * Params: param_1 (esp+0x18), param_2 (esp+0x1c), param_3 (esp+0x20).
 * RET 0xC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(unsigned int size);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005da270(void *param_1, void *param_2, void *param_3)
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
        jc      L297
        lea     ecx, [esp + 0x10]
L297:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L2B7
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x20], eax
        jmp     L2BF
L2B7:
        mov     dword ptr [esp + 0x20], 0
L2BF:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        jz      L2DF
        mov     ecx, ebp
L2CD:
        test    eax, eax
        jz      L2D5
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
L2D5:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        jnz     L2CD
L2DF:
        cmp     esi, 0x1
        jnz     L2F5
        test    eax, eax
        jz      L2F0
        mov     ecx, dword ptr [esp + 0x1C]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
L2F0:
        add     eax, 0x4
        jmp     L30D
L2F5:
        test    esi, esi
        jbe     L30D
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1C]
L2FF:
        test    eax, eax
        jz      L307
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
L307:
        add     eax, 0x4
        dec     ecx
        jnz     L2FF
L30D:
        cmp     edx, edi
        mov     esi, eax
        jz      L32A
        mov     ecx, edx
        sub     ecx, eax
L317:
        test    esi, esi
        jz      L320
        mov     edx, dword ptr [ecx + esi]
        mov     dword ptr [esi], edx
L320:
        add     esi, 0x4
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jnz     L317
L32A:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1C], eax
        jz      L33D
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L33D:
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
