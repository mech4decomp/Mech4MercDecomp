/*
 * FUN_00618080 (128 B) — Object constructor.
 *
 * __thiscall (ECX = this), RET 0x14 (five stack params).
 * Calls FUN_00415180(g_7b8c10), sets up vtable pointers and fields,
 * bumps a refcount, and calls FUN_00412740(param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412740(void);

extern int g_7b8c10;

__declspec(naked) void *__stdcall FUN_00618080(int param_1, int *param_2, int param_3, int param_4, int param_5)
{
    __asm {
        mov     eax, dword ptr [g_7b8c10]
        push    ebx
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esi], 0x76cd9c
        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x10], eax
        jz      l_ad
        inc     byte ptr [eax - 1]
    l_ad:
        mov     ax, word ptr [esp + 0xc]
        mov     dword ptr [esi + 0x14], ebx
        lea     ecx, [esi + 0x14]
        mov     word ptr [esi + 0x18], 0xffff
        mov     word ptr [esi + 0x1a], bx
        mov     dword ptr [esi], 0x78c4fc
        mov     word ptr [esi + 0x18], ax
        mov     ax, word ptr [esp + 0xe]
        push    edx
        mov     word ptr [esi + 0x1a], ax
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x28], eax
        mov     byte ptr [esi + 0x1c], bl
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x20], ecx
        mov     dword ptr [esi + 0x24], edx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x14
    }
}
