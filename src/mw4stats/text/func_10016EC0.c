/*
 * FUN_10016ec0 (100 B) - __fastcall sub-destructor (ECX = this).
 * SEH-framed destructor that frees one member array (count/ptr pair
 * at 0x48/0x3c), calls FUN_100067d0 on this+0x20, and installs the
 * vtable 0x10021688.
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210ec;                 /* free() function pointer @ 0x100210ec */
extern void __cdecl FUN_100067d0(void);  /* sub-object destructor @ 0x100067d0 */

__declspec(naked) void __cdecl FUN_10016ec0(void)
{
    __asm {
        push    -1
        push    0x1001ff88
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 8], esi
        mov     eax, dword ptr [esi + 0x48]
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x14], edi
        jbe     L1
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, edi
        jz      L1
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L1:
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x48], edi
        call    FUN_100067d0

        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi], 0x10021688
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
