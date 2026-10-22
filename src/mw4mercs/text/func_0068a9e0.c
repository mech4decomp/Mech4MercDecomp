/*
 * FUN_0068a9e0 (140 B) — __thiscall (ECX = this), RET 8 (two stack args).
 *
 * Constructor: calls FUN_006b0710(param_1, param_2) on this, then
 * initializes a set of fields (vtable 0x798dd8, counts, flags).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b0710(void *p1, void *p2);

__declspec(naked) void *__stdcall FUN_0068a9e0(void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_006b0710
        mov     dl, byte ptr [esp + 0x14]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x34], ebx
        mov     byte ptr [esi + 0x3c], dl
        mov     ecx, ebx
        mov     edx, ecx
        sub     edx, ecx
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        mov     dword ptr [esi + 0x3c], ebx
        add     edx, eax
        cmp     edx, ebx
        mov     dword ptr [esi], 0x798dd8
        mov     edi, dword ptr [esi + 0x34]
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x20], ebx
        jle     L_aa47
L_aa2e:
        mov     eax, dword ptr [ecx]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [edi + 0x4], eax
        mov     eax, dword ptr [ecx + 0x8]
        mov     dword ptr [edi + 0x8], eax
        add     ecx, 0xc
        add     edi, 0xc
        dec     edx
        jnz     L_aa2e
L_aa47:
        mov     dword ptr [esi + 0x38], edi
        pop     edi
        mov     dword ptr [esi + 0x40], ebx
        mov     byte ptr [esi + 0x24], bl
        mov     dword ptr [esi + 0x2c], ebx
        mov     byte ptr [esi + 0x30], bl
        mov     dword ptr [esi + 0x28], 0xffffffff
        mov     dword ptr [esi + 0x8], 0x9
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
