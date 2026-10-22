/*
 * FUN_0064BF90 (191 B) — __thiscall (ECX=this, RET 0xc) that searches
 * tables for a string via a function pointer (0x0076b304) and
 * FUN_0064ff50 / FUN_00650080.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_b304;   /* 0x0076b304 (function pointer) */
extern unsigned long g_d970;   /* 0x0080d970 */

extern void __cdecl FUN_0064ff50(void);
extern void __cdecl FUN_00650080(void);

__declspec(naked) void FUN_0064bf90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        mov     ebp, dword ptr [g_b304]
        push    esi
        mov     esi, ecx
        jz      l_c2
        mov     eax, dword ptr [eax + 0x30]
        push    eax
        push    ebx
        call    ebp
        add     esp, 0x4
        push    eax
        call    FUN_0064ff50
        add     esp, 0x8
        test    eax, eax
        jnz     l_49
    l_c2:
        mov     esi, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [g_d970]
        lea     esi, [esi + esi*4]
        shl     esi, 0x3
        mov     edx, dword ptr [esi + ecx*1 + 0x4]
        mov     eax, dword ptr [edx + 0x30]
        push    edi
        push    eax
        push    ebx
        call    ebp
        add     esp, 0x4
        push    eax
        call    FUN_0064ff50
        add     esp, 0x8
        test    eax, eax
        jnz     l_48
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jz      l_3c
        mov     ecx, dword ptr [g_d970]
        mov     eax, dword ptr [esi + ecx*1 + 0x10]
        xor     edi, edi
        test    eax, eax
        jle     l_3c
    l_05:
        mov     edx, dword ptr [esi + ecx*1 + 0x14]
        mov     eax, dword ptr [edx + edi*4]
        mov     eax, dword ptr [eax + 0x20]
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ecx + edx*8 + 0x4]
        mov     ecx, dword ptr [eax + 0x30]
        push    ecx
        push    ebx
        call    ebp
        add     esp, 0x4
        push    eax
        call    FUN_0064ff50
        add     esp, 0x8
        test    eax, eax
        jnz     l_48
        mov     ecx, dword ptr [g_d970]
        mov     eax, dword ptr [esi + ecx*1 + 0x10]
        inc     edi
        cmp     edi, eax
        jl      l_05
    l_3c:
        push    ebx
        call    ebp
        push    eax
        call    FUN_00650080
        add     esp, 0x8
    l_48:
        pop     edi
    l_49:
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
