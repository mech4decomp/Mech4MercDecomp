/*
 * FUN_00621C10 (312 B) — __thiscall (ECX = this), RET 0x4 (one stack param).
 * Inserts an element into a vector of pointers, growing the backing array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00621ba0(void);
extern void __cdecl FUN_00624520(void);
extern void __cdecl FUN_00625680(void);
extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_00621c10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0xc
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        jl      L_d3e
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [esi + 4]
        sub     ecx, edx
        sar     ecx, 2
        cmp     eax, ecx
        jnc     L_d3e
        lea     ebx, [eax*4]
        mov     eax, dword ptr [ebx + edx]
        test    eax, eax
        mov     dword ptr [esp + 0x18], ebx
        jz      L_d3e
        mov     ecx, dword ptr [esi + 0x10]
        mov     edi, eax
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ecx
        jz      L_c68
    L_c59:
        cmp     dword ptr [eax], edi
        jz      L_d3e
        add     eax, 4
        cmp     eax, ecx
        jnz     L_c59
    L_c68:
        mov     edx, dword ptr [ebx + edx]
        push    edx
        mov     ecx, esi
        call    FUN_00621ba0
        mov     edx, dword ptr [esi]
        mov     edi, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi + 0x14]
        mov     eax, ebx
        add     eax, edx
        cmp     edi, ecx
        mov     dword ptr [esp + 0x14], eax
        jz      L_c9a
        test    edi, edi
        jz      L_c8f
        mov     eax, dword ptr [eax]
        mov     dword ptr [edi], eax
    L_c8f:
        add     edi, 4
        mov     dword ptr [esi + 0x10], edi
        jmp     L_d32
    L_c9a:
        mov     ebx, dword ptr [esi + 0xc]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x20], 1
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x20]
        jc      L_cbd
        lea     ecx, [esp + 0x10]
    L_cbd:
        add     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x20], eax
        jz      L_cd9
        lea     ecx, [eax*4]
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        jmp     L_cdb
    L_cd9:
        xor     ebp, ebp
    L_cdb:
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        push    ebp
        push    edi
        push    ebx
        call    FUN_00625680
        add     esp, 0x10
        test    eax, eax
        jz      L_cf7
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
    L_cf7:
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        add     eax, 4
        push    eax
        push    edi
        push    edi
        call    FUN_00625680
        add     esp, 0x10
        test    ebx, ebx
        mov     edi, eax
        mov     dword ptr [esp + 0x14], ebx
        jz      L_d1d
        push    ebx
        call    FUN_004084e0
        add     esp, 4
    L_d1d:
        mov     edx, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [esp + 0x18]
        lea     eax, [ebp + edx*4]
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], eax
    L_d32:
        mov     ecx, dword ptr [esi]
        mov     ecx, dword ptr [ebx + ecx]
        push    1
        call    FUN_00624520
    L_d3e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     4
    }
}
