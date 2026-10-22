/*
 * FUN_0072f740 (62 B) — __thiscall. Walks a linked list starting at this->[0]
 * via the next pointer at +0x100. For each node, if node->+0x48 is non-null,
 * calls FUN_00755760(node->+0x48). Sets a global byte flag (0x0087dd0a) to 1
 * during the walk and back to 0 after. Finally zeroes this->+0x18/+0x20/+0x1c.
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_0087dd0a;   /* global flag byte */
extern void __cdecl FUN_00755760(void *p);

__declspec(naked) void __fastcall FUN_0072f740(void *this)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi]
        xor     ebx, ebx
        cmp     esi, ebx
        jz      L_end
    L_loop:
        mov     eax, dword ptr [esi + 0x48]
        cmp     eax, ebx
        mov     byte ptr [g_0087dd0a], 1
        jz      L_skip
        push    eax
        call    FUN_00755760
    L_skip:
        mov     esi, dword ptr [esi + 0x100]
        cmp     esi, ebx
        mov     byte ptr [g_0087dd0a], bl
        jnz     L_loop
    L_end:
        mov     dword ptr [edi + 0x18], ebx
        mov     byte ptr [edi + 0x20], bl
        mov     dword ptr [edi + 0x1c], ebx
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
