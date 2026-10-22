/*
 * FUN_0064e930 (142 B) — Allocates a 0x28-byte object via FUN_004084d0,
 * copies a 0x18-byte header from param_1 into it, then builds a dynamic
 * array (count = (param[4]-param[3])>>2) via FUN_005db560 and fills it
 * through FUN_0064e9c0.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_005db560(int size);
extern int __cdecl FUN_0064e9c0(int a, int b, int c);

__declspec(naked) void *__stdcall FUN_0064e930(int *param1)
{
    __asm {
        push    ecx
        push    esi
        push    0x28
        call    FUN_004084d0
        lea     esi, [eax + 0x10]
        xor     edx, edx
        add     esp, 0x4
        cmp     esi, edx
        mov     dword ptr [esp + 0x4], eax
        jz      l_done
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x4], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [esi + 0x8], ecx
        push    ebx
        mov     ebx, dword ptr [eax + 0x10]
        and     ecx, 0xfffffffe
        push    ebp
        push    edi
        mov     dword ptr [eax + 0x8], ecx
        mov     ebp, dword ptr [eax + 0xc]
        mov     cl, byte ptr [eax + 0x14]
        mov     edi, ebx
        sub     edi, ebp
        sar     edi, 0x2
        mov     dword ptr [esi + 0xc], edx
        mov     byte ptr [esi + 0x14], cl
        mov     dword ptr [esi + 0x10], edx
        mov     dword ptr [esi + 0x14], edx
        jz      l_zero
        lea     edx, [edi * 4 + 0]
        push    edx
        call    FUN_005db560
        add     esp, 0x4
        jmp     l_join
    l_zero:
        xor     eax, eax
    l_join:
        push    eax
        lea     ecx, [eax + edi * 4]
        push    ebx
        push    ebp
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], ecx
        call    FUN_0064e9c0
        add     esp, 0xc
        pop     edi
        pop     ebp
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [esp + 0x8]
        pop     ebx
    l_done:
        pop     esi
        pop     ecx
        ret     4
    }
}
