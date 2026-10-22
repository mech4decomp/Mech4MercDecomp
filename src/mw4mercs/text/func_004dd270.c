/*
 * FUN_004dd270 (195 B) — __thiscall Adept::ApplicationStateEngine ctor
 * (RET 0x1c). Delegates to FUN_004151c0, computes a count from param_4 /
 * param_5 (or copies from param_3), allocates an 8-byte-stride array via
 * FUN_004084d0, copies source data, and fills the array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004084d0(void);
extern int g_007b8c10;

__declspec(naked) void FUN_004dd270(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        push    esi
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_004151c0
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [g_007b8c10]
        mov     edx, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esp + 0x20]
        mov     dword ptr [ebx + 0x20], eax
        xor     eax, eax
        xor     edi, edi
        cmp     esi, ecx
        mov     dword ptr [ebx + 0x1c], edx
        mov     dword ptr [ebx + 0x14], eax
        mov     dword ptr [ebx + 0x18], eax
        jz      L_copy_from_src
        cmp     ebp, eax
        mov     edi, esi
        jnz     L_count
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [ebx + 0x14], ecx
        jmp     L_alloc
L_copy_from_src:
        cmp     ebp, eax
L_count:
        jle     L_inc
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, ebp
L_count_loop:
        mov     eax, dword ptr [ecx]
        cmp     eax, dword ptr [ebx + 0x14]
        jle     L_count_next
        mov     dword ptr [ebx + 0x14], eax
L_count_next:
        add     ecx, 0x8
        dec     edx
        jnz     L_count_loop
L_inc:
        inc     dword ptr [ebx + 0x14]
L_alloc:
        mov     edx, dword ptr [ebx + 0x14]
        shl     edx, 0x3
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [ebx + 0x18], eax
        jz      L_fill
        mov     ecx, dword ptr [edi + 0x14]
        test    ecx, ecx
        jle     L_fill
        mov     esi, dword ptr [edi + 0x18]
        and     ecx, 0x1fffffff
        shl     ecx, 0x1
        mov     edi, eax
        rep movsd
L_fill:
        test    ebp, ebp
        jle     L_done
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, ebp
L_fill_loop:
        mov     edx, dword ptr [eax]
        mov     esi, dword ptr [ebx + 0x18]
        mov     edi, edx
        mov     dword ptr [esi + edx*0x8], edi
        mov     edi, dword ptr [eax + 0x4]
        add     eax, 0x8
        dec     ecx
        mov     dword ptr [esi + edx*0x8 + 0x4], edi
        jnz     L_fill_loop
L_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0x1c
    }
}
