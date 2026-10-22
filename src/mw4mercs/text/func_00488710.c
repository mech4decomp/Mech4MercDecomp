/*
 * FUN_00488710 (83 B) — __thiscall (2 stack args, RET 8). Reads a byte
 * index at [esi+0x12]; if in [0,1] calls FUN_0048AD90. Then calls a virtual
 * method, masks a field, and if ebx>=0 appends ebx into a per-index bucket
 * table at [this+0x14]/[this+0x54].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048AD90(void);

__declspec(naked) void FUN_00488710(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        xor     eax, eax
        mov     al, byte ptr [esi + 0x12]
        or      ebx, 0xffffffff
        push    edi
        mov     edi, ecx
        test    eax, eax
        jl      loc_488738
        cmp     eax, 1
        jg      loc_488738
        push    ebp
        push    esi
        call    FUN_0048AD90
        mov     ebx, eax
loc_488738:
        mov     eax, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 4]
        and     eax, 0xf
        test    ebx, ebx
        jl      loc_48875c
        mov     ecx, dword ptr [edi + eax*4 + 0x14]
        lea     edx, [ecx + 1]
        mov     dword ptr [edi + eax*4 + 0x14], edx
        mov     eax, dword ptr [edi + eax*8 + 0x54]
        mov     dword ptr [eax + ecx*4], ebx
loc_48875c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
