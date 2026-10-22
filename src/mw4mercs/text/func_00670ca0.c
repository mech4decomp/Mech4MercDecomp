/*
 * FUN_00670ca0 (334 B) — __thiscall vector/array grow-and-insert helper.
 * Appends a 12-byte element to a dynamic array (grow via realloc-style
 * FUN_004084d0/FUN_004084e0), storing a double from FUN_00707e70.
 *
 * __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __stdcall FUN_00707e70(int id);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __cdecl FUN_00670ca0(void)
{
    __asm {
        sub     esp, 0x18
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     ebp, ecx
        push    0
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_00707e70
        mov     esi, dword ptr [ebp + 0x6c]
        cmp     esi, dword ptr [ebp + 0x70]
        fstp    qword ptr [esp + 0x1c]
        jz      L_ce8
        test    esi, esi
        jz      L_cd9
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, esi
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
L_cd9:
        add     esi, 0xc
        pop     edi
        mov     dword ptr [ebp + 0x6c], esi
        pop     esi
        pop     ebp
        add     esp, 0x18
        ret     4
L_ce8:
        push    ebx
        mov     ebx, dword ptr [ebp + 0x68]
        mov     ecx, esi
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 1
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x18], edx
        lea     eax, [esp + 0x10]
        jc      L_d19
        lea     eax, [esp + 0x18]
L_d19:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x18], eax
        jz      L_d38
        lea     ecx, [eax + eax*2]
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_d40
L_d38:
        mov     dword ptr [esp + 0x10], 0
L_d40:
        cmp     ebx, esi
        mov     eax, dword ptr [esp + 0x10]
        jz      L_d70
        mov     ecx, ebx
L_d4a:
        test    eax, eax
        jz      L_d66
        mov     edx, ecx
        mov     ebp, dword ptr [edx]
        mov     edi, eax
        mov     dword ptr [edi], ebp
        mov     ebp, dword ptr [edx + 4]
        mov     dword ptr [edi + 4], ebp
        mov     edx, dword ptr [edx + 8]
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 8], edx
L_d66:
        add     ecx, 0xc
        add     eax, 0xc
        cmp     ecx, esi
        jnz     L_d4a
L_d70:
        test    eax, eax
        jz      L_d8a
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, eax
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [edx + 4], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [edx + 8], ecx
L_d8a:
        cmp     esi, esi
        lea     edi, [eax + 0xc]
        jz      L_dbc
L_d91:
        mov     eax, esi
        sub     eax, edi
L_d95:
        test    edi, edi
        jz      L_db2
L_d99:
        lea     edx, [eax + edi*1]
        mov     ebp, dword ptr [edx]
        mov     ecx, edi
        mov     dword ptr [ecx], ebp
        mov     ebp, dword ptr [edx + 4]
        mov     dword ptr [ecx + 4], ebp
        mov     edx, dword ptr [edx + 8]
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 8], edx
L_db2:
        add     edi, 0xc
        lea     ecx, [eax + edi*1]
        cmp     ecx, esi
        jnz     L_d95
L_dbc:
        test    ebx, ebx
        mov     dword ptr [esp + 0x2c], ebx
        jz      L_dcd
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_dcd:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        pop     ebx
        mov     dword ptr [ebp + 0x6c], edi
        lea     edx, [eax + eax*2]
        pop     edi
        lea     eax, [ecx + edx*4]
        pop     esi
        mov     dword ptr [ebp + 0x68], ecx
        mov     dword ptr [ebp + 0x70], eax
        pop     ebp
        add     esp, 0x18
        ret     4
    }
}
