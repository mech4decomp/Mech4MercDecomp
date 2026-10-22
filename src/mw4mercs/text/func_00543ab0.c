/*
 * FUN_00543AB0 (267 B) ??? Virtual iterator/update function.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004084d0(int);
extern int __stdcall FUN_004084e0(int);

__declspec(naked) void __stdcall FUN_00543ab0(int param_1, int param_2)
{
    
__asm {
sub     esp, 0x8
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call dword ptr [eax + 0x08]
        test    eax, eax
        jz      loc_543bb3
        push    ebx
        xor     ebx, ebx

loc_543acd:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x24], bl
        call dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], ebx
        call dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        mov eax, dword ptr [edi + ecx*0x8 + 0x358c]
        cmp     eax, ebx
        jz      loc_543b36
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x20]
        and     eax, 0xff
        mov     edx, eax
        shl     edx, 0x7
        add     edx, eax
        shl     edx, 0x3
        add     esp, 0x4
        sub     edx, eax
        mov dword ptr [edi + edx*0x8 + 0x358c], ebx

loc_543b36:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        jz      loc_543b71
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x20]
        and     ecx, 0xff
        mov     edx, ecx
        shl     edx, 0x7
        add     edx, ecx
        shl     edx, 0x3
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x10]
        add     esp, 0x4
        push    ecx
        mov dword ptr [edi + edx*0x8 + 0x358c], eax
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]

loc_543b71:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], ebx
        call dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x10]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        mov     eax, dword ptr [esi]
        mov dword ptr [edi + ecx*0x8 + 0x3590], edx
        mov     ecx, esi
        call dword ptr [eax + 0x08]
        test    eax, eax
        jnz     loc_543acd
        pop     ebx

loc_543bb3:
        pop     edi
        pop     esi
        add     esp, 0x8
        ret     0x8
    }


}
