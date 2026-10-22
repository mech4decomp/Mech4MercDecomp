/*
 * FUN_004161f0 (139 B) — database list-callee helper. __fastcall (this in ECX).
 * Walks a linked list of nodes, pops the tail node (calling FUN_004084e0),
 * and recomputes [this+0x2c] from [this+0x18] - [this+0xc] (or the tail node
 * offset when the list is non-empty).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004161f0(void)
{
    __asm {
        push    ebx
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 0x2c]
        test    ebx, ebx
        jz      L16278
        mov     eax, dword ptr [edi + 0x14]
        cmp     ebx, eax
        jz      L16246
        cmp     dword ptr [edi + 0x18], eax
        jnz     L16238
        push    esi
        mov     esi, dword ptr [edi + 0x4]
        lea     ecx, [eax + -0x1]
        mov     eax, dword ptr [esi]
        cmp     eax, ecx
        jz      L1621C
L16214:
        mov     esi, eax
        mov     eax, dword ptr [esi]
        cmp     eax, ecx
        jnz     L16214
L1621C:
        push    ecx
        call    FUN_004084e0
        mov     ecx, dword ptr [esi + 0x4]
        lea     eax, [esi + 0x8]
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
        mov     dword ptr [edi + 0x14], eax
        mov     dword ptr [edi + 0x8], ecx
        pop     esi
L16238:
        mov     eax, dword ptr [edi + 0xc]
        mov     dword ptr [edi + 0x18], ebx
        sub     ebx, eax
        mov     dword ptr [edi + 0x2c], ebx
        pop     edi
        pop     ebx
        ret
L16246:
        mov     ecx, dword ptr [edi + 0x4]
        cmp     dword ptr [ecx], 0x0
        jnz     L16258
        mov     dword ptr [edi + 0x2c], 0x0
        pop     edi
        pop     ebx
        ret
L16258:
        lea     edx, [eax + -0x1]
        mov     eax, dword ptr [ecx]
        cmp     eax, edx
        jz      L16269
L16261:
        mov     ecx, eax
        mov     eax, dword ptr [ecx]
        cmp     eax, edx
        jnz     L16261
L16269:
        mov     eax, dword ptr [edi + 0xc]
        mov     edx, dword ptr [ecx + 0x4]
        sub     edx, eax
        lea     eax, [edx + ecx*0x1 + 0x8]
        mov     dword ptr [edi + 0x2c], eax
L16278:
        pop     edi
        pop     ebx
        ret
    }
}
