/*
 * FUN_006cc4d0 (126 B) — Linked-list node insertion.
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 * Allocates a 0x14-byte node via FUN_006f3c80 and links it into a
 * list at this, either as the head (empty list) or after the node at
 * [this+0xc]. Increments the count at [this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f3c80(void);
extern int g_82e220;

__declspec(naked) void __fastcall FUN_006cc4d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0xc]
        test    edi, edi
        jnz     loc_512
        mov     eax, dword ptr [g_82e220]
        push    eax
        push    0x14
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0x8], edi
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [eax + 0xc], ecx
        mov     eax, dword ptr [esi]
        inc     eax
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     0xc
loc_512:
        mov     edx, dword ptr [g_82e220]
        push    edx
        push    0x14
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [edi + 0x4], eax
        mov     dword ptr [eax + 0x8], edi
        mov     dword ptr [esi + 0xc], eax
        mov     eax, dword ptr [esi]
        inc     eax
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     0xc
    }
}
