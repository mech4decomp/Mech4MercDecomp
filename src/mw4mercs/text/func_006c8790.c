/*
 * FUN_006c8790 (238 B) — Object constructor with linked-list registration.
 *
 * ECX = this. Sets vtable, allocates a 0x10-byte node, links it into a
 * global list (DAT_0082f350), allocates two buffers via FUN_006f3c80,
 * and returns this.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b294;   /* IAT: malloc */
extern int g_82f350;
extern int g_82f354;
extern int g_82e224;
extern char g_79e21c[];  /* vtable ptr */
extern void *__cdecl FUN_006f3c80(int a, int b);

__declspec(naked) void *__fastcall FUN_006c8790(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    0x10
        mov     dword ptr [esi], offset g_79e21c
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [g_82f350]
        xor     edx, edx
        add     esp, 4
        cmp     ecx, edx
        mov     dword ptr [eax + 0xc], esi
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], edx
        jnz     loc_6c87c9
        mov     dword ptr [g_82f350], eax
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], edx
        jmp     loc_6c87e2
loc_6c87c9:
        mov     edi, dword ptr [ecx + 0x4]
        cmp     edi, edx
        jz      loc_6c87d9
loc_6c87d0:
        mov     ecx, edi
        mov     edi, dword ptr [ecx + 0x4]
        cmp     edi, edx
        jnz     loc_6c87d0
loc_6c87d9:
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
loc_6c87e2:
        inc     dword ptr [g_82f354]
        lea     ebp, [esi + 0x4]
        xor     eax, eax
        mov     ecx, 6
        mov     edi, ebp
        rep     stosd
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        lea     ebx, [eax*4 + 0]
        mov     dword ptr [esi + 0xc], ebx
        imul    ebx, ecx
        mov     dword ptr [esi + 0x8], eax
        mov     eax, dword ptr [g_82e224]
        push    eax
        push    ebx
        mov     dword ptr [ebp], ecx
        mov     dword ptr [esi + 0x10], 0x20
        mov     dword ptr [esi + 0x20], edx
        mov     byte ptr [esi + 0x1c], dl
        mov     byte ptr [esi + 0x1d], dl
        mov     byte ptr [esi + 0x1e], dl
        mov     byte ptr [esi + 0x24], 1
        call    FUN_006f3c80
        mov     ecx, ebx
        mov     edx, ecx
        mov     edi, eax
        shr     ecx, 2
        xor     eax, eax
        mov     dword ptr [esi + 0x14], edi
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        mov     ebx, dword ptr [esi + 0xc]
        imul    ebx, dword ptr [ebp]
        mov     eax, dword ptr [g_82e224]
        push    eax
        push    ebx
        call    FUN_006f3c80
        mov     ecx, ebx
        mov     edx, ecx
        mov     edi, eax
        shr     ecx, 2
        mov     dword ptr [esi + 0x18], edi
        xor     eax, eax
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
