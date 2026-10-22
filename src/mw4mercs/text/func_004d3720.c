/*
 * FUN_004d3720 (127 B) -- MLR network/server subsystem object constructor.
 * __thiscall (ECX = this), RET 0x4 (1 param).
 *
 * Calls FUN_004cc130(param,3), initializes the object (vtable ptr 0x772868,
 * flags, copies 0xc dwords from DAT_007b9460 into [this+0x1c]), allocates a
 * 0x1c-byte child via FUN_004084d0 and constructs it via FUN_004d3510.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004cc130(int a, int b);
extern int __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_004d3510(int a, int b, void *c);

extern int g_007dc110;   /* DAT_007dc110 */
extern int g_7b9460[];   /* DAT_007b9460 (0xc dword template) */
extern char g_772868[];  /* vtable ptr @ 0x772868 */

__declspec(naked) void *__stdcall FUN_004d3720(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x3
        mov     ebp, ecx
        push    eax
        call    FUN_004cc130
        xor     ebx, ebx
        lea     edi, [ebp + 0x1c]
        mov     ecx, 0xc
        mov     esi, offset g_7b9460
        mov     dword ptr [ebp], offset g_772868
        mov     byte ptr [ebp + 0x14], bl
        mov     byte ptr [ebp + 0x16], 0x1
        mov     byte ptr [ebp + 0x17], bl
        push    0x1c
        mov     dword ptr [ebp + 0x60], ebx
        mov     byte ptr [ebp + 0x58], bl
        rep movsd
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L378B
        mov     ecx, dword ptr [g_007dc110]
        push    ebp
        push    0x1
        push    ecx
        mov     ecx, eax
        call    FUN_004d3510
        pop     edi
        mov     dword ptr [ebp + 0x4c], eax
        pop     esi
        mov     dword ptr [ebp + 0x5c], ebx
        mov     dword ptr [ebp + 0x18], ebx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x4
L378B:
        pop     edi
        xor     eax, eax
        mov     dword ptr [ebp + 0x4c], eax
        pop     esi
        mov     dword ptr [ebp + 0x5c], ebx
        mov     dword ptr [ebp + 0x18], ebx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
