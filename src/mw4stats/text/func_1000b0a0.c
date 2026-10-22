/*
 * FUN_1000b0a0 (197 B) - __thiscall. Allocates a 0x26c-byte node,
 * copies a wide string into it, links it into a list (this+0x8/0xc/0x10),
 * and stamps it with the current system time (GetSystemTime +
 * SystemTimeToFileTime). Returns the node's +0xc pointer, or -1 on
 * allocation failure.
 *
 * __thiscall, 1 param (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_1001ee16(void);                 /* operator new */
extern void __cdecl FUN_1000b1e0(void *, void *, int);   /* wide-string copy */
extern void *g_10021094;   /* GetSystemTime IAT @ 0x10021094 */
extern void *g_10021090;   /* SystemTimeToFileTime IAT @ 0x10021090 */

__declspec(naked) int __cdecl FUN_1000b0a0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        push    0x26c
        call    FUN_1001ee16
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 0x4
        cmp     esi, ebx
        jnz     L_alloc_ok
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x10
        ret     0x4
L_alloc_ok:
        mov     eax, dword ptr [esp + 0x20]
        push    0x104
        lea     ecx, [esi + 0x48]
        push    eax
        push    ecx
        call    FUN_1000b1e0
        mov     edx, dword ptr [edi + 0x8]
        lea     eax, [esi + 0x4]
        add     esp, 0xc
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [edi + 0x8]
        inc     edx
        mov     dword ptr [edi + 0x8], edx
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x18], ebx
        mov     eax, dword ptr [edi + 0xc]
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi], ebx
        mov     eax, dword ptr [edi + 0xc]
        cmp     eax, ebx
        jz      L_skip1
        mov     dword ptr [eax + 0x18], esi
L_skip1:
        mov     eax, dword ptr [edi + 0x10]
        mov     dword ptr [edi + 0xc], esi
        cmp     eax, ebx
        jnz     L_skip2
        mov     eax, esi
L_skip2:
        lea     ecx, [esp + 0xc]
        mov     dword ptr [edi + 0x10], eax
        push    ecx
        mov     dword ptr [esi + 0x10], ebx
        call    dword ptr [g_10021094]
        lea     edi, [esi + 0x30]
        lea     edx, [esp + 0xc]
        push    edi
        push    edx
        call    dword ptr [g_10021090]
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [edi + 0x4]
        mov     dword ptr [esi + 0x20], eax
        mov     edx, eax
        mov     eax, ecx
        mov     dword ptr [esi + 0x28], edx
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, dword ptr [esi + 0xc]
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x3c], ebx
        mov     dword ptr [esi + 0x1c], ebx
        mov     dword ptr [esi + 0x40], ebx
        mov     dword ptr [esi + 0x44], ebx
        mov     dword ptr [esi + 0x24], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
