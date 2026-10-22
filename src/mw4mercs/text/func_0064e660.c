/*
 * FUN_0064e660 (115 B) — Vector/array copy constructor.
 *
 * __thiscall (ECX = this), RET 4 (one stack param). Copies a range
 * [src, end) of 4-byte elements into a freshly allocated buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int size);
extern void (__cdecl *g_memmove)(void *, const void *, unsigned int);

__declspec(naked) void * __fastcall FUN_0064e660(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax + 8]
        push    edi
        mov     edi, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        mov     ebp, 0
        mov     ebx, edi
        sub     ebx, eax
        sar     ebx, 2
        mov     dword ptr [esi], ebp
        mov     byte ptr [esi + 8], cl
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esi + 4], ebp
        mov     dword ptr [esi + 8], ebp
        jz      l_skip
        lea     eax, [ebx*4]
        push    eax
        call    FUN_004084d0
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 4
    l_skip:
        sub     edi, eax
        sar     edi, 2
        shl     edi, 2
        push    edi
        push    eax
        lea     ecx, [ebp + ebx*4]
        push    ebp
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 4], ebp
        mov     dword ptr [esi + 8], ecx
        call    dword ptr [g_memmove]
        add     esp, 0xc
        add     edi, ebp
        mov     dword ptr [esi + 4], edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
