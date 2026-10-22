/*
 * FUN_10014380 (100 B, __fastcall, 1 param) - Real destructor. Installs
 * an SEH frame (FS:[0]), frees the buffer at +0x3c if non-null, calls
 * the sub-object destructor FUN_100067d0 on +0x20, sets the vtable
 * pointer at +0x0 to 0x10021688, and restores the SEH frame.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100067d0(void);
extern void *g_100210ec;   /* IAT: free */

__declspec(naked) void __cdecl FUN_10014380(void)
{
    __asm {
        push    -1
        push    0x1001fe48
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x8], esi
        mov     eax, dword ptr [esi + 0x48]
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x14], edi
        jbe     L_143bc
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, edi
        jz      L_143bc
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
    L_143bc:
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
