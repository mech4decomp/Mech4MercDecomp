/*
 * FUN_00622da0 (461 B) - __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * ABL interpreter region. Searches a growable array (offsets 0x2b8/0x2bc/0x2c0)
 * for an entry matching param_1; updates it if found, otherwise grows the array
 * and appends a new entry. Calls FUN_00622a00 / FUN_006250e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00622a00(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006250e0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00622da0(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x2b8]
        mov     byte ptr [edi + 0x2f4], 0x1
        mov     ecx, dword ptr [edi + 0x2bc]
        xor     dl, dl
        cmp     eax, ecx
        jz      L_622df1
L_622dc1:
        mov     esi, dword ptr [eax]
        cmp     esi, dword ptr [esp + 0x24]
        jnz     L_622de1
        mov     bl, byte ptr [esp + 0x30]
        mov     dl, 0x1
        cmp     bl, dl
        jnz     L_622de1
        mov     esi, dword ptr [esp + 0x28]
        mov     bl, byte ptr [esp + 0x2c]
        mov     dword ptr [eax + 0x4], esi
        mov     byte ptr [eax + 0xc], bl
L_622de1:
        add     eax, 0x10
        cmp     eax, ecx
        jnz     L_622dc1
        cmp     dl, 0x1
        jz      L_622f64
L_622df1:
        mov     dl, byte ptr [esp + 0x2c]
        mov     eax, dword ptr [edi + 0x2bc]
        mov     ebx, dword ptr [edi + 0x2b8]
        mov     esi, dword ptr [edi + 0x2bc]
        sub     eax, ebx
        mov     byte ptr [esp + 0x1c], dl
        mov     edx, dword ptr [edi + 0x2c0]
        sar     eax, 0x4
        or      ecx, 0xffffffff
        cmp     esi, edx
        mov     dword ptr [esp + 0xc], eax
        jz      L_622e58
        test    esi, esi
        jz      L_622e3e
        mov     ebx, dword ptr [esp + 0x24]
        mov     edx, esi
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [esp + 0x28]
        mov     dword ptr [edx + 0x4], ebx
        mov     dword ptr [edx + 0x8], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [edx + 0xc], ecx
L_622e3e:
        add     esi, 0x10
        push    eax
        mov     ecx, edi
        mov     dword ptr [edi + 0x2bc], esi
        call    FUN_00622a00
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     0x10
L_622e58:
        mov     ecx, dword ptr [edi + 0x2b8]
        mov     eax, esi
        sub     eax, ecx
        sar     eax, 0x4
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x2c], 0x1
        mov     dword ptr [esp + 0x30], eax
        lea     ecx, [esp + 0x2c]
        jc      L_622e7e
        lea     ecx, [esp + 0x30]
L_622e7e:
        push    ebp
        mov     ebp, dword ptr [ecx]
        add     ebp, eax
        mov     dword ptr [esp + 0x34], ebp
        jz      L_622e9d
        mov     edx, ebp
        shl     edx, 0x4
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x30], eax
        jmp     L_622ea5
L_622e9d:
        mov     dword ptr [esp + 0x30], 0x0
L_622ea5:
        mov     eax, dword ptr [edi + 0x2b8]
        cmp     eax, esi
        mov     ebx, dword ptr [esp + 0x30]
        jz      L_622ecd
        mov     ebp, eax
L_622eb5:
        push    ebp
        push    ebx
        call    FUN_006250e0
        add     ebp, 0x10
        add     esp, 0x8
        add     ebx, 0x10
        cmp     ebp, esi
        jnz     L_622eb5
        mov     ebp, dword ptr [esp + 0x34]
L_622ecd:
        test    ebx, ebx
        jz      L_622eed
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, ebx
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [ecx + 0x4], eax
        or      eax, 0xffffffff
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx + 0xc], edx
L_622eed:
        add     ebx, 0x10
        cmp     esi, esi
        jz      L_622f25
        mov     eax, esi
        sub     eax, ebx
L_622ef8:
        test    ebx, ebx
        jz      L_622f1b
        lea     ecx, [eax + ebx]
        mov     ebp, dword ptr [ecx]
        mov     edx, ebx
        mov     dword ptr [edx], ebp
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], ebp
        mov     ebp, dword ptr [ecx + 0x8]
        mov     dword ptr [edx + 0x8], ebp
        mov     ecx, dword ptr [ecx + 0xc]
        mov     ebp, dword ptr [esp + 0x34]
        mov     dword ptr [edx + 0xc], ecx
L_622f1b:
        add     ebx, 0x10
        lea     edx, [eax + ebx]
        cmp     edx, esi
        jnz     L_622ef8
L_622f25:
        mov     eax, dword ptr [edi + 0x2b8]
        test    eax, eax
        mov     dword ptr [esp + 0x34], eax
        jz      L_622f3c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_622f3c:
        mov     eax, dword ptr [esp + 0x30]
        shl     ebp, 0x4
        add     ebp, eax
        mov     dword ptr [edi + 0x2b8], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x2c0], ebp
        pop     ebp
        push    eax
        mov     ecx, edi
        mov     dword ptr [edi + 0x2bc], ebx
        call    FUN_00622a00
L_622f64:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     0x10
    }
}
