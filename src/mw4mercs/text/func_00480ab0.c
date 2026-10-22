/*
 * FUN_00480ab0 (148 B) — __thiscall MLRIndexedPrimitiveBase constructor
 * (variant). Initializes member buffers, allocates a 0x30-byte
 * vertex/normal/index descriptor block at [ESI+0xc], zero-fills it.
 * RET 0x4 (1 stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_00491280(void);
extern void *__cdecl FUN_004084d0(int);

__declspec(naked) void FUN_00480ab0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        lea     edi, [esi+0x24]
        mov     dword ptr [esi+0x14], ebx
        mov     dword ptr [esi+0x18], ebx
        mov     ecx, edi
        mov     dword ptr [esi+0x1c], ebx
        mov     dword ptr [esi+0x20], ebx
        call    FUN_004911e0
        lea     ebp, [esi+0x2c]
        mov     ecx, ebp
        call    FUN_00491280
        mov     eax, 1
        mov     dword ptr [ebp], ebx
        push    0x30
        mov     dword ptr [edi], ebx
        mov     byte ptr [esi+0x11], al
        mov     word ptr [esi+8], ax
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      L_80b33
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax+4], ebx
        mov     dword ptr [eax+8], ebx
        mov     dword ptr [eax+0xc], ebx
        mov     dword ptr [eax+0x10], ebx
        mov     dword ptr [eax+0x14], ebx
        mov     dword ptr [eax+0x18], ebx
        mov     dword ptr [eax+0x1c], ebx
        mov     dword ptr [eax+0x20], ebx
        mov     dword ptr [eax+0x24], ebx
        pop     edi
        mov     dword ptr [eax+0x28], ebx
        mov     dword ptr [eax+0x2c], ebx
        mov     dword ptr [esi+0xc], eax
        mov     byte ptr [esi+0x13], bl
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    L_80b33:
        xor     eax, eax
        pop     edi
        mov     dword ptr [esi+0xc], eax
        mov     byte ptr [esi+0x13], bl
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
