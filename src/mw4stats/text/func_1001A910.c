/*
 * FUN_1001a910 (100 B) - __fastcall (ECX = this). SEH-guarded destructor:
 * frees the buffer at +0x3c if +0x48 != 0, resets fields, calls
 * FUN_100067d0 on the sub-object at +0x20, and restores the vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100067d0(void);
extern void *g_100210ec;   /* IAT: free */

__declspec(naked) void __cdecl FUN_1001a910(void)
{
    __asm {
        push    -1
        push    0x100200e8
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
