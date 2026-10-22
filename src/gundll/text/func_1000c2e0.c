/*
 * FUN_1000c2e0 (177 B) - __thiscall, RET 0xc. Object constructor: clamps
 * params, zeroes fields, initializes critical section, computes page-aligned
 * buffer sizes via GetSystemInfo.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100491a8;   /* IAT: InitializeCriticalSection */
extern void *g_10049088;   /* IAT: GetSystemInfo */

__declspec(naked) void FUN_1000c2e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x24
        cmp     eax, 0x4
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        jnc     L_c2f6
        mov     eax, 0x4
L_c2f6:
        mov     edi, dword ptr [esp + 0x38]
        xor     ecx, ecx
        cmp     edi, ecx
        ja      L_c305
        mov     edi, 0x1
L_c305:
        mov     edx, dword ptr [esp + 0x3c]
        add     eax, 0x3
        and     eax, 0xfffffffc
        cmp     edx, ecx
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi + 0x18], ecx
        mov     dword ptr [esi + 0x20], ecx
        mov     dword ptr [esi + 0x1c], ecx
        mov     dword ptr [esi + 0x14], edx
        jz      L_c32d
        lea     ecx, [eax + 0x8]
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [esi + 0x10], eax
        jmp     L_c333
L_c32d:
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x10], ecx
L_c333:
        lea     edx, [esi + 0x24]
        push    edx
        call    dword ptr [g_100491a8]
        lea     eax, [esp + 0xc]
        push    eax
        call    dword ptr [g_10049088]
        mov     ebx, dword ptr [esi + 0x8]
        mov     ecx, ebx
        imul    ecx, edi
        mov     edi, dword ptr [esp + 0x10]
        add     ecx, 0x10
        xor     edx, edx
        mov     eax, ecx
        div     edi
        mov     edx, eax
        mov     eax, edi
        imul    eax, edx
        cmp     eax, ecx
        jnc     L_c36f
L_c368:
        add     eax, edi
        inc     edx
        cmp     eax, ecx
        jc      L_c368
L_c36f:
        mov     eax, edi
        imul    eax, edx
        sub     eax, 0x10
        xor     edx, edx
        div     ebx
        pop     edi
        mov     dword ptr [esi + 0x4], eax
        imul    eax, ebx
        add     eax, 0x10
        mov     dword ptr [esi], eax
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x24
        ret     0xc
    }
}
