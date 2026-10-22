/*
 * FUN_004F43E0 (87 B) — MLR/Adept render-state toggle. __thiscall (ECX = this).
 * Sets byte at +0x168, virtual [+0x48](1), virtual [+0x28](this+0x178), then
 * branches on a magic-object field to call virtual [+0x34](0) or [+0x34](1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dab44;
extern unsigned int g_7dab40;

__declspec(naked) void __fastcall FUN_004f43e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    0x1
        mov     byte ptr [esi + 0x168], 0x1
        call    dword ptr [eax + 0x48]
        mov     eax, dword ptr [esi + 0x178]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x28]
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x50]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        mov     ecx, dword ptr [esi + 0x178]
        jz      L1
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x34]
        pop     esi
        ret
L1:
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x34]
        pop     esi
        ret
    }
}
