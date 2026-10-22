/*
 * FUN_10017040 (148 B) - __fastcall sub-destructor (ECX = this).
 * SEH-framed destructor that frees two member arrays (count/ptr pairs
 * at 0xe0/0xd4 and 0x48/0x3c), calls FUN_100067d0 on this+0x20, and
 * installs the vtable 0x10021688.
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210ec;                 /* free() function pointer @ 0x100210ec */
extern void __cdecl FUN_100067d0(void);  /* sub-object destructor @ 0x100067d0 */

__declspec(naked) void __cdecl FUN_10017040(void)
{
    __asm {
        push    -1
        push    0x1001ffc8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        mov     ebx, dword ptr [g_100210ec]
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi

        mov     eax, dword ptr [esi + 0xe0]
        mov     dword ptr [esp + 0xc], esi
        cmp     eax, edi
        jbe     L1
        mov     eax, dword ptr [esi + 0xd4]
        cmp     eax, edi
        jz      L1
        push    eax
        call    ebx
        add     esp, 4
L1:
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xe0], edi

        mov     eax, dword ptr [esi + 0x48]
        mov     dword ptr [esp + 0x18], edi
        cmp     eax, edi
        jbe     L2
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, edi
        jz      L2
        push    eax
        call    ebx
        add     esp, 4
L2:
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x48], edi
        call    FUN_100067d0

        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], 0x10021688
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
