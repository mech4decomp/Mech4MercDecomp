/*
 * FUN_00422ea0 (258 B) — __thiscall constructor for an MLR object.
 * Sets up a vtable pointer, initializes a sub-object at [this+0xc]
 * (FUN_00491280), and ORs a large set of render-state/format flags into
 * the sub-object's dwords. RET 0x4 (one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00491280(void);

extern int g_007b9610;
extern char g_007b9608;
extern int g_76ddec;

__declspec(naked) void FUN_00422ea0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b9610]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_00415180
        lea     esi, [edi+0xc]
        mov     ecx, esi
        call    FUN_00491280
        mov     ebx, dword ptr [esp+0x10]
        mov     ebx, dword ptr [ebx+0x1c]
        mov     dword ptr [edi], offset g_76ddec
        xor     ecx, ecx
        mov     dword ptr [edi+0x8], ecx
        mov     edx, dword ptr [esi+0x8]
        mov     eax, 0x3fff
        or      edx, eax
        mov     dword ptr [esi+0x8], edx
        mov     edx, dword ptr [esi]
        and     edx, 0xffffc000
        or      ebx, edx
        mov     dword ptr [esi], ebx
        mov     dword ptr [edi+0x14], eax
        mov     ebx, dword ptr [esi]
        mov     edx, dword ptr [esi+0x8]
        and     ebx, 0xffe7ffff
        mov     dword ptr [esi], ebx
        or      edx, 0x180000
        mov     dword ptr [esi+0x8], edx
        mov     eax, ebx
        or      eax, 0x8000000
        mov     dword ptr [esi], eax
        mov     ebx, edx
        mov     edx, eax
        or      ebx, 0x8000000
        mov     dword ptr [esi+0x8], ebx
        mov     eax, ebx
        mov     ebx, dword ptr [esi+0x4]
        or      eax, 0x4000000
        mov     dword ptr [esi+0x8], eax
        and     edx, 0xfbffffff
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [esi+0x10]
        mov     eax, 0x10
        or      ebx, eax
        or      edx, eax
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi+0x4], ebx
        mov     ebx, dword ptr [esi+0x8]
        and     eax, 0xfffe7fff
        or      eax, 0x4000
        mov     dword ptr [esi], eax
        mov     dword ptr [esi+0x10], edx
        or      ebx, 0x1c000
        mov     edx, eax
        mov     dword ptr [esi+0x8], ebx
        mov     eax, ebx
        or      eax, 0x40000000
        mov     ebx, eax
        and     edx, 0xbfffffff
        mov     dword ptr [esi], edx
        mov     dword ptr [esi+0x8], eax
        or      ebx, 0x60000
        and     edx, 0xfffbffff
        mov     eax, ebx
        or      edx, 0x20000
        mov     dword ptr [esi+0x8], ebx
        or      eax, 0x200000
        mov     dword ptr [esi], edx
        mov     dword ptr [esi+0x8], eax
        or      edx, 0x200000
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi], edx
        pop     esi
        mov     byte ptr [g_007b9608], cl
        pop     ebx
        ret     0x4
    }
}
