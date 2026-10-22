/*
 * FUN_10018750 (100 B) - __fastcall destructor with SEH frame. Frees the
 * buffer at +0x3c (size at +0x48), destroys sub-object at +0x20, and
 * restores the base vtable.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_100210ec;
extern unsigned long g_10021688;
extern void __cdecl FUN_100067d0(void);

__declspec(naked) void __cdecl FUN_10018750(void)
{
    __asm {
        push    -1
        push    0x10020038
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
        mov     dword ptr [esi], offset g_10021688
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
